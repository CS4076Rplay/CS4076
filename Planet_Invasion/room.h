#ifndef ROOM_H
#define ROOM_H
#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "enemy.h"
#include "weapon.h"
#include "hp.h"
using namespace std;

class Room
{
private:
    string description;
    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;
    Enemy *enemy=nullptr;
    string roomImg;
    Weapon *weapon=nullptr;
    Hp *hp=nullptr;

public:
    int numberOfItems();
    Room(string description,string img);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    string getDescription();
    void setDescription(string);
    void setImg(string);
    string getImg();
    Room* nextRoom(string description);
    Enemy* getEnemy();
    void addEnemy(Enemy*);
    void removeEnemy();
    Weapon *getWeapon();
    void addWeapon(Weapon*);
    void removeWeapon();
    Hp *getHp();
    void addHp(Hp*);
    void removeHp();
    string defaultImg;

};

#endif // ROOM_H
