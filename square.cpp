#include <stdio.h>
#include <cmath>
#include <iostream>
#include "square.h"

using namespace std;

Square::Square(Point origin, char* name, double side){
    Shape(origin, name);
    side_a = side;
}

double Square::area(){
    return (side_a * side_a);
}

double Square::perimeter(){
    return (4 * side_a);
}

double Square::getSideA(){
    return side_a;
}

void Square::setSideA(double side){
    side_a = side;
}

void Square::display(){
    cout << "Square Name: " << getName() << endl;
    Point o = getOrigin();
	o.display();
    cout << "Side a: " << getSideA() << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;

}