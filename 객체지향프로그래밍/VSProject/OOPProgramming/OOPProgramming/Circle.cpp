#include <iostream>

#include "Circle.h"

Circle globalpizza(1000);
Circle globaldonut(2000);

using namespace std;

Circle::Circle() : Circle(1) {} // ���� ������
/* {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}*/

Circle::Circle(int r) // Ÿ�� ������
{
	radius = r;
	cout << "������ " << radius << " �� ����" << '\n';
}

Circle::~Circle()
{
	cout << "������ " << radius << " �� �Ҹ�" << '\n';
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
