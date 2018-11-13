#ifndef CHAPTER1_H
#define CHAPTER1_H

#include "room.h"
#include "chapter.h"
#include "player.h"
#include "story.h"
class Chapter1:public Chapter
{
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k;
    void createRooms();
    Player *player;
    Inventory *inventory;
    Story *storyline;
public:
    Chapter1();
    Chapter1( Player*, Inventory*, Story*);
    Room* resetRoom();
};

#endif // CHAPTER1_H
