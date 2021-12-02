// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iomanip>
#include <string>
using namespace std;

class Place{
    private:
        string name;
        int price;
        int rent;
        int numHouses;
        int house1;
        int house2;
        int house3;
        int house4;
        int buildingCost;
        bool owned;
        bool set;
    public:
        //constructors
        Place();
        Place(string n, int p, int r, int nh,int h1, int h2, int h3, int h4, int c);

        //getters
        bool isOwned();
        string getName();
        int getPrice();
        int getRent();
        int getHouses();
        int getHouseCost();
        //setters
        void setName(string n);
        void setPrice(int p);
        void setRent(int r);
        void setHouses(int h, int num);
        void setOwned(bool o);
        //functions

        //Adds a house to the place and increases the rent in accordance
        //Makes sure 5 is the max amount of houses
        void addHouse();
};
