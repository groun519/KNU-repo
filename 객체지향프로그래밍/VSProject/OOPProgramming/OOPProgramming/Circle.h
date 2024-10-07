#pragma once

class Circle
{
	int radius;
public:
	Circle(); // 매개 변수 없는 생성자
	Circle(int r); // 매개 변수 있는 생성자
	//~Circle(); // 소멸자
	void setRadius(int rad);
	double getArea();

	void swap(int *a, int *b);
};

