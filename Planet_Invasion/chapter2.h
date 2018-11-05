#ifndef CHAPTER2_H
#define CHAPTER2_H

#include "room.h"
#include "chapter.h"

class Chapter2: public Chapter
{
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
    void createRooms();

public:
    Chapter2();
};

#endif // CHAPTER2_H
