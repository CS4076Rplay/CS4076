#include "player.h"
#include "race.h"
Player::Player()
{
    this->name="AIV4";
    this->raceType=AI;
    this->health=100;
    this->attack=25;
    this->defence=25;
    this->speed=25;
    this->intelligence=25;
    this->inventory=Inventory();
}
Player::~Player(){

}
Player::Player(string name,RACETYPES raceType,int health,int attack,int defence,int speed,int intelligence,Inventory inventory)
{
    this->name=name;
    this->raceType=raceType;
    this->health=100;
    this->attack=attack;
    this->defence=defence;
    this->speed=speed;
    this->intelligence=intelligence;
    this->inventory=inventory;
}
//getters
string Player::getName()
{
    return name;
}
int Player::getHealth()
{
    switch(raceType)
    {
        case SHADOWALKER:return health+10;
        case MOONMAGE:return health+5;
        case BRUTE:return health+45;
        case AI:return health+12;
    default:return attack;
    }
}
int Player::getAttack()
{
    switch(raceType)
    {
        case SHADOWALKER:return attack+10;
        case MOONMAGE:return attack+5;
        case BRUTE:return attack+45;
        case AI:return attack+12;
    default:return attack;
    }
}
int Player::getDefence()
{
    switch(raceType)
    {
        case SHADOWALKER:return defence+35;
        case MOONMAGE:return defence+15;
        case BRUTE:return defence+30;
        case AI:return defence+25;
   // default:return defence;
    }
}
int Player::getSpeed()
{
    switch(raceType)
    {
        case SHADOWALKER:return speed+40;
        case MOONMAGE:return speed+26;
        case BRUTE:return speed+10;
        case AI:return speed+30;
   // default:return speed;
    }
}
int Player::getintelligence()
{
    switch(raceType)
    {
        case SHADOWALKER:return intelligence+20;
        case MOONMAGE:return intelligence+40;
        case BRUTE:return intelligence+10;
        case AI:return intelligence+40;
    //default:return intelligence;
    }
}
Inventory Player::getInventory()
{
    return inventory;
}

//setters
void Player::setHealth(const int& health)
{
    this->health=health;
}
void Player::setName(const string& name)
{
    this->name=name;
}
void Player::setAttack(const int& attack)
{
    this->attack=attack;
}
void Player::setDefence(const int& defence)
{
    this->defence=defence;
}
void Player::setSpeed(const int& speed)
{
    this->speed=speed;
}
void Player::setIntelligence(const int& intelligence)
{
    this->intelligence=intelligence;
}
void Player::setInventory(const Inventory& inventory)
{
    this->inventory=inventory;
}
