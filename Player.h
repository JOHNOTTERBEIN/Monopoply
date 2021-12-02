// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3



#include <string>
#include <vector>
#include "Place.h"

using namespace std;

class Player {

	private:
	    string playerName;
	    int totalMoneyAmount;
	    int currentLocation;
		int previousLocation;
		vector<Place> places;
	    bool indexOfLocation[40];	  
	    bool alive;  
	public:	
	    //constructors
	    Player();
	    //setters
	    void setPlayerName(string inputName);
	    void setOwnedProperty(int inputIndex, bool isOwned); 
	    void setLocation(int currentPlace); 
        void setMoneyAmount(int num);
	    //getters
	    string getPlayerName();
	    bool getOwnedProperty(int inputIndex);
	    int getCurrentLocation();
		int getPreviousLocation();
        int getMoneyAmount();
		//functions
		void moveP(int distance);
		void addMoney(int amount);
		void removeMoney(int amount);
		void addPlace(Place p);
		vector<Place> listPlaces();
};
