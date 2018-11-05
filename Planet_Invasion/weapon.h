#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
class Weapon:public Item
{
private:
    int power;
    int speed;
public:
    Weapon();
    Weapon(const int&,const int&);
    int getPower();
    int getSpeed();
    void setSpeed(const int&);
    void setPower(const int&);

};

#endif // WEAPON_H
