#ifndef PLAYER_H
#define PLAYER_H

#include "race.h"
#include "inventory.h"
#include <string>
using namespace std;
class Player:public Race
{
private:
    string name;
    int health;
    int attack;
    int defence;
    int speed;
    int intelligence;
    Inventory inventory;

public:
    Player();
    ~Player();
    Player(string,RACETYPES,int,int,int,int,int,Inventory);
    //getters
    string getName();
    int getHealth();
    int getAttack();
    int getDefence();
    int getSpeed();
    int getintelligence();
    Inventory getInventory();

    //setters
    void setName(const string&);
    void setHealth(const int&);
    void setAttack(const int&);
    void setDefence(const int&);
    void setSpeed(const int&);
    void setIntelligence(const int&);
    void setInventory(const Inventory&);


};

#endif // PLAYER_H
