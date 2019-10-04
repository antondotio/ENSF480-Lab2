#define _USE_MATH_DEFINES

#include <stdio.h>
#include <cmath>
#include <iostream>
#include "circle.h"

using namespace std;

Circle::Circle(double x, double y, double radius, const char* shapeName) : Shape(x, y, shapeName), radius(radius) { };

double Circle::area() const{
    return (M_PI * pow(radius, 2));
}

double Circle::perimeter() const{
    return (2 * M_PI * radius);
}

double Circle::getRadius() const { return radius; }

void Circle::setRadius(double r){ radius = r; }

void Circle::display() const {
    cout<<"Circle Name: "<<getName()<<endl;
    Point o = getOrigin();
    o.display();
    cout<<"Radius: "<<getRadius()<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
}