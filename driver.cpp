// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iostream>
#include <string>
#include "Card.h"
#include "Place.h"
#include "Dice.h"
#include "Player.h"
using namespace std;

int main(){
    Place p1 = Place();
    Place p2 = Place("Board Walk", 2000, 400, 0);
    cout << "p1's name is : " << p1.getName() << " their price is: " << p1.getPrice() << ", the rental price is: " << p1.getRent() << ", the numer of houses is: " << p1.getHouses() << endl;
    cout << "p2's name is : " << p2.getName() << " their price is: " << p2.getPrice() << ", the rental price is: " << p2.getRent() << ", the numer of houses is: " << p2.getHouses() << endl;
    p1.setName("Pa ave");
    p1.setPrice(1500);
    p1.setRent(150);
    p1.setHouses(2);
    cout << "p1's name is : " << p1.getName() << " their price is: " << p1.getPrice() << ", the rental price is: " << p1.getRent() << ", the numer of houses is: " << p1.getHouses() << endl;
    Card c1 = Card("Mystery Card", "Add 200", 0, false, 200, true);
    cout << "c1's card name is: " << c1.getName() << " their description is: " << c1.getDes() << ", how much movement does the card cause: " << c1.getMove() << ", does it cause a movement? " << c1.getMovetf() << "How much money is in this card : " << c1.getMoney() << ", Does this cause a change in money? " << c1.getMoneytf() << endl;
    c1.setName("Community Card");
    c1.setDes("Move 5 spaces forward");
    c1.setMove(5);
    c1.setMovetf(true);
    c1.setMoney(0);
    c1.setMoneytf(false);
    cout << "c1's card name is: " << c1.getName() << " their description is: " << c1.getDes() << ", how much movement does the card cause: " << c1.getMove() << ", does it cause a movement? " << c1.getMovetf() << "How much money is in this card : " << c1.getMoney() << ", Does this cause a change in money? " << c1.getMoneytf() << endl;
    Player pl1 = Player();
    pl1.setPlayerName("Adrian");
    cout<<"Player Name: "<<pl1.getPlayerName()<< endl;
    pl1.setOwnedProperty(24, true);
    cout<<"Does the player own the property at location 24: " << pl1.getPlayerName()<<endl;
    pl1.setLocation(24);
    cout<<"The player is at the location: " << pl1.getLocation()<<endl;
    pl1.setMoneyAmount(2000);
    cout<<"The player has" << pl1.getMoneyAmount() << "$ in their account" <<endl;
    Dice dice;
    cout<<"Dice Roll: " << dice.RollDice() << endl;
}
