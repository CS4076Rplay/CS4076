#include "player.h"

Player::Player()
{
    this->name="AIV4";
    this->raceType=AI;
    this->health=100;
    this->attack=25;
    this->defence=25;
    this->speed=25;
    this->intelligence=25;

}
Player::~Player(){

}
Player::Player(const string& name,const RACETYPES& raceType,const int& health,const int& attack,const int& defence,const int& speed,const int& intelligence  )
{
    this->name=name;
    this->raceType=raceType;
    this->health=health;
    this->attack=attack;
    this->defence=defence;
    this->speed=speed;
    this->intelligence=intelligence;

}
//getters
string Player::getName()
{
    return name;
}
int Player::getHealth()
{

    return health;
}
int Player::getAttack()
{
    return attack;
}
int Player::getDefence()
{
    return defence;
}
int Player::getSpeed()
{
    return speed;
}
int Player::getintelligence()
{
    return intelligence;
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

