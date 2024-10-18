#include "Dept.h"
#include <iostream>
using namespace std;

Dept::Dept(int size)
{ // ������
    this->size = size;
    scores = new int[size];
}

//Dept::Dept(const Dept& dept)
//{ // ���� ������
//    size = dept.size;
//    scores = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        scores[i] = dept.scores[i];
//    }
//}

Dept::~Dept()
{ // �Ҹ���
    delete[] scores;
}

int Dept::getSize()
{
    return size;
}

void Dept::read()
{ // size ��ŭ ������ �о� scores �迭�� ����
    cout << size << "���� ������ �Է��ϼ���.\n";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index)
{ // index�� �л��� 60�� �̻��̸� true ����
    return scores[index] >= 60;
}
