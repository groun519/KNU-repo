#include <iostream>

#include "Circle.h"

using namespace std;

Circle::Circle() : Circle(1) {} // 困烙 积己磊

Circle::Circle(int r) // 鸥百 积己磊
{
	radius = r;
}

/*Circle::~Circle()
{
	
}*/

void Circle::setRadius(int rad)
{
	radius = rad;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
