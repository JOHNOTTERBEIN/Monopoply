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
    Card c1 = Card("Mystery Card", "Add 200", 0, false, 0, false, 200, true);
    cout << "c1's card name is: " << c1.getName() << " their description is: " << c1.getDes() << ", how much movement does the card cause: " << c1.getMove() << ", does it cause a movement? " << c1.getMovetf() << "How much money is in this card : " << c1.getMoney() << ", Does this cause a change in money? " << c1.getMoneytf() << endl;
    c1.setName("Community Card");
    c1.setDes("Move 5 spaces forward");
    c1.setMove(5);
    c1.setMovetf(true);
    c1.setMoney(0);
    c1.setMoneytf(false);
    cout << "c1's card name is: " << c1.getName() << " their description is: " << c1.getDes() << ", how much movement does the card cause: " << c1.getMove() << ", does it cause a movement? " << c1.getMovetf() << "How much money is in this card : " << c1.getMoney() << ", Does this cause a change in money? " << c1.getMoneytf() << endl;

    Place places[] = {Place(), Place("Mediterranean Avenue", 60, 2,0,10,30,90,160, 50), Place(), Place("Baltic Avenue", 60, 4,0,20,60,180,320,50), Place(), Place("Reading Railroad", 200, 25,1,25,50,100,200,0),Place("Oriental Avenue", 100, 6,0,30,90,270,400, 50), Place(), Place("Vermont Avenue", 100, 6,0,30,90,270,400, 50),Place("Connecticut Avenue", 120, 8,0,40,100,300,450, 50), Place(), Place("St. Charles Place", 140, 10,0,50,150,450,625, 100), Place("Electric Company", 150, 40,1,40,100,100,100, 0), Place("States Avenue", 140, 10,0,50,150,450,625, 100), Place("Virginia Avenue", 160, 12,0,60,180,500,700, 100), Place("Pennsylvania Railroad", 200, 25,1,25,50,100,200, 0), Place("St. James PLace", 180, 14,0,70,200,550,750, 100), Place(), Place("Tennessee Avenue", 180, 14,0,70,200,550,750, 100),Place("New York Avenue", 200, 16,0,80,220,600,800, 100), Place(), Place("Kentucky Avenue", 220, 18,0,90,250,700,875, 150), Place(), Place("Indiana Avenue", 220, 18,0,90,250,700,875, 150),Place("Illinois Avenue", 240, 20,0,100,300,750,925, 150),Place("B. & O. Railroad", 200, 25,1,25,50,100,200, 0),Place("Atlantic Avenue", 260, 22,0,110,330,800,975, 150),Place("Ventnor Avenue", 260, 22,0,110,330,800,975, 150),Place("Water Works", 150, 40,1,40,100,100,100, 0),Place("Marvin Gardens", 280, 24,0,120,360,850,1025, 150), Place(), Place("Pacific Avenue", 300, 26,0,130,390,900,1100, 200),Place("North Carolina Avenue", 300, 26,0,130,390,900,1100, 200), Place(), Place("Pennsylvania Avenue", 320, 28,0,150,450,1000,1200, 200),Place("Short Line", 200, 25,1,25,50,100,200,0), Place(), Place("Park Place", 350, 35,0,175,500,1100,1300, 200), Place(), Place("Boardwalk", 400, 50,0,200,600,1400,1700, 200)};
    Card chanceCards[] = {Card("Chance Card", "Advance to BoardWalk", 0, false, 39, true, 0, false), Card("Chance Card", "Advance to Go", 0, false, 0, true, 0, false), Card("Chance Card", "Advance to Illinois Avenue", 0, false, 24, true, 0, false), Card("Chance Card", "Advance to St. Charles Place", 0, false, 11, true, 0, false), Card("Chance Card", "Advance to 5 spaces", 5, true, 0, false, 0, false), Card("Chance Card", "Advance to 10 spaces", 10, true, 0, false, 0, false), Card("Chance Card", "Bank pays you dividend of $50", 0, false, 0, false, 50, true), Card("Chance Card", "Go back 3 spaces", -3, true, 0, false, 0, false), Card("Chance Card", "Speeding fine $15", 0, false, 0, false, -15, true), Card("Chance Card", "Take a trip to Reading Railroad", 0, false, 5, true, 0, false), Card("Chance Card", "Your building loan matures. Collect $150", 0, false, 0, false, 150, true)};
    Card communityChest[] = {Card("Community Chest", "Advance to Go", 0, false, 0, true, 0, false), Card("Community Chest", "Bank error in your favor. Collect $200", 0, false, 0, false, 200, true), Card("Community Chest", "Doctor's fee. Pay $50", 0, false, 0, false, -50, true), Card("Community Chest", "From sale of stock you get $50", 0, false, 0, false, 50, true), Card("Community Chest", "Holiday fund matures. Receive $100", 0, false, 0, false, 100, true), Card("Community Chest", "Income tax refund. Collect $20", 0, false, 0, false, 20, true), Card("Community Chest", "Life insurance matures. Collect $100", 0, false, 0, false, 100, true), Card("Community Chest", "Pay hospital fees of $100", 0, false, 0, false, -100, true), Card("Community Chest", "Pay school fees of $50", 0, false, 0, false, -50, true), Card("Community Chest", "Receive $25 consultancy fee", 0, false, 0, false, 25, true), Card("Community Chest", "You inherit $100", 0, false, 0, false, 100, true)};
}
