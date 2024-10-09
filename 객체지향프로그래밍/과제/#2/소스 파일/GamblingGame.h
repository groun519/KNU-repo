#pragma once

#include "Player.h"
#include <iostream>

using namespace std;

class GamblingGame
{
public:
    Player player[2];

    GamblingGame(string name1, string name2);
    void start(); 
};
