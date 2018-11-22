#include "enemy.h"

Enemy::Enemy()
{
    this->health=100;
    this->strength=20;
    this->defence=30;
    this->speed=20;
    this->doomer=INFERNO;
    this->boss=false;
}

Enemy::Enemy(int health,const int& strength,const int& defence,const int& speed,const DOOMER& doomer,const bool boss)
{
    this->health=health;
    this->strength=strength;
    this->defence=defence;
    this->speed=speed;
    this->doomer=doomer;
    this->boss=boss;
}

void Enemy::setHealth(int health)
{
    this->health=health;
}

int Enemy::getHealth()
{
    return  health;
}

int Enemy::getDefence()
{
    return  defence;
}

int Enemy::getSpeed()
{
    return speed;
}

int Enemy::getStrength()
{
    return strength;
}

DOOMER Enemy::getDoomer()
{
    return doomer;
}

bool Enemy::isBoss()
{
    return boss;
}
