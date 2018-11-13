#include "chapter.h"
#include "room.h"

void Chapter::goRoom(const string& direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);

    if(nextRoom!=nullptr)currentRoom = nextRoom;
}

string Chapter::getDescription(){
    return currentRoom->getDescription();
}
string Chapter::getImage()
{
    return currentRoom->getImg();
}

Chapter::~Chapter()
{}
