#ifndef BATTLE_H
#define BATTLE_H

#include "player.h"
#include "enemy.h"
class Battle
{
private:
    Player *player;
    Enemy *enemy;
    Item *reward;
    Inventory *inventory;
public:
    Battle();
    Battle(Player*,Enemy*,Item*,Inventory*);
    void setReward(Item*);
    void setInventory(Inventory*);
    template<class T>
    T getWinner();
    bool isBattleOver();
    void attack();
    void defend();
};

#endif // BATTLE_H
