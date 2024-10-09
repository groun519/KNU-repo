#include "Player.h"
#include <iostream>

using namespace std;

void Player::rollDice()
{
    int num1 = rand() % 3;
    int num2 = rand() % 3;
    int num3 = rand() % 3;

    cout << name << "의 결과: " << num1 << " " << num2 << " " << num3 << '\n';
    if (num1 == num2 && num2 == num3)
    {
        cout << name << "이 이겼습니다!" << '\n';
        exit(0);
    }
    else
    {
        cout << "아쉽군요!" << "\n\n";
    }
}