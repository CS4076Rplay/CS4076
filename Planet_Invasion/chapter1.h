#ifndef CHAPTER1_H
#define CHAPTER1_H

#include "room.h"
#include "chapter.h"

class Chapter1:public Chapter
{
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k;
    void createRooms();

public:
    Chapter1();
};

#endif // CHAPTER1_H
