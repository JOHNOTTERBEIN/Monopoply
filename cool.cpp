#include <iostream>
#include <string>
#include "Player.h"
#include <cstdlib>
#include <ctime>
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
    cout << "|"<<sq[35]<<"|                                            |"<<sq[15]<<"|" << endl;
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
    string pl1N;
    string pl2N;
    int turn = 0;
    srand(time(0));
    cout<<"What is Player One's name: "<<endl;
    cin>>pl1N;
    pl1.setPlayerName(pl1N);
    cout<<"What is Player Twos's name: "<<endl;
    cin>>pl2N;
    pl2.setPlayerName(pl2N);
    while(true)
    {
            int r1 = 0;
            int r2 = 0;
            int total = 0;
            char ans;
        if(turn%2 == 0)
        {
            cout<<"It is " << pl1.getPlayerName()<<"'s turn!"<<endl; 
            cout<<"You currently have: $"<<pl1.getMoneyAmount()<<endl;
            r1 = rand() % 6 +1;
            r2 = rand() % 6 +1;
            total = r1 + r2;
            if(pl1.getMoneyAmount() <= 0)
            {
                break;
            }
            if(pl1.getPreviousLocation()>pl1.getCurrentLocation()){
                pl1.addMoney(200);
            }
            pl1.moveP(total);
            pl1.setLocation(0);
            //Test code by changing these
            pl1.moveP(9);
            places[9].setOwned(true);
            pl1.setOwnedProperty(6, true);
            pl1.setOwnedProperty(8, true);
            pl1.setOwnedProperty(9, true);
            //Index 1
            if(pl1.getCurrentLocation() == 1)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[1].getName()<<endl;
                if(places[1].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[1].getName()<<" for $"<<places[1].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[1].setOwned(true);
                                pl1.setOwnedProperty(1, true);
                                pl1.removeMoney(places[1].getPrice());
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
                else if(places[1].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(1) == true)
                    {
                        if(pl1.getOwnedProperty(3) == true)
                        {
                            if(places[3].getHouses() == 0)
                            {
                                while(true)
                                {
                                    //Only did one house we gotta add rest unless it seems to hard
                                    cout<<"Would you like to buy House 1 at "<<places[1].getName()<<" for $50? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < 50)
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(50);
                                            places[1].addHouse(0);
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
                    else if(pl2.getOwnedProperty(1) == true)
                    {
                        if(places[1].getHouses() == 0)
                        {
                            pl1.removeMoney(places[1].getRent());
                            pl2.addMoney(places[1].getRent());
                        }
                        else if(places[1].getHouses() == 1)
                        {
                            pl1.removeMoney(places[1].getRent());
                            pl2.addMoney(places[1].getRent());
                        }
                    }
                }
            }
            //Index 2
            if(pl1.getCurrentLocation() == 2)
            {

            }
            //Index 3
            if(pl1.getCurrentLocation() == 3)
            {
                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[3].getName()<<endl;
                if(places[3].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[3].getName()<<" for $"<<places[3].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[3].setOwned(true);
                                pl1.setOwnedProperty(3, true);
                                pl1.removeMoney(places[3].getPrice());
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
                else if(places[3].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(3) == true)
                    {
                        if(pl1.getOwnedProperty(1) == true)
                        {
                            if(places[1].getHouses() == 0)
                            {
                                while(true)
                                {
                                    //Only did one house we gotta figure what to do... coding 4 houses for each place seems like hell 
                                    cout<<"Would you like to buy House 1 at "<<places[3].getName()<<" for $50? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < 50)
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(50);
                                            places[3].addHouse(0);
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
                    else if(pl2.getOwnedProperty(3) == true)
                    {
                        if(places[3].getHouses() == 0)
                        {
                            pl1.removeMoney(places[3].getRent());
                            pl2.addMoney(places[3].getRent());
                        }
                        else if(places[3].getHouses() == 1)
                        {
                            pl1.removeMoney(places[3].getRent());
                            pl2.addMoney(places[3].getRent());
                        }
                    }
                }
            }
            //Index 4
            if(pl1.getCurrentLocation() == 4)
            {
                pl1.removeMoney(200);
            }
            //Index 5
            if(pl1.getCurrentLocation() == 5)
            {

            }
            //Index 6
            if(pl1.getCurrentLocation() == 6)
            {
                                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[6].getName()<<endl;
                if(places[6].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[6].getName()<<" for $"<<places[6].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[6].setOwned(true);
                                pl1.setOwnedProperty(6, true);
                                pl1.removeMoney(places[6].getPrice());
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
                else if(places[6].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(6) == true)
                    {
                        if(pl1.getOwnedProperty(8) == true && pl1.getOwnedProperty(9) == true)
                        {
                            if(places[8].getHouses() == 0 && places[9].getHouses() == 0)
                            {
                                while(true)
                                {
                                    //Only did one house we gotta figure what to do... coding 4 houses for each place seems like hell 
                                    cout<<"Would you like to buy House 1 at "<<places[6].getName()<<" for $50? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < 50)
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(50);
                                            places[6].addHouse(0);
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
                    else if(pl2.getOwnedProperty(6) == true)
                    {
                        if(places[6].getHouses() == 0)
                        {
                            pl1.removeMoney(places[6].getRent());
                            pl2.addMoney(places[6].getRent());
                        }
                        else if(places[6].getHouses() == 1)
                        {
                            pl1.removeMoney(places[6].getRent());
                            pl2.addMoney(places[6].getRent());
                        }
                    }
                }
            }
            //Index 7
            if(pl1.getCurrentLocation() == 7)
            {

            }
            //Index 8
            if(pl1.getCurrentLocation() == 8)
            {
                                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[8].getName()<<endl;
                if(places[8].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[8].getName()<<" for $"<<places[8].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[8].setOwned(true);
                                pl1.setOwnedProperty(8, true);
                                pl1.removeMoney(places[8].getPrice());
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
                else if(places[8].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(8) == true)
                    {
                        if(pl1.getOwnedProperty(6) == true && pl1.getOwnedProperty(9) == true)
                        {
                            if(places[6].getHouses() == 0 && places[9].getHouses() == 0)
                            {
                                while(true)
                                {
                                    //Only did one house we gotta figure what to do... coding 4 houses for each place seems like hell 
                                    cout<<"Would you like to buy House 1 at "<<places[8].getName()<<" for $50? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < 50)
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(50);
                                            places[8].addHouse(0);
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
                    else if(pl2.getOwnedProperty(8) == true)
                    {
                        if(places[8].getHouses() == 0)
                        {
                            pl1.removeMoney(places[8].getRent());
                            pl2.addMoney(places[8].getRent());
                        }
                        else if(places[8].getHouses() == 1)
                        {
                            pl1.removeMoney(places[8].getRent());
                            pl2.addMoney(places[8].getRent());
                        }
                    }
                }
            }
            //Index 9
            if(pl1.getCurrentLocation() == 9)
            {
                                cout<<"You rolled a(n) "<<total<< " and landed on: "<<places[9].getName()<<endl;
                if(places[9].isOwned() == false)
                {
                    while(true)
                    {
                        cout<<"Would you like to buy " <<places[9].getName()<<" for $"<<places[9].getPrice()<<"?"<<" Enter 'y' for yes or 'n' for no."<<endl;
                        cin>>ans;
                        if(ans == 'y' || ans =='n')
                        {
                            if(ans=='y')
                            {
                                places[9].setOwned(true);
                                pl1.setOwnedProperty(9, true);
                                pl1.removeMoney(places[9].getPrice());
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
                else if(places[9].isOwned() == true)
                {
                    if(pl1.getOwnedProperty(9) == true)
                    {
                        if(pl1.getOwnedProperty(6) == true && pl1.getOwnedProperty(8) == true)
                        {
                            if(places[6].getHouses() == 0 && places[8].getHouses() == 0)
                            {
                                while(true)
                                {
                                    //Only did one house we gotta figure what to do... coding 4 houses for each place seems like hell 
                                    cout<<"Would you like to buy House 1 at "<<places[9].getName()<<" for $50? Enter 'y' for yes or 'n' for no."<<endl;
                                    cin>>ans;
                                    if(ans=='y')
                                    {    
                                        if(pl1.getMoneyAmount() < 50)
                                        {
                                            cout<<"You don't have enough money to complete this purchase!"<<endl;
                                            break;
                                        }
                                        else
                                        {
                                            pl1.removeMoney(50);
                                            places[9].addHouse(0);
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
                    else if(pl2.getOwnedProperty(9) == true)
                    {
                        if(places[9].getHouses() == 0)
                        {
                            pl1.removeMoney(places[9].getRent());
                            pl2.addMoney(places[9].getRent());
                        }
                        else if(places[9].getHouses() == 1)
                        {
                            pl1.removeMoney(places[9].getRent());
                            pl2.addMoney(places[9].getRent());
                        }
                    }
                }
            }
            printMap(pl1.getCurrentLocation(), pl2.getCurrentLocation());
        }
        // else
        // {
        //     if(pl1.getMoneyAmount() == 0)
        //     {
        //         break;
        //     }
        //     int r1 = 0;
        //     int r2 = 0;
        //     int total = 0;
        //     r1 = rand() % 6 +1;
        //     r2 = rand() % 6 +1;
        //     total = r1 + r2;
        //     cout<<r1<<r2<<total<<endl;
        //     pl2.moveP(total);
        //     printMap(pl1.getCurrentLocation(), pl1.getPreviousLocation());
        // }
        turn++;
        if(turn == 1)
        {
            break;
        }
    }
    cout<<pl1.getMoneyAmount();
}
