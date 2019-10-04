#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : virtual public Shape{
	public:
		Circle(double x, double y, double radius, const char* shapeName);
		double area() ;
		double perimeter() ;
		double getRadius() ;
		void setRadius(double r);
		void display() ;

	private:
		double radius;
};

#endif