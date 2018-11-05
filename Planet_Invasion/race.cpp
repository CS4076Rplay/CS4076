#include "race.h"

Race::Race()
{

}
Race::Race(const RACETYPES& raceType,const string& ability,const int& boost)
{
    this->raceType=raceType;
    this->ability=ability;
    this->boost=boost;
}

RACETYPES Race::getRaceType(){
    return raceType;
}
void Race::setRaceType(const RACETYPES& raceType)
{
    this->raceType=raceType;
}
string Race::getAbility(){
    return ability;
}
void Race::setAbility(const string& ability)
{
    this->ability=ability;
}
int Race::getBoost()
{
    return boost;
}
void Race::setBoost(const int& boost)
{
    this->boost=boost;
}
