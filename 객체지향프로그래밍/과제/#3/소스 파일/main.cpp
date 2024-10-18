#include "Dept.h"
#include <iostream>
using namespace std;

int countPass(Dept& dept)
{ // dept 학과의 60점 이상인 학생의 수 리턴
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++)
    {
        if (dept.isOver60(i)) count++;
    }
    return count;
}

int main()
{
    Dept com(10); // 총 10명이 있는 학과 com
    com.read(); // 총 10명의 학생들의 점수를 키보드로부터 읽어 scores 배열에 저장
    int n = countPass(com); // 60점 이상인 학생수를 리턴
    cout << "60점 이상 = " << n << "명";
}
