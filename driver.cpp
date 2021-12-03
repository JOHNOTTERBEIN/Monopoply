int num = 0;
            while(num!=3){
                cout << "======Menu======\n1.Would you like to sell a house?\n2.Would you like to sell a property?\n3.End turn" << endl;
                cin>>num;
                switch(num){
                    case 1:
                        vector<Place> p = pl1.listPlaces();
                        string names;
                        for(int i = 0; i<p.size(); i++){
                            if(p[i].getHouses!=0){
                                names += p[i].getName() + ", ";
                            }
                        }
                        if(names == ""){
                            cout << "You currently have no houses to sell." << endl;
                        }
                        else{
                            string name1;
                            cout << "You currently have places, " << names << "with houses on them. Which would you like to sell?" << endl;
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
                    case 2:
                        vector<Place> p = pl1.listPlaces();
                        string names;
                        for(int i = 0; i<p.size(); i++){
                            names += p[i].getName() + ", ";
                        }
                        if(names == ""){
                            cout << "You currently have no properties to sell." << endl;
                        }
                        else{
                            string name1;
                            cout << "You currently have places, " << names << "which would you like to sell?" << endl;
                            cin >> name1;
                            for(int i = 0; i<p.size(); i++){
                                if(p[i].getName()==name1){
                                    int number = p[i].getHouses();
                                    for(int j = 0; j<number; j++){
                                        pl1.removeHouse(p[i].getName());
                                        pl1.addMoney(p[i].getHouseCost());
                                    }
                                    pl1.removePlace(p[i].getName());
                                    pl1.addMoney(p[i].getPrice());
                                }
                            }
                            for(int i = 0; i<40; i++){
                                if(places[i].getName()==name1){
                                    int number = p[i].getHouses();
                                    for(int j = 0; j<number; j++){
                                        places[i].removeHouse();
                                    }
                                    places[i].setOwned(false);
                                    pl1.setOwnedProperty(i, false);
                                }
                            }
                        }
                    case 3:
                        cout << "Next turn" << endl;
                        break;
                    default:
                        cout << "Invalid input" << endl;
                        break;
                }
                cout << "Current Balance: $" << pl1.getMoneyAmount() << endl;
                vector<Place> p = pl1.listPlaces();
                string names;
                for(int i = 0; i<p.size(); i++){
                    names += p[i].getName() + ", ";
                }
                cout << "You currently have, " << names << endl;
            }
