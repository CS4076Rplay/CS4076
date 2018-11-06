#ifndef HP_H
#define HP_H

#include "item.h"
class Hp:public Item
{
private:
    int health;
public:
    Hp();
    Hp(const int&);
    int getHp();
    void setHp(const int&);

};

#endif // HP_H
