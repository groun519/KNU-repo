#include "Dept.h"
#include <iostream>
using namespace std;

int countPass(Dept& dept)
{
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++)
    {
        if (dept.isOver60(i)) count++;
    }
    return count;
}

int main()
{
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60�� �̻� = " << n << "��" << endl;
}