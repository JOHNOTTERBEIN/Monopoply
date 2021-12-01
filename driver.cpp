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
    Place p2 = Place("Board Walk", 2000, 400,0, 0,0,0,0);
    cout << "p1's name is : " << p1.getName() << " their price is: " << p1.getPrice() << ", the rental price is: " << p1.getRent() << ", the numer of houses is: " << p1.getHouses() << endl;
    cout << "p2's name is : " << p2.getName() << " their price is: " << p2.getPrice() << ", the rental price is: " << p2.getRent() << ", the numer of houses is: " << p2.getHouses() << endl;
    p1.setName("Pa ave");
    p1.setPrice(1500);
    p1.setRent(150);
    p1.setHouses(50,2);
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

    Place places[] = {Place("Mediterranean Avenue", 60, 2,0,10,30,90,160), Place("Baltic Avenue", 60, 4,0,20,60,180,320), Place("Baltic Avenue", 60, 4,0,0,0,0,0),Place("Reading Railroad", 200, 25,1,25,50,100,200),Place("Oriental Avenue", 100, 6,0,30,90,270,400),Place("Vermont Avenue", 100, 6,0,30,90,270,400),Place("Connecticut Avenue", 120, 8,0,40,100,300,450), Place("St. Charles Place", 140, 10,0,50,150,450,625), Place("Electric Company", 150, 40,1,40,100,100,100), Place("States Avenue", 140, 10,0,50,150,450,625), Place("Virginia Avenue", 160, 12,0,60,180,500,700), Place("Pennsylvania Railroad", 200, 25,1,25,50,100,200), Place("St. James PLace", 180, 14,0,70,200,550,750),Place("Tennessee Avenue", 180, 14,0,70,200,550,750),Place("New York Avenue", 200, 16,0,80,220,600,800),Place("Kentucky Avenue", 220, 18,0,90,250,700,875),Place("Indiana Avenue", 220, 18,0,90,250,700,875),Place("Illinois Avenue", 240, 20,0,100,300,750,925),Place("B. & O. Railroad", 200, 25,1,25,50,100,200),Place("Atlantic Avenue", 260, 22,0,110,330,800,975),Place("Ventnor Avenue", 260, 22,0,110,330,800,975),Place("Water Works", 150, 40,1,40,100,100,100),Place("Marvin Gardens", 280, 24,0,120,360,850,1025),Place("Pacific Avenue", 300, 26,0,130,390,900,1100),Place("North Carolina Avenue", 300, 26,0,130,390,900,1100),Place("Pennsylvania Avenue", 320, 28,0,150,450,1000,1200),Place("Short Line", 200, 25,1,25,50,100,200),Place("Park Place", 350, 35,0,175,500,1100,1300),Place("Boardwalk", 400, 50,0,200,600,1400,1700)};
}
