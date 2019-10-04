//rectangle.cpp
#include <stdio.h>
#include <cmath>
#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, double sidea, double sideb, const char* name): Square(x, y, sidea, name), side_b (sideb) {};

double Rectangle::area(){
    return (side_b * getSideA());
}

double Rectangle::perimeter(){
    return (2 * side_b + 2 * getSideA());
}

double Rectangle::getSideB(){
    return side_b;
}

void Rectangle::set_side_b(double side){
    side_b = side;
}

void Rectangle::display(){
    cout << "Rectangle Name: " << getName() << endl;
    Point o = getOrigin();
	o.display();
    cout << "Side a: " << getSideA() << endl;
    cout << "Side b: " << getSideB() << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;

}