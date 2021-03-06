// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include <iomanip>
#include <string>
using namespace std;
#ifndef CARD_H_
#define CARD_H_
class Card{
    private:
        string name;
        string description;
        int movement;
        bool movementtf;
        int position;
        bool positiontf;
        int money;
        bool moneytf;
    public:
        //constructors
        Card(string n, string d, int move, bool movetf, int p, bool ptf, int dollar, bool moneytf);

        //getters
        string getName();
        string getDes();
        int getMove();
        bool getMovetf();
        int getMoney();
        bool getMoneytf();
        int getPos();
        bool getPostf();

        //setters
        void setName(string n);
        void setDes(string d);
        void setMove(int m);
        void setMovetf(bool m);
        void setMoney(int m);
        void setMoneytf(bool m);
};
#endif
