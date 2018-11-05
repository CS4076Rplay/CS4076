#ifndef ROOM_H
#define ROOM_H
#include <map>
#include <string>
#include <vector>
#include "item.h"

using namespace std;

class Room
{
private:
    string description;
    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;

public:
    int numberOfItems();
    Room(string description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    string getDescription();
    Room* nextRoom(string description);

};

#endif // ROOM_H
