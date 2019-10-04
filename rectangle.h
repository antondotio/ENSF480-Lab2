//rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square{
    public:
        Rectangle(double x, double y, double sidea, double sideb, const char* name);
        double area();
        double perimeter();
        double getSideB();
        void set_side_b(double side);
        void display();
    private:
        double side_b;
};

#endif