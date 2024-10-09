#include "GamblingGame.h"
#include <iostream>

using namespace std;

GamblingGame::GamblingGame(string name1, string name2)
{
    player[0].name = name1;
    player[1].name = name2;
}

void GamblingGame::start()
{
    cin.ignore();

    while (true)
    {
        cout << player[0].name << "�� �����Դϴ�. <Enter>�� ��������." << '\n';
        cin.ignore(); 
        player[0].rollDice();

        cout << player[1].name << "�� �����Դϴ�. <Enter>�� ��������." << '\n';
        cin.ignore();
        player[1].rollDice();
    }
}
