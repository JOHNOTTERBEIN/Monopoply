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
    houses = 0;
}
Place::Place(string n, int p, int r, int h){
    name = n;
    price = p;
    rent = r;
    houses = h;
}

//getters
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
    return houses;
}

//setters
void Place::setName(string n){
    name = n;
}
void Place::setPrice(int p){
    price = p;
}
void Place::setRent(int r){
    rent = r;
}
void Place::setHouses(int h){
    houses = h;
}

//functions

//Adds a house to the place and increases the rent in accordance
//Makes sure 5 is the max amount of houses
//int Place::addHouse(int num);
