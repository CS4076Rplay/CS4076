#ifndef CHAPTER1_H
#define CHAPTER1_H

#include "room.h"

class Chapter1
{
private:
    Room *currentRoom, *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k;
    void createRooms();
    void printIntro();

public:
    Chapter1();
    void goRoom(string direction);
    string getDescription();
};

#endif // CHAPTER1_H
