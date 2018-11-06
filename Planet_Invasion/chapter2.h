#ifndef CHAPTER2_H
#define CHAPTER2_H

#include "room.h"
#include "chapter.h"
#include "player.h"
#include "story.h"
class Chapter2: public Chapter
{
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
    void createRooms();
    Player *player;
    Inventory *inventory;
    Story *storyline;
public:
    Chapter2();
    Chapter2( Player*, Inventory*, Story*);
};

#endif // CHAPTER2_H
