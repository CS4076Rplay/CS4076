#include "gamesscreenthread.h"
#include <iostream>
GamesScreenThread::GamesScreenThread(QObject *parent):
    QThread(parent)

{

}

void GamesScreenThread::setItem(Weapon *item)
{
    this->item=item;
}
void GamesScreenThread::setHealth(Hp *hp)
{
    this->hp=hp;
}

void GamesScreenThread::setStop(bool stop)
{
    this->stop=stop;
}

void GamesScreenThread::run()
{
    int i=0;
    while(!stop)
    {
      if(item!=nullptr)
       emit itemSelected(item);
      if(hp!=nullptr)
          emit usePotion(hp);
       if(player!=nullptr)
           emit refreshHealth(player);
       this->msleep(100);
    }
}
