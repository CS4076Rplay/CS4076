#include "race.h"

Race::Race()
{

}
Race::Race(RACETYPES raceType,string& ability,int& boost)
{
    this -> raceType=raceType;
    this-> ability=ability;
    this-> boost=boost;
}
Race::~Race(){}
RACETYPES Race::getRaceType(){
    return raceType;
}
void Race::setRaceType(RACETYPES raceType)
{
    this->raceType=raceType;
}
string Race::getAbility()
{
    return ability;
}
void Race::setAbility(string& ability)
{
    this->ability=ability;
}
int Race::getBoost()
{
    return boost;
}
void Race::setBoost(int& boost)
{
    this->boost=boost;
}
