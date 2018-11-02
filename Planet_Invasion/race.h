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
    Race(RACETYPES,string&,int&);
    ~Race();
    RACETYPES getRaceType();
    void setRaceType(RACETYPES);
    string getAbility();
    void setAbility(string&);
    int getBoost();
    void setBoost(int&);

};

#endif // RACE_H
