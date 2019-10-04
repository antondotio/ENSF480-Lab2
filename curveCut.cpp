
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string.h>
#include "curveCut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double sideA, double sideB, double rad, const char* name): 
    Shape (x, y, name),
    Rectangle(x, y, sideA, sideB, name), 
    Circle(x, y, rad, name){
        if (rad > sideA || rad > sideB){
            cerr << "error: radius should be less than the side lengths" << endl;
        }
    }
        
double CurveCut::area(){
    return (Rectangle::area() - Circle::area()/4);
}

double CurveCut::perimeter(){
    return (Rectangle::perimeter() - 2 * getRadius() + Circle::perimeter() / 4);
}

void CurveCut::display(){
    cout << "CurveCut Name: " << Rectangle::getName() << endl;
    Point o = getOrigin();
    o.display();
    cout << "Width: " << Rectangle::getSideA()<< endl;
    cout << "Length: " << Rectangle::getSideB()<< endl;
    cout << "Radius of the cut: " << Circle::getRadius() << endl;
}