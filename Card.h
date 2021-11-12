// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iomanip>
#include <string>
using namespace std;

class Card{
    private:
        string name;
        string description;
        int movement;
        bool movementtf;
        int money;
        bool moneytf;
    public:
        //constructors
        Card(string n, string d, int move, bool movetf, int dollar, bool moneytf);

        //getters
        string getName();
        string getDes();
        int getMove();
        bool getMovetf();
        int getMoney();
        bool getMoneytf();

        //setters
        void setName(string n);
        void setDes(string d);
        void setMove(int m);
        void setMovetf(bool m);
        void setMoney(int m);
        void setMoneytf(bool m);

        //functions
    
        //this will read out the description and apply whatever the card does to the player
        void applyCard();
};
