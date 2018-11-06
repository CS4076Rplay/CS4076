#include "hp.h"

Hp::Hp()
{

}
Hp::Hp(const int& health)
{
    this->health=health;
}
int Hp::getHp()
{
    return health;
}
void Hp::setHp(const int& health)
{
    this->health=health;
}
