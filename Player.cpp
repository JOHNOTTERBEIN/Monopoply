// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include "Player.h"

using namespace std;

Player::Player(){
	totalMoneyAmount = 1500;
	currentLocation = 0;
	previousLocation = 0;
	for(int i = 0; i < 40; i++)
    {
		indexOfLocation[i] = false;
	}
	alive = true;
	playerName = "";
}
void Player::setPlayerName(string inputName){
	playerName = inputName;
}

void Player::setLocation(int currentPlace){
	previousLocation = currentLocation;
	currentLocation = currentPlace;
	

}
void Player::setMoneyAmount(int num){
    totalMoneyAmount = num;
}

string Player::getPlayerName(){
	return playerName;
}

int Player::getMoneyAmount(){
	return totalMoneyAmount;
}

int Player::getCurrentLocation(){
	return currentLocation;
}

int Player::getPreviousLocation(){
	return previousLocation;
}

void Player::setOwnedProperty(int inputIndex, bool isOwned){
	indexOfLocation[inputIndex] = isOwned;
}

bool Player::getOwnedProperty(int inputIndex){
	return indexOfLocation[inputIndex];
}
void Player::addMoney(int amount)
{
	totalMoneyAmount+=amount;
}
void Player::removeMoney(int amount)
{
	totalMoneyAmount-=amount;
}
void Player::moveP(int distance)
{
	previousLocation = currentLocation;
	currentLocation = (distance + currentLocation) % 40;
}

void Player::addPlace(Place p){
	places.push_back(p);
	if(places.size()>=2){
		for(int i = 0; i<places.size()-1; i++){
			for(int j = i+1;j<places.size(); j++){
				if(places[i].getPrice()>places[j].getPrice()){
					Place temp = places[i];
					places[i] = places[j];
					places[j] = temp;
				}
			}
		}
	}
}
vector<Place> Player::listPlaces(){
	return places;
}

void Player::addHouse(string name){
	for(int i = 0; i<places.size(); i++){
		if(places[i].getName()==name){
			places[i].addHouse();
		}
	}
}
