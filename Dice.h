// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#ifndef DICE_H
#define DICE_H

class Dice 
{
	private:
	int numSides;
	int playerRoll;
        
	public:
	//constructor
	Dice(); 
	//setters
	void setRollDice(int);
	//getters
	int getRollDice();	    
      
        
};
#endif
