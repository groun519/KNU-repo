#include "iostream"

#include "Point.h"

using namespace std;
int main()
{
	Point point;
	Point point2(10, 10);

	point.PrintPoint();
	point2.PrintPoint();
}

Point::Point() : x(0), y(0) {}

Point::Point(int a, int b)
{
	x = a; 
	y = b;
}

void Point::PrintPoint()
{
	cout << "( " << x << ", " << y << " )" << '\n';
}
