#include "GamblingGame.h"  

using namespace std;

int main()
{
    srand((unsigned int)time(0));

    string name1, name2;
    cout << "첫번째 선수 이름: ";
    cin >> name1;
    cout << "두번째 선수 이름: ";
    cin >> name2;
    cout << '\n';

    GamblingGame game(name1, name2);
    game.start();
}
