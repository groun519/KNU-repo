#include "Player.h"
#include <iostream>

using namespace std;

void Player::rollDice()
{
    int num1 = rand() % 3;
    int num2 = rand() % 3;
    int num3 = rand() % 3;

    cout << name << "�� ���: " << num1 << " " << num2 << " " << num3 << '\n';
    if (num1 == num2 && num2 == num3)
    {
        cout << name << "�� �̰���ϴ�!" << '\n';
        exit(0);
    }
    else
    {
        cout << "�ƽ�����!" << "\n\n";
    }
}