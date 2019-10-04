#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string.h>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* name): origin(Point(x,y)) {
	shapeName = new char[(int)strlen(name)];
	strcpy(shapeName, name);
};

const Point& Shape::getOrigin() const { return origin; }
const char* Shape::getName() const { return shapeName; }

void Shape::display() const {
	cout<<"Shape Name: "<<getName()<<endl;
	Point o = getOrigin();
	o.display();
}

double Shape::distance(Shape& other) const{
	return origin.distance(other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other){
	double distance;
	double xDist = the_shape.getOrigin().get_x() - other.getOrigin().get_x();
	double yDist = the_shape.getOrigin().get_y() - other.getOrigin().get_y();
	distance = sqrt(pow(xDist, 2) + pow(yDist, 2));
	return distance;
}

void Shape::move(double dx, double dy){
	double newx = origin.get_x() + dx;
	double newy = origin.get_y() + dy;
	origin.set_x(newx);
	origin.set_y(newy);
}

Shape::~Shape(){
delete [] shapeName;
}

Shape::Shape(const Shape& source):origin(source.origin), shapeName(new
char[strlen(source.shapeName)+1]){
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
	if(this==&rhs)
		return *this;
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
		}
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
}


