#include "weapon.h"

Weapon::Weapon()
{

}
Weapon::Weapon(const int& pwr,const int& spd)
{
    power=pwr;
    speed=spd;
}
int Weapon::getPower()
{
    return power;
}
int Weapon::getSpeed()
{
    return speed;
}
void Weapon::setSpeed(const int& spd)
{
    speed=spd;
}
void Weapon::setPower(const int& pwr)
{
    power=pwr;
}
