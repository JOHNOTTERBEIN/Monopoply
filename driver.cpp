int num = 0;
            while(num!=3){
                cout << "======Menu======\n1.Would you like to sell a house?\n2.Would you like to sell a property?\n3.End turn" << endl;
                cin>>num;
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
                            cin >> name1;
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
                            cin >> name2;
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
                cout << "Current Balance: $" << pl1.getMoneyAmount() << endl;
                vector<Place> p = pl1.listPlaces();
                string names;
                for(int i = 0; i<p.size(); i++){
                    names += p[i].getName() + ", ";
                }
                cout << pl1.getPlayerName() << " currently has, " << names << endl;
            }
Card chanceCards[] = {Card("Chance Card", "Advance to BoardWalk", 0, false, 39, true, 0, false), Card("Chance Card", "Advance to Go", 0, false, 0, true, 0, false), Card("Chance Card", "Advance to Illinois Avenue", 0, false, 24, true, 0, false), Card("Chance Card", "Advance to St. Charles Place", 0, false, 11, true, 0, false), Card("Chance Card", "Advance to 5 spaces", 5, true, 0, false, 0, false), Card("Chance Card", "Advance to 10 spaces", 10, true, 0, false, 0, false), Card("Chance Card", "Bank pays you dividend of $50", 0, false, 0, false, 50, true), Card("Chance Card", "Go back 3 spaces", -3, true, 0, false, 0, false), Card("Chance Card", "Speeding fine $15", 0, false, 0, false, -15, true), Card("Chance Card", "Take a trip to Reading Railroad", 0, false, 5, true, 0, false), Card("Chance Card", "Your building loan matures. Collect $150", 0, false, 0, false, 150, true)};
    Card communityChest[] = {Card("Community Chest", "Advance to Go", 0, false, 0, true, 0, false), Card("Community Chest", "Bank error in your favor. Collect $200", 0, false, 0, false, 200, true), Card("Community Chest", "Doctor's fee. Pay $50", 0, false, 0, false, -50, true), Card("Community Chest", "From sale of stock you get $50", 0, false, 0, false, 50, true), Card("Community Chest", "Holiday fund matures. Receive $100", 0, false, 0, false, 100, true), Card("Community Chest", "Income tax refund. Collect $20", 0, false, 0, false, 20, true), Card("Community Chest", "Life insurance matures. Collect $100", 0, false, 0, false, 100, true), Card("Community Chest", "Pay hospital fees of $100", 0, false, 0, false, -100, true), Card("Community Chest", "Pay school fees of $50", 0, false, 0, false, -50, true), Card("Community Chest", "Receive $25 consultancy fee", 0, false, 0, false, 25, true), Card("Community Chest", "You inherit $100", 0, false, 0, false, 100, true)};
