#include "GamblingGame.h"  

using namespace std;

int main()
{
    srand((unsigned int)time(0));

    string name1, name2;
    cout << "ù��° ���� �̸�: ";
    cin >> name1;
    cout << "�ι�° ���� �̸�: ";
    cin >> name2;
    cout << '\n';

    GamblingGame game(name1, name2);
    game.start();
}
