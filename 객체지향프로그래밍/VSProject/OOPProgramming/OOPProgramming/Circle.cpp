#include <iostream>

#include "Circle.h"

Circle globalpizza(1000);
Circle globaldonut(2000);

using namespace std;

Circle::Circle() : Circle(1) {} // 위임 생성자
/* {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}*/

Circle::Circle(int r) // 타겟 생성자
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << '\n';
}

Circle::~Circle()
{
	cout << "반지름 " << radius << " 원 소멸" << '\n';
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
