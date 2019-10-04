#ifndef SQUARE_H
#define SQUARE_H

#include"shape.h"

class Square : public Shape{
    public:
        Square(double x, double y, char* name, double side);
        double area();
        double perimeter();
        double getSideA();
        double setSideA();
        void display();
    private:
        double side_a;
};

#endif