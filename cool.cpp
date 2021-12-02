#include <iostream>
#include <string>
#include "Dice.h"
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
    Dice dice;
    Dice dice1;
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
        if(turn%2 == 0)
        {
            if(pl1.getMoneyAmount() == 0)
            {
                break;
            }
            if(pl1.getPreviousLocation()>pl1.getCurrentLocation()){
                pl1.addAmount(200);
            }
            int r1 = 0;
            int r2 = 0;
            int total = 0;
            r1 = rand() % 6 +1;
            r2 = rand() % 6 +1;
            total = r1 + r2;
            cout<<r1<<r2<<total<<endl;
            pl1.moveP(total);
            printMap(pl1.getCurrentLocation(), pl1.getPreviousLocation());
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
    cout<<dice.RollDice()<<endl;
    
}
