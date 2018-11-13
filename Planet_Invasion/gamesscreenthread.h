#ifndef GAMESSCREENTHREAD_H
#define GAMESSCREENTHREAD_H

#include <QThread>

#include "inventory.h"
#include "player.h"

class GamesScreenThread : public QThread
{
    Q_OBJECT
public:
    explicit GamesScreenThread(QObject *parent=0);
    void run();
    bool stop;
    void setStop(bool);

    void setItem(Weapon*);
    void setHealth(Hp*);
    Inventory* inventory;
    int health;
    Player* player;

signals:
    void itemSelected(Weapon*);
    void refreshHealth(Player*);
    void usePotion(Hp*);
public slots:

private:
    Weapon *item;
    Hp *hp;
};

#endif // GAMESSCREENTHREAD_H
