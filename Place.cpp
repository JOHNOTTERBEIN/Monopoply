// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iomanip>
#include <string>
#include "Place.h"
using namespace std;

//constructors
Place::Place(){
    name = "";
    price = 0;
    rent = 0;
    numHouses = 0;
    house1 = 0;
    house2 = 0;
    house3 = 0;
    house4 = 0;
    buildingCost = 0;
    owned = false;
    set = false;

}
Place::Place(string n, int p, int r, int nh, int h1, int h2, int h3, int h4, int c){
    name = n;
    price = p;
    rent = r;
    numHouses = nh;
    house1 = h1;
    house2 = h2;
    house3 = h3;
    house4 = h4;
    buildingCost = c;
    owned = false;
    set = false;
}

//getters
bool Place::isOwned(){
    return owned;
}
string Place::getName(){
    return name;
}
int Place::getPrice(){
    return price;
}
int Place::getRent(){
    return rent;
}
int Place::getHouses(){
    return numHouses;
}

//setters
void Place::setOwned(bool o){
    owned = o;
}
void Place::setName(string n){
    name = n;
}
void Place::setPrice(int p){
    price = p;
}
void Place::setRent(int r){
    rent = r;
}
int Place::getHouseCost()
{
    return buildingCost;
}
//functions

//Adds a house to the place and increases the rent in accordance
//Makes sure 5 is the max amount of houses
void Place::addHouse(){
    if(numHouses<4){
        if(numHouses == 0){
            numHouses++;
            setRent(house1);
        }
        else if(numHouses == 1){
            numHouses++;
            setRent(house2);
        }
        else if(numHouses == 2){
            numHouses++;
            setRent(house3);
        }
        else{
            numHouses++;
            setRent(house4);
        }
    }
}
