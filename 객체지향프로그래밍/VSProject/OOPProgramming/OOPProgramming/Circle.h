#pragma once

class Circle
{
	int radius;
public:
	Circle(); // �Ű� ���� ���� ������
	Circle(int r); // �Ű� ���� �ִ� ������
	//~Circle(); // �Ҹ���
	void setRadius(int rad);
	double getArea();

	void swap(int *a, int *b);
};

