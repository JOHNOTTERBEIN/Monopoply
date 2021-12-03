// CS1300 Fall 2021
// Author: John Otterbein, Adrian Nica
// Recitation: 215 – Luis Mieses Gomez, Recitation: 118 – Naga Sistla
// Project 3
#include <string>
#include <cstdlib>
#include "Player.h"
#include "Card.h"
#include "Place.h"
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;


void printMap(int pl1, int pl2){
    string sq[40] = {};
    sq[0] = "GO  ";
    sq[1] = "A1  ";
    sq[2] = "CC1 ";
    sq[3] = "A2  ";
    sq[4] = "T1  ";
    sq[5] = "R1  ";
    sq[6] = "B1  ";
    sq[7] = "CH1 ";
    sq[8] = "B2  ";
    sq[9] = "B3  ";
    sq[10] = "JAIL";
    sq[11] = "C1  ";
    sq[12] = "U1  ";
    sq[13] = "C2  ";
    sq[14] = "C3  ";
    sq[15] = "R2  ";
    sq[16] = "D1  ";
    sq[17] = "CC2 ";
    sq[18] = "D2  ";
    sq[19] = "D3  ";
    sq[20] = "FP  ";
    sq[21] = "E1  ";
    sq[22] = "CH2 ";
    sq[23] = "E2  ";
    sq[24] = "E3  ";
    sq[25] = "R3  ";
    sq[26] = "F1  ";
    sq[27] = "F2  ";
    sq[28] = "U2  ";
    sq[29] = "F3  ";
    sq[30] = "G2J ";
    sq[31] = "G1  ";
    sq[32] = "G2  ";
    sq[33] = "CC3 ";
    sq[34] = "G3  ";
    sq[35] = "R4  ";
    sq[36] = "CH3 ";
    sq[37] = "H1  ";
    sq[38] = "T2  ";
    sq[39] = "H2  ";
    cout<<"Player 1 (****) is at "<< sq[pl1] <<endl;
    cout<<"Player 2 (++++) is at "<< sq[pl2] <<endl;
    if(pl1 == pl2){
        sq[pl1] = "**++";
    }
    else{
    sq[pl1] = "****";
    sq[pl2] = "++++";
    }
  
	cout << "|"<<sq[0]<<"|"<<sq[1]<<"|"<<sq[2]<<"|"<<sq[3]<<"|"<<sq[4]<<"|"<<sq[5]<<"|"<<sq[6]<<"|"<<sq[7]<<"|"<<sq[8]<<"|"<<sq[9]<<"|"<<sq[10]<<"|" << endl;
	cout << "|"<<sq[39]<<"|                                            |"<<sq[11]<<"|" << endl;
    cout << "|"<<sq[38]<<"|                                            |"<<sq[12]<<"|" << endl;
    cout << "|"<<sq[37]<<"|                                            |"<<sq[13]<<"|" << endl;
    cout << "|"<<sq[36]<<"|                                            |"<<sq[14]<<"|" << endl;
    cout << "|"<<sq[35]<<"|                 Monopoly                   |"<<sq[15]<<"|" << endl;
    cout << "|"<<sq[34]<<"|                                            |"<<sq[16]<<"|" << endl;
    cout << "|"<<sq[33]<<"|                                            |"<<sq[17]<<"|" << endl;
    cout << "|"<<sq[32]<<"|                                            |"<<sq[18]<<"|" << endl;
    cout << "|"<<sq[31]<<"|                                            |"<<sq[19]<<"|" << endl;
    cout << "|"<<sq[30]<<"|"<<sq[29]<<"|"<<sq[28]<<"|"<<sq[27]<<"|"<<sq[26]<<"|"<<sq[25]<<"|"<<sq[24]<<"|"<<sq[23]<<"|"<<sq[22]<<"|"<<sq[21]<<"|"<<sq[20]<<"|" << endl;
}
int main(){
    Player pl1 = Player();
    Player pl2 = Player();
    Place places[] = {Place(), Place("Mediterranean Avenue", 60, 2,0,10,30,90,160, 50), Place(), Place("Baltic Avenue", 60, 4,0,20,60,180,320,50), Place(), Place("Reading Railroad", 200, 25,1,25,50,100,200,0),Place("Oriental Avenue", 100, 6,0,30,90,270,400, 50), Place(), Place("Vermont Avenue", 100, 6,0,30,90,270,400, 50),Place("Connecticut Avenue", 120, 8,0,40,100,300,450, 50), Place(), Place("St. Charles Place", 140, 10,0,50,150,450,625, 100), Place("Electric Company", 150, 40,1,40,100,100,100, 0), Place("States Avenue", 140, 10,0,50,150,450,625, 100), Place("Virginia Avenue", 160, 12,0,60,180,500,700, 100), Place("Pennsylvania Railroad", 200, 25,1,25,50,100,200, 0), Place("St. James PLace", 180, 14,0,70,200,550,750, 100), Place(), Place("Tennessee Avenue", 180, 14,0,70,200,550,750, 100),Place("New York Avenue", 200, 16,0,80,220,600,800, 100), Place(), Place("Kentucky Avenue", 220, 18,0,90,250,700,875, 150), Place(), Place("Indiana Avenue", 220, 18,0,90,250,700,875, 150),Place("Illinois Avenue", 240, 20,0,100,300,750,925, 150),Place("B. & O. Railroad", 200, 25,1,25,50,100,200, 0),Place("Atlantic Avenue", 260, 22,0,110,330,800,975, 150),Place("Ventnor Avenue", 260, 22,0,110,330,800,975, 150),Place("Water Works", 150, 40,1,40,100,100,100, 0),Place("Marvin Gardens", 280, 24,0,120,360,850,1025, 150), Place(), Place("Pacific Avenue", 300, 26,0,130,390,900,1100, 200),Place("North Carolina Avenue", 300, 26,0,130,390,900,1100, 200), Place(), Place("Pennsylvania Avenue", 320, 28,0,150,450,1000,1200, 200),Place("Short Line", 200, 25,1,25,50,100,200,0), Place(), Place("Park Place", 350, 35,0,175,500,1100,1300, 200), Place(), Place("Boardwalk", 400, 50,0,200,600,1400,1700, 200)};
    places[0].setName("Go, collect $200");
    places[2].setName("Community Chest");
    places[4].setName("Income tax, pay $200");
    places[7].setName("Chance");
    places[10].setName("Jail/Just visiting");
    places[17].setName("Community Chest");
    places[20].setName("Free Parking");
    places[22].setName("Chance");
    places[30].setName("Go to Jail");
    places[33].setName("Community Chest");
    places[36].setName("Chance");
    places[38].setName("Luxury tax, pay $100");
    Card chanceCards[] = {Card("Chance Card", "Advance to BoardWalk", 0, false, 39, true, 0, false), Card("Chance Card", "Advance to Go", 0, false, 0, true, 0, false), Card("Chance Card", "Advance to Illinois Avenue", 0, false, 24, true, 0, false), Card("Chance Card", "Advance to St. Charles Place", 0, false, 11, true, 0, false), Card("Chance Card", "Advance to 5 spaces", 5, true, 0, false, 0, false), Card("Chance Card", "Advance to 10 spaces", 10, true, 0, false, 0, false), Card("Chance Card", "Bank pays you dividend of $50", 0, false, 0, false, 50, true), Card("Chance Card", "Go back 3 spaces", -3, true, 0, false, 0, false), Card("Chance Card", "Speeding fine $15", 0, false, 0, false, -15, true), Card("Chance Card", "Take a trip to Reading Railroad", 0, false, 5, true, 0, false), Card("Chance Card", "Your building loan matures. Collect $150", 0, false, 0, false, 150, true)};
    Card communityChest[] = {Card("Community Chest", "Advance to Go", 0, false, 0, true, 0, false), Card("Community Chest", "Bank error in your favor. Collect $200", 0, false, 0, false, 200, true), Card("Community Chest", "Doctor's fee. Pay $50", 0, false, 0, false, -50, true), Card("Community Chest", "From sale of stock you get $50", 0, false, 0, false, 50, true), Card("Community Chest", "Holiday fund matures. Receive $100", 0, false, 0, false, 100, true), Card("Community Chest", "Income tax refund. Collect $20", 0, false, 0, false, 20, true), Card("Community Chest", "Life insurance matures. Collect $100", 0, false, 0, false, 100, true), Card("Community Chest", "Pay hospital fees of $100", 0, false, 0, false, -100, true), Card("Community Chest", "Pay school fees of $50", 0, false, 0, false, -50, true), Card("Community Chest", "Receive $25 consultancy fee", 0, false, 0, false, 25, true), Card("Community Chest", "You inherit $100", 0, false, 0, false, 100, true)};
    string pl1N;
    string pl2N;
    int turn = 0;
    srand(time(0));
    cout<<"What is Player One's name: "<<endl;
    cin>>pl1N;
    pl1.setPlayerName(pl1N);
    cout<<"What is Player Twos's name: "<<endl;
    cin>>pl2N;
    cout<<endl;
    pl2.setPlayerName(pl2N);
    while(true)
    {
            int r1 = 0;
            int r2 = 0;
            int total = 0;
            char ans;
        if(turn%2 == 0)
        {
                if(pl1.getPreviousLocation() > pl1.getCurrentLocation()){
                pl1.addMoney(200);
                }
            cout<<"It is " << pl1.getPlayerName()<<"'s turn!"<<endl; 
            cout<<"You currently have: $"<<pl1.getMoneyAmount()<<endl;
            r1 = rand() % 6 +1;
            r2 = rand() % 6 +1;
            total = r1 + r2;
            if(pl1.getMoneyAmount() <= 0)
            {
                break;
            }
            if(pl1.getPreviousLocation() == 30 && pl1.getCurrentLocation() == 10)
            {
                pl1.setLocation(30);
            }
            pl1.moveP(total);
            cout<<endl;
            printMap(pl1.getCurrentLocation(), pl2.getCurrentLocation());
            //Index 0
            if(pl1.getCurrentLocation() == 0){
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
            }
            //Index 1
            if(pl1.getCurrentLocation() == 1) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(3) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 2
            if(pl1.getCurrentLocation() == 2)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl1.applyCard(card);
            }
            //Index 3
            if(pl1.getCurrentLocation() == 3) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(1) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 4
            if(pl1.getCurrentLocation() == 4)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                pl1.removeMoney(200);
            }
            //Index 5
            if(pl1.getCurrentLocation() == 5)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(15))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl1.getOwnedProperty(25))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl1.getOwnedProperty(35))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 6
            if(pl1.getCurrentLocation() == 6)
            { 
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(8) == true && pl1.getOwnedProperty(9) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 7
            if(pl1.getCurrentLocation() == 7)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl1.applyCard(card);
            }
            //Index 8
            if(pl1.getCurrentLocation() == 8)
            { 
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(6) == true && pl1.getOwnedProperty(8) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 9
            if(pl1.getCurrentLocation() == 9) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(6) == true && pl1.getOwnedProperty(8) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 10
            if(pl1.getCurrentLocation() == 10)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                //Nothing happens in jail
            }
            //Index 11
            if(pl1.getCurrentLocation() == 11) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(13) == true && pl1.getOwnedProperty(14) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 12
            if(pl1.getCurrentLocation() == 12)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(28))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[28].getName());
                                    places[28].addHouse();
                                }                                                     
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 13
            if(pl1.getCurrentLocation() == 13) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(11) == true && pl1.getOwnedProperty(14) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 14
            if(pl1.getCurrentLocation() == 14)

            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(11) == true && pl1.getOwnedProperty(13) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 15
            if(pl1.getCurrentLocation() == 15)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(5))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }
                                if(pl1.getOwnedProperty(25))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl1.getOwnedProperty(35))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 16
            if(pl1.getCurrentLocation() == 16) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(18) == true && pl1.getOwnedProperty(19) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 17
            if(pl1.getCurrentLocation() == 17)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl1.applyCard(card);
            }
            //Index 18
            if(pl1.getCurrentLocation() == 18) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(16) == true && pl1.getOwnedProperty(19) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 19
            if(pl1.getCurrentLocation() == 19) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(16) == true && pl1.getOwnedProperty(18) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 20
            if(pl1.getCurrentLocation() == 20)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
            }
            //Index 21
            if(pl1.getCurrentLocation() == 21) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(23) == true && pl1.getOwnedProperty(24) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 22
            if(pl1.getCurrentLocation() == 22)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl1.applyCard(card);
            }
            //Index 23
            if(pl1.getCurrentLocation() == 23) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(21) == true && pl1.getOwnedProperty(24) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 24
            if(pl1.getCurrentLocation() == 24) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(21) == true && pl1.getOwnedProperty(23) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 25
            if(pl1.getCurrentLocation() == 25)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(15))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl1.getOwnedProperty(5))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }
                                if(pl1.getOwnedProperty(35))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 26
            if(pl1.getCurrentLocation() == 26) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(27) == true && pl1.getOwnedProperty(29) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 27
            if(pl1.getCurrentLocation() == 27) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(26) == true && pl1.getOwnedProperty(29) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 28
            if(pl1.getCurrentLocation() == 28)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(12))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[12].getName());
                                    places[12].addHouse();
                                }                                                     
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 29
            if(pl1.getCurrentLocation() == 29) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(26) == true && pl1.getOwnedProperty(27) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 30
            if(pl1.getCurrentLocation() == 30)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                pl1.setLocation(10);
                pl1.removeMoney(300);
            }
            //Index 31
            if(pl1.getCurrentLocation() == 31) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(32) == true && pl1.getOwnedProperty(34) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 32            
            if(pl1.getCurrentLocation() == 32) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(31) == true && pl1.getOwnedProperty(34) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }        
            //Index 33
            if(pl1.getCurrentLocation() == 33)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl1.applyCard(card);
            }
            //Index 34
            if(pl1.getCurrentLocation() == 34) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(31) == true && pl1.getOwnedProperty(32) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 35
            if(pl1.getCurrentLocation() == 35)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                if(pl1.getOwnedProperty(15))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl1.getOwnedProperty(25))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl1.getOwnedProperty(5))
                                {
                                    pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                    places[pl1.getCurrentLocation()].addHouse();
                                    pl1.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                        pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 36
            if(pl1.getCurrentLocation() == 36)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl1.applyCard(card);
            }
            //Index 37
            if(pl1.getCurrentLocation() == 37) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(39) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 38
            if(pl1.getCurrentLocation() == 38)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                pl1.removeMoney(200);        
            }
            //Index 39
            if(pl1.getCurrentLocation() == 39) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl1.getCurrentLocation()].getName()<<endl;
                if(places[pl1.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl1.getCurrentLocation()].setOwned(true);
                                pl1.setOwnedProperty(pl1.getCurrentLocation(), true);
                                pl1.addPlace(places[pl1.getCurrentLocation()]);
                                pl1.removeMoney(places[pl1.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl1.getCurrentLocation()].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                        if(pl1.getOwnedProperty(37) == true)
                        {
                            if(places[pl1.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl1.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl1.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl1.getCurrentLocation()].getName()<<" for $"<<places[pl1.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < places[pl1.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(places[pl1.getCurrentLocation()].getHouseCost());
                                            places[pl1.getCurrentLocation()].addHouse();
                                            pl1.addHouse(places[pl1.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl2.getOwnedProperty(pl1.getCurrentLocation()) == true)
                    {
                            pl1.removeMoney(places[pl1.getCurrentLocation()].getRent());
                            pl2.addMoney(places[pl1.getCurrentLocation()].getRent());
                    }
                }
            }                
            int num = 0;
            while(num!=3){
                cout << "Current Balance: $" << pl1.getMoneyAmount() << endl;
                vector<Place> p = pl1.listPlaces();
                string names;
                for(int i = 0; i<p.size(); i++){
                    names += p[i].getName() + ", ";
                }
                cout << pl1.getPlayerName() << " currently has, " << names << "properties!"<<endl;
                cout << endl;
                cout << "======Menu======\n1.Would you like to sell a house?\n2.Would you like to sell a property?\n3.End turn" << endl;
                cin>>num;
                cin.ignore();
                switch(num){
                    case 1:
                    {
                        vector<Place> p = pl1.listPlaces();
                        string names;
                        for(int i = 0; i<p.size(); i++){
                            if(p[i].getHouses()!=0){
                                names += p[i].getName() + ", ";
                            }
                        }
                        if(names == ""){
                            cout << pl1.getPlayerName() << " currently has no houses to sell." << endl;
                        }
                        else{
                            string name1;
                            cout << pl1.getPlayerName() << " currently has places, " << names << "with houses on them. Which would you like to sell?" << endl;
                            getline(cin, name1);
                            for(int i = 0; i<p.size(); i++){
                                if(p[i].getName()==name1){
                                    pl1.removeHouse(p[i].getName());
                                    pl1.addMoney(p[i].getHouseCost());
                                }
                            }
                            for(int i = 0; i<40; i++){
                                if(places[i].getName()==name1){
                                    places[i].removeHouse();
                                }
                            }
                        }
                        break;
                    }   
                    case 2:
                    {
                        vector<Place> p1 = pl1.listPlaces();
                        string names2;
                        for(int i = 0; i<p1.size(); i++){
                            names2 += p1[i].getName() + ", ";
                        }
                        if(names2 == ""){
                            cout << pl1.getPlayerName() << " currently has no properties to sell." << endl;
                        }
                        else{
                            string name2;
                            cout << pl1.getPlayerName() << " currently has places, " << names2 << "which would you like to sell?" << endl;
                            getline(cin, name2);
                            for(int i = 0; i<p1.size(); i++){
                                if(p1[i].getName()==name2){
                                    int number1 = p1[i].getHouses();
                                    for(int j = 0; j<number1; j++){
                                        pl1.removeHouse(p1[i].getName());
                                        pl1.addMoney(p1[i].getHouseCost());
                                    }
                                    pl1.removePlace(p1[i].getName());
                                    pl1.addMoney(p1[i].getPrice());
                                }
                            }
                            for(int i = 0; i<40; i++){
                                if(places[i].getName()==name2){
                                    int number1 = p1[i].getHouses();
                                    for(int j = 0; j<number1; j++){
                                        places[i].removeHouse();
                                    }
                                    places[i].setOwned(false);
                                    pl1.setOwnedProperty(i, false);
                                }
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        cout << "Next turn" << endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input" << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            if(pl2.getPreviousLocation()>pl2.getCurrentLocation()){
            pl2.addMoney(200);
            }
            cout<<"It is " << pl2.getPlayerName()<<"'s turn!"<<endl; 
            cout<<"You currently have: $"<<pl2.getMoneyAmount()<<endl;
            r1 = rand() % 6 +1;
            r2 = rand() % 6 +1;
            total = r1 + r2;
            if(pl2.getMoneyAmount() <= 0)
            {
                break;
            }
            if(pl2.getPreviousLocation() == 30 && pl2.getCurrentLocation() == 10)
            {
                pl2.setLocation(30);
            }
            pl2.moveP(total);
            cout<<endl;
            printMap(pl1.getCurrentLocation(), pl2.getCurrentLocation());
            //Index 0
            if(pl2.getCurrentLocation() == 0){
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
            }
            //Index 1
            if(pl2.getCurrentLocation() == 1) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(3) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 2
            if(pl2.getCurrentLocation() == 2)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl2.applyCard(card);
            }
            //Index 3
            if(pl2.getCurrentLocation() == 3) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(1) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 4
            if(pl2.getCurrentLocation() == 4)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                pl2.removeMoney(200);
            }
            //Index 5
            if(pl2.getCurrentLocation() == 5)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(15))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl2.getOwnedProperty(25))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl2.getOwnedProperty(35))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 6
            if(pl2.getCurrentLocation() == 6)
            { 
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(8) == true && pl2.getOwnedProperty(9) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 7
            if(pl2.getCurrentLocation() == 7)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl2.applyCard(card);
            }
            //Index 8
            if(pl2.getCurrentLocation() == 8)
            { 
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(6) == true && pl2.getOwnedProperty(8) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 9
            if(pl2.getCurrentLocation() == 9) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(6) == true && pl2.getOwnedProperty(8) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 10
            if(pl2.getCurrentLocation() == 10)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                //Nothing happens in jail
            }
            //Index 11
            if(pl2.getCurrentLocation() == 11) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(13) == true && pl2.getOwnedProperty(14) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 12
            if(pl2.getCurrentLocation() == 12)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(28))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[28].getName());
                                    places[28].addHouse();
                                }                                                     
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 13
            if(pl2.getCurrentLocation() == 13) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(11) == true && pl2.getOwnedProperty(14) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 14
            if(pl2.getCurrentLocation() == 14)

            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(11) == true && pl2.getOwnedProperty(13) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 15
            if(pl2.getCurrentLocation() == 15)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(5))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }
                                if(pl2.getOwnedProperty(25))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl2.getOwnedProperty(35))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 16
            if(pl2.getCurrentLocation() == 16) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(18) == true && pl2.getOwnedProperty(19) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 17
            if(pl2.getCurrentLocation() == 17)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl2.applyCard(card);
            }
            //Index 18
            if(pl2.getCurrentLocation() == 18) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(16) == true && pl2.getOwnedProperty(19) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 19
            if(pl2.getCurrentLocation() == 19) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(16) == true && pl2.getOwnedProperty(18) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 20
            if(pl2.getCurrentLocation() == 20)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
            }
            //Index 21
            if(pl2.getCurrentLocation() == 21) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(23) == true && pl2.getOwnedProperty(24) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 22
            if(pl2.getCurrentLocation() == 22)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl2.applyCard(card);
            }
            //Index 23
            if(pl2.getCurrentLocation() == 23) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(21) == true && pl2.getOwnedProperty(24) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 24
            if(pl2.getCurrentLocation() == 24) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(21) == true && pl2.getOwnedProperty(23) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 25
            if(pl2.getCurrentLocation() == 25)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(15))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl2.getOwnedProperty(5))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }
                                if(pl2.getOwnedProperty(35))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[35].getName());
                                    places[35].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 26
            if(pl2.getCurrentLocation() == 26) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(27) == true && pl2.getOwnedProperty(29) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 27
            if(pl2.getCurrentLocation() == 27) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(26) == true && pl2.getOwnedProperty(29) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 28
            if(pl2.getCurrentLocation() == 28)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(12))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[12].getName());
                                    places[12].addHouse();
                                }                                                     
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 29
            if(pl2.getCurrentLocation() == 29) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(26) == true && pl2.getOwnedProperty(27) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 30
            if(pl2.getCurrentLocation() == 30)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                pl2.setLocation(10);
                pl2.removeMoney(300);
            }
            //Index 31
            if(pl2.getCurrentLocation() == 31) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(32) == true && pl2.getOwnedProperty(34) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }            
            //Index 32            
            if(pl2.getCurrentLocation() == 32) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(31) == true && pl2.getOwnedProperty(34) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }        
            //Index 33
            if(pl2.getCurrentLocation() == 33)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = communityChest[random];
                pl2.applyCard(card);
            }
            //Index 34
            if(pl2.getCurrentLocation() == 34) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(31) == true && pl2.getOwnedProperty(32) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 35
            if(pl2.getCurrentLocation() == 35)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                if(pl2.getOwnedProperty(15))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[15].getName());
                                    places[15].addHouse();
                                }
                                if(pl2.getOwnedProperty(25))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[25].getName());
                                    places[25].addHouse();
                                }
                                if(pl2.getOwnedProperty(5))
                                {
                                    pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                    places[pl2.getCurrentLocation()].addHouse();
                                    pl2.addHouse(places[5].getName());
                                    places[5].addHouse();
                                }                                                               
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                        pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 36
            if(pl2.getCurrentLocation() == 36)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                int random = rand() % 11;
                Card card = chanceCards[random];
                pl2.applyCard(card);
            }
            //Index 37
            if(pl2.getCurrentLocation() == 37) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(39) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }
            //Index 38
            if(pl2.getCurrentLocation() == 38)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                pl2.removeMoney(200); 
            }
            //Index 39
            if(pl2.getCurrentLocation() == 39) 
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[pl2.getCurrentLocation()].getName()<<endl;
                if(places[pl2.getCurrentLocation()].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[pl2.getCurrentLocation()].setOwned(true);
                                pl2.setOwnedProperty(pl2.getCurrentLocation(), true);
                                pl2.addPlace(places[pl2.getCurrentLocation()]);
                                pl2.removeMoney(places[pl2.getCurrentLocation()].getPrice());
                                break;
                            }
                            else if(ans=='n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout<<"Please enter a valid input!"<<endl;
                        }
                    }
                }
                else if(places[pl2.getCurrentLocation()].isOwned() == true)
                {
                    if(pl2.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                        if(pl2.getOwnedProperty(37) == true)
                        {
                            if(places[pl2.getCurrentLocation()].getHouses() == 0)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 1 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy second house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 1)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 2 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            }
                            //Buy third house 
                            else if(places[pl2.getCurrentLocation()].getHouses() == 2)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 3 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }                               
                            }
                            //Buy fourth house
                            else if(places[pl2.getCurrentLocation()].getHouses() == 3)
                            {
                                while(true)
                                {
                                    cout<<"Would you like to buy House 4 at "<<places[pl2.getCurrentLocation()].getName()<<" for $"<<places[pl2.getCurrentLocation()].getHouseCost()<<"? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl2.getMoneyAmount() < places[pl2.getCurrentLocation()].getHouseCost())
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl2.removeMoney(places[pl2.getCurrentLocation()].getHouseCost());
                                            places[pl2.getCurrentLocation()].addHouse();
                                            pl2.addHouse(places[pl2.getCurrentLocation()].getName());
                                            break;
                                        }
                                    }
                                    else if(ans=='n')       
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout<<"Please enter a valid input!"<<endl;
                                    }
                                }
                            } 
                        }
                    }
                    else if(pl1.getOwnedProperty(pl2.getCurrentLocation()) == true)
                    {
                            pl2.removeMoney(places[pl2.getCurrentLocation()].getRent());
                            pl1.addMoney(places[pl2.getCurrentLocation()].getRent());
                    }
                }
            }                
            int num = 0;
            while(num!=3){
                cout << "Current Balance: $" << pl2.getMoneyAmount() << endl;
                vector<Place> p = pl2.listPlaces();
                string names;
                for(int i = 0; i<p.size(); i++){
                    names += p[i].getName() + ", ";
                }
                cout << pl2.getPlayerName() << " currently has, " << names << "properties!"<<endl;
                cout << endl;
                cout << "======Menu======\n1.Would you like to sell a house?\n2.Would you like to sell a property?\n3.End turn" << endl;
                cin>>num;
                cin.ignore();
                switch(num){
                    case 1:
                    {
                        vector<Place> p = pl2.listPlaces();
                        string names;
                        for(int i = 0; i<p.size(); i++){
                            if(p[i].getHouses()!=0){
                                names += p[i].getName() + ", ";
                            }
                        }
                        if(names == ""){
                            cout << pl2.getPlayerName() << " currently has no houses to sell." << endl;
                        }
                        else{
                            string name1;
                            cout << pl2.getPlayerName() << " currently has places, " << names << "with houses on them. Which would you like to sell?" << endl;
                            getline(cin, name1);
                            for(int i = 0; i<p.size(); i++){
                                if(p[i].getName()==name1){
                                    pl2.removeHouse(p[i].getName());
                                    pl2.addMoney(p[i].getHouseCost());
                                }
                            }
                            for(int i = 0; i<40; i++){
                                if(places[i].getName()==name1){
                                    places[i].removeHouse();
                                }
                            }
                        }
                        break;
                    }   
                    case 2:
                    {
                        vector<Place> p1 = pl2.listPlaces();
                        string names2;
                        for(int i = 0; i<p1.size(); i++){
                            names2 += p1[i].getName() + ", ";
                        }
                        if(names2 == ""){
                            cout << pl2.getPlayerName() << " currently has no properties to sell." << endl;
                        }
                        else{
                            string name2;
                            cout << pl2.getPlayerName() << " currently has places, " << names2 << "which would you like to sell?" << endl;
                            getline(cin, name2);
                            for(int i = 0; i<p1.size(); i++){
                                if(p1[i].getName()==name2){
                                    int number1 = p1[i].getHouses();
                                    for(int j = 0; j<number1; j++){
                                        pl2.removeHouse(p1[i].getName());
                                        pl2.addMoney(p1[i].getHouseCost());
                                    }
                                    pl2.removePlace(p1[i].getName());
                                    pl2.addMoney(p1[i].getPrice());
                                }
                            }
                            for(int i = 0; i<40; i++){
                                if(places[i].getName()==name2){
                                    int number1 = p1[i].getHouses();
                                    for(int j = 0; j<number1; j++){
                                        places[i].removeHouse();
                                    }
                                    places[i].setOwned(false);
                                    pl2.setOwnedProperty(i, false);
                                }
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        cout << "Next turn" << endl;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid input" << endl;
                        break;
                    }
                }
            }
        }
        turn++;
        if(turn == 500)
        {
            break;
        }
    }
}
