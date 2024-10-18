#include "Dept.h"
#include <iostream>
using namespace std;

Dept::Dept(int size)
{
    this->size = size;
    scores = new int[size];
}

Dept::Dept(const Dept& dept)
{
    size = dept.size;
    scores = new int[size];
    for (int i = 0; i < size; i++)
    {
        scores[i] = dept.scores[i];
    }
}

Dept::~Dept()
{
    delete[] scores;
}

int Dept::getSize()
{
    return size;
}

void Dept::read()
{
    cout << "10개 정수 입력 >> ";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index)
{
    return scores[index] >= 60;
}