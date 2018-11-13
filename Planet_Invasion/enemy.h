#ifndef ENEMY_H
#define ENEMY_H
#include "item.h"
enum DOOMER{INFERNO,SHADOW};
class Enemy:public Item
{
private:
   int health;
    int strength;
    int defence;
    int speed;
    DOOMER doomer;
    bool boss;
 public:
    Enemy();
    Enemy(int,const int&,const int&,const int&,const DOOMER&,const bool);
    void setHealth(int);
    int getHealth();
    int getDefence();
    int getSpeed();
    int getStrength();
    DOOMER getDoomer();
    bool isBoss();

};

#endif // ENEMY_H
