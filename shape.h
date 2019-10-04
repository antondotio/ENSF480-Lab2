#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
	public:
		Shape(double x, double y, const char* shapeName);
		virtual ~Shape();
		Shape& operator=(const Shape& rhs);
		Shape(const Shape& other);

		const Point& getOrigin() const; 
		const char* getName() const;

		virtual double area() = 0;
		virtual double perimeter() = 0;
		virtual void display() = 0;
		
		void display() const;
		double distance (Shape& other) const;
		static double distance (Shape& the_shape, Shape& other);
		void move(double dx, double dy);

	private:
		Point origin;
		char* shapeName;
};

#endif