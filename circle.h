#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{
	public:
		Circle(double x, double y, double radius, const char* shapeName);
		double area() const;
		double perimeter() const;
		double getRadius() const;
		void setRadius(double r);
		void display() const;

	private:
		double radius;
};

#endif