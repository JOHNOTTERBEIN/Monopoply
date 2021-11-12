// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player {

	private:
	    string playerName;
	    char gamePiece;
	    int totalMoneyAmount;
	    int location;
	    bool indexOfLocation[40];	  
	    bool alive;  
	    
	public:
	    //constructors
	    Player();
	    Player(int money);

	    //setters
	    void setPlayerName(string inputName);
	    void setOwnedProperty(int inputIndex, bool isOwned); 
	    void setLocation(int currentPlace); 
        void setMoneyAmount(int num);
	    //getters
	    string getPlayerName();
	    bool getOwnedProperty(int inputIndex);
	    int getLocation();
	    //bool isAlive();
        int getMoneyAmount();

	    //functions 
        //void giveMoney(int giveAmount);
	    //void takeMoney(int takeAmount);
	    //void movePlayer(int moveAmount);  

};
#endif
