#include <iostream>

#include "Circle.h"

using namespace std;

Circle::Circle() : Circle(1) {} // ���� ������

Circle::Circle(int r) // Ÿ�� ������
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
