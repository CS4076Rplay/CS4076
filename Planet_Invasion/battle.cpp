#include "battle.h"

Battle::Battle()
{

}
Battle::Battle(Player* player,Enemy* enemy,Item* reward,Inventory* inventory)
{
    this->player=player;
    this->enemy=enemy;
    this->reward=reward;
    this->inventory=inventory;
}
void Battle::setReward(Item* reward)
{
    this->reward=reward;
}
void Battle::setInventory(Inventory* inventory)
{
    this->inventory=inventory;
}

template<class T>
T Battle::getWinner()
{
    if(player->getHealth()>enemy->getHealth())
        return player;
    else return enemy;
}
bool Battle::isBattleOver()
{
    if(player->getHealth()==0||enemy->getHealth()==0)
        return true;
    return false;
}
void Battle::attack()
{
    int attackPower=player->getAttack()+(player->getintelligence()/3)+(player->getSpeed()/2);
    int defencePower=enemy->getHealth()+enemy->getDefence()+enemy->getSpeed();
    enemy->isBoss() && enemy->getDoomer()==INFERNO ? defencePower+=40:defencePower+=1;
    enemy->isBoss() && enemy->getDoomer()==SHADOW ? defencePower+=80:defencePower+=12;

    if(!isBattleOver())
    {
      enemy->setHealth(defencePower-attackPower);
    }
    else
    {
        //display you are dead
    }
}
void Battle::defend()
{
    int defencePower=player->getAttack()+(player->getintelligence()/3)+(player->getSpeed()/2);
    int attackPower=enemy->getStrength()+enemy->getSpeed()/2;
    enemy->isBoss() && enemy->getDoomer()==INFERNO ? attackPower+=80:attackPower+=12;
    enemy->isBoss() && enemy->getDoomer()==SHADOW ? attackPower+=40:attackPower+=1;

    if(!isBattleOver())
    {
      player->setHealth(defencePower-attackPower);
    }
    else
    {
        //display you are dead
    }
}
