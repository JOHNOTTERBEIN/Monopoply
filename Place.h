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
        int houses;
    public:
        //constructors
        Place();
        Place(string n, int p, int r, int h);

        //getters
        string getName();
        int getPrice();
        int getRent();
        int getHouses();

        //setters
        void setName(string n);
        void setPrice(int p);
        void setRent(int r);
        void setHouses(int h);
        
        //functions
        
        //Adds a house to the place and increases the rent in accordance
        //Makes sure 5 is the max amount of houses
        int addHouse(int num);
};
