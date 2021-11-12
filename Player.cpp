// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3

#include "Player.h"

Player::Player(){
	totalMoneyAmount = 1500;
	location = 0;
	for(int i = 0; i < 40; i++)
    {
		indexOfLocation[i] = false;
	}
	alive = true;
	playerName = "";
}

Player::Player(int money){
	totalMoneyAmount = money;
	location = 0;
	for(int i = 0; i < 40; i++){
		indexOfLocation[i] = false;
	}
	alive = true;
}
void Player::setPlayerName(string inputName){
	playerName = inputName;
}

void Player::setLocation(int currentPlace){
	location = currentPlace;
	
}

string Player::getPlayerName(){
	return playerName;
}

void Player::giveMoney(int giveAmount){
	totalMoneyAmount += giveAmount;
}

void Player::takeMoney(int takeAmount){
	totalMoneyAmount -= takeAmount;
}

int Player::getMoneyAmount(){
	return totalMoneyAmount;
}

void Player::movePlayer(int moveAmount){
	location += moveAmount;
}

int Player::getLocation(){
	return location;
}

void Player::setOwnedProperty(int inputIndex, bool isOwned){
	indexOfLocation[inputIndex] = isOwned;
}

bool Player::getOwnedProperty(int inputIndex){
	return indexOfLocation[inputIndex];
}

bool Player::isAlive(){
	return alive;
}
