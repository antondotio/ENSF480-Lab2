#ifndef CURVECUT_H
#define CURVECUT_H

#include "rectangle.h"
#include "circle.h"
#include "shape.h"

class CurveCut: public Rectangle, public Circle{
    public:
        CurveCut(double x, double y, double sideA, double sideB, double rad, const char* name);
        double area();
        double perimeter();
        void display();
};


#endif