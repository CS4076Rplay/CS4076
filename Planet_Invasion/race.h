#ifndef RACE_H
#define RACE_H
#include <string>
using namespace std;
enum RACETYPES{SHADOWALKER,MOONMAGE,BRUTE,AI};
class Race
{
protected:
    RACETYPES raceType;
    string ability;
    int boost;
public:
    Race();
    Race(const RACETYPES&,const string&,const int&);
  // ~Race();
    RACETYPES getRaceType();
    void setRaceType(const RACETYPES&);
    string getAbility();
    void setAbility(const string&);
    int getBoost();
    void setBoost(const int&);

};

#endif // RACE_H
