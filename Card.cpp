// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iostream>
#include <iomanip>
#include <string>
#include "Card.h"
#include "Player.h"
using namespace std;

//constructors
Card::Card(string n, string d, int move, bool movetf, int p, bool ptf, int dollar, bool dollartf){
    name = n;
    description = d;
    movement = move;
    movementtf = movetf;
    position = p;
    positiontf = ptf;
    money = dollar;
    moneytf = dollartf;
}

//getters
string Card::getName(){
    return name;
}
string Card::getDes(){
    return description;
}
int Card::getMove(){
    return movement;
}
bool Card::getMovetf(){
    return movementtf;
}
int Card::getMoney(){
    return money;
}
bool Card::getMoneytf(){
    return moneytf;
}

//setters
void Card::setName(string n){
    name = n;
}
void Card::setDes(string d){
    description = d;
}
void Card::setMove(int m){
    movement = m;
}
void Card::setMovetf(bool m){
    movementtf = m;
}
void Card::setMoney(int m){
    money = m;
}
void Card::setMoneytf(bool m){
    moneytf = m;
}

//functions

//this will read out the description and apply whatever the card does to the player
// void Card::applyCard(){
//     cout << description << endl;
//     if(movementtf){
//         player.movePlayer(movement);
//     }
//     if(positiontf){
//         player.setLocation(position);
//     }
//     if(moneytf){
//         player.giveMoney(money);
//     }

// }
