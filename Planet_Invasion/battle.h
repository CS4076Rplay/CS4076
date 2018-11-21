#ifndef BATTLE_H
#define BATTLE_H

#include "player.h"
#include "enemy.h"

#include <QMediaPlayer>
#include <QRandomGenerator>
#include <QThread>
class Battle:public QThread
{
    Q_OBJECT
public:
    explicit Battle(QObject *parent=0,Player* player=nullptr,Inventory* inventory=nullptr);
private:
    Player *player;
    Enemy *enemy;
    Item *reward;
    Inventory *inventory;
    QMediaPlayer *soundFx;
     QMediaPlayer *soundFx2;
     QMediaPlayer *defSoundFx;
     QRandomGenerator randomNum;

signals:
     void attackResult(Player*);

public:
    bool fighting;
    string damage;
    bool isdefend=false;
    unsigned long attackSpeed;
    int generateRandomNum(const int&,const int&);
    Battle();
    void run();
    Battle(Player*,Enemy*,Item*,Inventory*);
    void setReward(Item*);
    void setInventory(Inventory*);
    void setEnemy(Enemy*);
    void setItem(Item*);


    bool getWinner();
    bool isBattleOver();
    void attack(Weapon*);
     void attack();
    void defend();
};

#endif // BATTLE_H
