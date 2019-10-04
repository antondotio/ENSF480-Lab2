#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

int Point::count = 0;

Point::Point(double x, double y): x(x), y(y), id(count + 1000) { count++; }

double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
int Point::get_id() const { return id; }

void Point::set_x(double val) { x = val; }
void Point::set_y(double val) { y = val; }
void Point::set_id(int val) { id = val; }

int Point::counter(){ return count; }

void Point::display(){
  cout<<std::fixed;
  cout.precision(2);
  cout<<"X-coordinate: "<<get_x()<<endl;
  cout<<"Y-coordinate: "<<get_y()<<endl;
};

double Point::distance(const Point& other) const {
  double distance;
  double xDist = other.x - x;
  double yDist = other.y - y;
  distance = sqrt(pow(xDist, 2) + pow(yDist, 2));

  return distance;
};

double Point::distance(const Point& p1, const Point& p2) {
  double distance;
  double xDist = p1.x - p2.x;
  double yDist = p1.y - p2.y;
  distance = sqrt(pow(xDist, 2) + pow(yDist, 2));

  return distance;
};