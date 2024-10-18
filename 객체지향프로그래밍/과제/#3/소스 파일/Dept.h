#pragma once

class Dept
{
    int size; // scores 배열의 크기
    int* scores; // 동적 할당 받을 점수 배열의 주소

public:
    Dept(int size);
    /*Dept(const Dept& dept);*/
    ~Dept();
    int getSize();
    void read();
    bool isOver60(int index);
};
