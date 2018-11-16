#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "chapter2.h"
#include "player.h"
#include "story.h"
#include  <QCloseEvent>
#include "battle.h"
#include "gamesscreenthread.h"
#include <QMediaPlayer>
namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{
    friend class InventoryUI;
    Q_OBJECT

public:
    explicit GameScreen(const string chap, QWidget *parent = nullptr,Story *storyline=nullptr,Player *player=nullptr, Inventory *inventory=nullptr, Weapon* weapon=nullptr);
    ~GameScreen();
     void setCurrentWeapon(Weapon*);
    void closeEvent(QCloseEvent *event);
    Weapon* getCurrentWeapon();
    void showDialogBox(string,string);

    GamesScreenThread *weapon_thread;
    GamesScreenThread *ui_thread;
    Battle *battle_thread;
     Player *clonePlayer;
   void MyTimer();
   QTimer *timer;
   QTimer *defTimer;
   QTimer *timer2;
   QTimer *invisiblity_dur;
   QTimer *ls;

   QTimer *timerX;
   QTimer *timerY;
   QString *ability;

    int countA;
   int countB;
   int period;

private slots:

    void on_north_clicked();

    void on_west_clicked();

    void on_south_clicked();

    void on_east_clicked();

    void on_pushButton_2_clicked();


    void on_attackBtn_clicked();

    void on_special_clicked();

    void on_defendBtn_clicked();

    void on_treasure_clicked();

    void on_chest_clicked();

public slots:
    void onItemSelected(Weapon*);
    void refreshHealth(Player* health);
    void updatePlayer(Player*);
    void useHp(Hp*);
    void reload();
    void reloadDef();
    void specialReload();
    void updatePowerTimer();
    void updateWaitBar();
    void invisibility();
    void LastStand();


private:
    Ui::GameScreen *ui;
    void updateLabel();
    void initUI(string);

    Chapter *chapter;
    Story *storyline;
    Player *player;
    Enemy *currentEnemy=nullptr;
    Weapon *weaponTreasure=nullptr;
    Hp *healthPotionTreasure=nullptr;
    Inventory *inventory;
    Weapon *currentWeapon=nullptr;
    bool safeArea;
    bool isInfernDeated=false,isMorganaDeafeated=false;
    QMediaPlayer *soundPlayer;
     Player *o_player;
     int power;
     void movePlayer(string direction);

};

#endif // GAMESCREEN_H
