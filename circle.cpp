//circle.cpp
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <cmath>
#include <iostream>
#include "circle.h"

using namespace std;

Circle::Circle(double x, double y, double rad, const char* shapeName) : Shape(x, y, shapeName) { radius = rad;};

double Circle::area() {
    return (M_PI * pow(radius, 2));
}

double Circle::perimeter() {
    return (2 * M_PI * radius);
}

double Circle::getRadius()  { return radius; }

void Circle::setRadius(double r){ radius = r; }

void Circle::display()  {
    cout<<"Circle Name: "<<getName()<<endl;
    Point o = getOrigin();
    o.display();
    cout<<"Radius: "<<getRadius()<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
}