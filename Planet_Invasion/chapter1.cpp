#include "chapter1.h"

Chapter1::Chapter1()
{
    createRooms();
}
void Chapter1::createRooms(){
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
    k = new Room("k");

    a->setExits(f, e, b, g);
    b->setExits(a, d, NULL, c);
    c->setExits(g, b, NULL, NULL );
    d->setExits(e, NULL, NULL, b);
    e->setExits(NULL, NULL,d, a);
    f->setExits(i, NULL, a, NULL);
    g->setExits(NULL, a, c, h);
    h->setExits(NULL, g, NULL, NULL);
    i->setExits(NULL, j, f, NULL);
    j->setExits(NULL, k, NULL, i);
    currentRoom = a;
}

