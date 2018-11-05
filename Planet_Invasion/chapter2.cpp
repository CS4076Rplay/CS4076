#include "chapter2.h"
#include "room.h"

Chapter2::Chapter2()
{
    createRooms();
}
void Chapter2::createRooms(){
    a = new Room("a");
    b = new Room("b");
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
    f = new Room("f");
    g = new Room("g");
    h = new Room("h");
    i = new Room("i");
    j = new Room("j");

    a->setExits(b, NULL, NULL, NULL);
    b->setExits(d, c, a, NULL);
    c->setExits(e, g, NULL, b );
    d->setExits(f, e, b, NULL);
    e->setExits(NULL, NULL, c, d);
    f->setExits(NULL, NULL, d, NULL);
    g->setExits(NULL, NULL, h, c);
    h->setExits(g, i, NULL, NULL);
    i->setExits(NULL, j, NULL, h);

    currentRoom = a;
}

