#include "room.h"
#include <iostream>
Room::Room(string description,string roomImg){
this->description = description;
this->roomImg=roomImg;
}

void Room::setExits(Room *north, Room *east, Room *south, Room *west){
    if (north != NULL)
            exits["north"] = north;
    if (east != NULL)
            exits["east"] = east;
    if (south != NULL)
            exits["south"] = south;
    if (west != NULL)
            exits["west"] = west;
}

string Room::exitString() {
    string returnString = "\nexits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
    return returnString;
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction); //returns an iterator for the "pair"
    if (next == exits.end())
        return NULL; // if exits.end() was returned, there's no room in that direction.
    return next->second; // If there is a room, remove the "second" (Room*)
                // part of the "pair" (<string, Room*>) and return it.
}
void Room::addEnemy(Enemy *enemy)
{
    this->enemy=enemy;

}
void Room::removeEnemy()
{
    enemy=nullptr;
    roomImg="clearRoom.png";

}
Enemy* Room::getEnemy()
{
    return enemy;
}
Weapon*  Room::getWeapon()
{
    return weapon;
}

void  Room::addWeapon(Weapon* weapon)
{
    this->weapon=weapon;
}
void  Room::removeWeapon()
{

    weapon=nullptr;
}

Hp*  Room::getHp()
{
    return hp;
}
void  Room::addHp(Hp* hp)
{
    this->hp=hp;
}
void  Room::removeHp()
{
    hp=nullptr;
}

string Room::getDescription(){
    return description;
}
string Room::getImg()
{
    return roomImg;
}

