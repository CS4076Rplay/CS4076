#include "chapter.h"
#include "room.h"

void Chapter::goRoom(const string& direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);

    currentRoom = nextRoom;
}

string Chapter::getDescription(){
    return currentRoom->getDescription();
}

