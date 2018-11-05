#ifndef CHAPTER2_H
#define CHAPTER2_H

#include "room.h"

class Chapter2
{
private:
    Room *currentRoom, *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
    void createRooms();
    void printIntro();

public:
    Chapter2();
    void goRoom(string direction);
    string getDescription();
};

#endif // CHAPTER2_H
