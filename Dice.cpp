// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include "Dice.h"
#include <cstdlib>
#include <ctime>

using namespace std;
Dice::Dice()
{
	numSides = 6;
}
int Dice::RollDice()
{
    srand(time(0));
    int playerRoll = 0;
    playerRoll = rand() % numSides + 1;
    
    return playerRoll;
}
