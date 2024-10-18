#include "Dept.h"
#include <iostream>
using namespace std;

Dept::Dept(int size)
{ // 생성자
    this->size = size;
    scores = new int[size];
}

//Dept::Dept(const Dept& dept)
//{ // 복사 생성자
//    size = dept.size;
//    scores = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        scores[i] = dept.scores[i];
//    }
//}

Dept::~Dept()
{ // 소멸자
    delete[] scores;
}

int Dept::getSize()
{
    return size;
}

void Dept::read()
{ // size 만큼 점수를 읽어 scores 배열에 저장
    cout << size << "명의 점수를 입력하세요.\n";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index)
{ // index의 학생이 60점 이상이면 true 리턴
    return scores[index] >= 60;
}
