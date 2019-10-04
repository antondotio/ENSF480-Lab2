#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "point.h"
#include "shape.h"

using namespace std;

int main(){
	Point a(5.32, 2.89, 1001);
	Point b(1.23, 7.34, 1002);
	int n = a.counter();
	a.display();
	b.display();
	double dist = a.distance(b);
	cout<<dist<<endl;
	cout<<n<<endl;

  return 0;
}