#pragma once

class Dept
{
    int size; // scores �迭�� ũ��
    int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ�

public:
    Dept(int size);
    /*Dept(const Dept& dept);*/
    ~Dept();
    int getSize();
    void read();
    bool isOver60(int index);
};
