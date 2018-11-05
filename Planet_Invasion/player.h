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


public:
    Player();
    ~Player();
    Player(const string&,const RACETYPES&,const int&,const int&,const int&,const int&,const int&);
    //getters
    string getName();
    int getHealth();
    int getAttack();
    int getDefence();
    int getSpeed();
    int getintelligence();


    //setters
    void setName(const string&);
    void setHealth(const int&);
    void setAttack(const int&);
    void setDefence(const int&);
    void setSpeed(const int&);
    void setIntelligence(const int&);



};

#endif // PLAYER_H
