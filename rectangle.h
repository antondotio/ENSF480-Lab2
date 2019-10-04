//rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square{
    public:
        Rectangle(Point origin, char* name, double sidea, double sideb);
        double area();
        double perimeter();
        double getSideB();
        void setSideB(double side);
        void display();
    private:
        double side_b;
};

#endif