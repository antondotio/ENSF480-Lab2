#ifndef SQUARE_H
#define SQUARE_H

#include"shape.h"

class Square : public Shape{
    public:
        Square(double x, double y, double side, char* name);
        double area();
        double perimeter();
        double getSideA();
        void setSideA(double side);
        void display();
    private:
        double side_a;
};

#endif