#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <map>
#include <vector>
#include "item.h"

using namespace std;

class Room
{
private:
    string description;
    map<string, Room*> exits;
    string exitString();

public:
    Room();
    void setDescription();
    string getDescription();
    void setItems();
};

#endif // ROOM_H
