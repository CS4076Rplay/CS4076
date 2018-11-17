#ifndef CHAPTER3_H
#define CHAPTER3_H

#include "chapter.h"
#include "player.h"
#include "story.h"



class Chapter3 : public Chapter
{
private:
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;
    void createRooms();
    Player *player;
    Inventory *inventory;
    Story *storyline;
public:
    Chapter3();
    Chapter3( Player*, Inventory*, Story*);
    Room* resetRoom();
};

#endif // CHAPTER3_H
