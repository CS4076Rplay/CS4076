#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "chapterscreen.h"
#include "chapter2.h"
#include "chapter1.h"
#include "chapter3.h"
#include "finalchapter.h"
#include "map.h"
#include <iostream>
#include <QCloseEvent>
#include <QMessageBox>
#include <QTimer>
#include <QMediaPlayer>
#include <ctime>
#include <cstdlib>
ostream& operator<<(ostream& os, const Player& pl)
{
    os<<pl.attack<<" | "<<pl.defence<<" | "<<pl.intelligence<<" | "<<pl.speed<<endl;
    return os;
}
inline void GameScreen::finalChapterCheck()
{
    initUI("chapter4");
    isDoomageDefeated=false;
}

GameScreen::GameScreen(const string chap,QWidget *parent,Story *storyline,Player *player,Inventory *inventory,Weapon* currentWeapon) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{

    this->currentWeapon=currentWeapon;
    this->inventory=inventory;
    this->player=player;
    this->storyline=storyline;

    if(chap=="chapter1")c=1;
    else if(chap=="chapter2")c=2;
    else if(chap=="chapter3")c=3;
    else c=4;

    setWindowTitle(QString::fromStdString("CHAPTER "+to_string(c)));
    ui->setupUi(this);
    o_player=player;
    power=player->getAttack();
    //
    soundPlayer=new QMediaPlayer(this);
    lootFx=new QMediaPlayer(this);
    specialFx=new QMediaPlayer(this);
    defenceFx=new QMediaPlayer(this);
    sceneFx=new QMediaPlayer(this);
    lootFx->setMedia(QUrl("qrc:/Sounds/loot.wav"));
    defenceFx->setMedia(QUrl("qrc:/Sounds/blocked.wav"));
    srand(time(0));


    ui->special->setText("waiting...");
    ui->special->setDisabled(true);
    ui->treasure->hide();
    ui->chest->hide();
    timer=new QTimer(this);//attack
    defTimer=new QTimer(this);
    timer2=new QTimer(this);//special
    invisiblity_dur=new QTimer(this);//invisibility
    ls=new QTimer(this);//last stand

    safeArea=true;
    connect(timer,SIGNAL(timeout()),this,SLOT(reload()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(specialReload()));
    connect(ls,SIGNAL(timeout()),this,SLOT(LastStand()));
    connect(invisiblity_dur,SIGNAL(timeout()),this,SLOT(invisibility()));
    connect(defTimer,SIGNAL(timeout()),this,SLOT(reloadDef()));

    timer->setSingleShot(true);
    defTimer->setSingleShot(true);
    timer2->setSingleShot(true);
    invisiblity_dur->setSingleShot(true);
    ls->setSingleShot(true);

    weapon_thread=new GamesScreenThread(this);
    ui_thread=new GamesScreenThread(this);
    battle_thread=new Battle(this,player,inventory);
    connect(weapon_thread,SIGNAL(itemSelected(Weapon*)),this,SLOT(onItemSelected(Weapon*)));
    connect(ui_thread,SIGNAL(refreshHealth(int)),this,SLOT(refreshHealth(int)));
    connect(battle_thread,SIGNAL(attackResult(Player*)),this,SLOT(updatePlayer(Player*)));

    weapon_thread->setStop(true);
    weapon_thread->setItem(currentWeapon);
    ui_thread->health=player->getHealth();
    ui_thread->setStop(false);
    ui_thread->start();

    QString *img=new QString();
    ui->myName->setText(QString::fromStdString(player->getName()));

    switch(player->getRaceType())
    {
    case SHADOWALKER:
    {
        specialFx->setMedia(QUrl("qrc:/Sounds/swSFX.wav"));
        img=new QString("Shadowalker.png");player->setSpeed(100);
    }break;
    case MOONMAGE:
    {
        specialFx->setMedia(QUrl("qrc:/Sounds/mSFX.wav"));
        img=new QString("Mage1.png");
    }break;
    case KNIGHT:
    {
        specialFx->setMedia(QUrl("qrc:/Sounds/kSFX.wav"));
        img=new QString("Knight");
    }break;
    case AI:
    {
        specialFx->setMedia(QUrl("qrc:/Sounds/aiSFX.mp3"));
        img=new QString("AI.png");
    }break;
    }

    QPixmap pix(":/Images/Characters/"+(*img));

    QPixmap pic(":/Images/Characters/"+(QString::fromStdString(currentWeapon->getUrl())));
    ui->myImg->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    ui->currentWeaponImg->setPixmap(pic.scaled(120,120,Qt::KeepAspectRatio));
    ui->currentWeaponPower->setValue(currentWeapon->getPower());
    ui->currentWeaponSpeed->setValue(currentWeapon->getSpeed());
    ui->currentWeaponName->setText(QString::fromStdString(currentWeapon->getName()));
    soundPlayer->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(currentWeapon->getSoundUrl())));
    power=player->getAttack()+currentWeapon->getPower();
    player->setAttack(power);

    player->setSpeed(power+currentWeapon->getSpeed());
    initUI(chap);
}

void GameScreen::initUI(string chap )
{
    ui_thread->setStop(true);
    if(chap=="chapter1")c=1;
    else if(chap=="chapter2")c=2;
    else if(chap=="chapter3")c=3;
    else c=4;

    setWindowTitle(QString::fromStdString("CHAPTER "+to_string(c)));
    battle_thread->fighting=false;

    if(chap == "chapter2")
        chapter = new Chapter2(player,inventory,storyline);
    else if(chap == "chapter1")
        chapter = new Chapter1(player,inventory,storyline);
    else if(chap == "chapter3")
        chapter = new Chapter3(player,inventory,storyline);
    else if(chap=="chapter4")
    {
        hide();
        FinalChapter *c4=new FinalChapter(this,player,inventory,storyline);
        c4->show();
    }

    ui->label->setText(QString::fromStdString(chapter->getDescription()));
    ui->description->setPixmap(QPixmap(":/Images/Characters/"+QString::fromStdString(chapter->getImage())).scaled(300,300,Qt::KeepAspectRatio));
    ui->enemyName->hide();
    ui->enemyHealth->hide();
    switch(player->getRaceType())
    {
    case SHADOWALKER:  ui->special->setIcon(QIcon(":/Images/Characters/sw_ic.png"));break;
    case MOONMAGE:  ui->special->setIcon(QIcon(":/Images/Characters/mage_ic.png"));break;
    case KNIGHT:  ui->special->setIcon(QIcon(":/Images/Characters/k_ic.png"));break;
    case AI:  ui->special->setIcon(QIcon(":/Images/Characters/ai_ic.png"));break;
    }
    ui->damage->setText(QString::fromStdString(battle_thread->damage));
}

void GameScreen::setCurrentWeapon(Weapon* currentWeapon)
{
    this->currentWeapon=currentWeapon;
    soundPlayer->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(currentWeapon->getSoundUrl())));
    power=player->getAttack()+currentWeapon->getPower();
    player->setAttack(power);
    player->setSpeed(power+currentWeapon->getSpeed());
}

Weapon* GameScreen::getCurrentWeapon()
{
    return currentWeapon;
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::on_north_clicked()
{
    movePlayer("north");
    if(isInfernDeated)
    {
        initUI("chapter2");
        isInfernDeated=false;
        chapter->resetRoom();
    }else  if(isMorganaDeafeated)
    {
        initUI("chapter3");
        isInfernDeated=false;
        isMorganaDeafeated=false;
        chapter->resetRoom();
    }else  if(isDoomageDefeated)
    {
        finalChapterCheck();

    }
}

void GameScreen::on_west_clicked()
{
    movePlayer("west");
    if(isDoomageDefeated)
       finalChapterCheck();

}

void GameScreen::on_south_clicked()
{
    movePlayer("south");
    if(isDoomageDefeated)
            finalChapterCheck();

}

void GameScreen::on_east_clicked()
{
    movePlayer("east");
    if(isDoomageDefeated)
        finalChapterCheck();

}

void GameScreen::movePlayer(string direction)
{
    timer2->start(1200);
    chapter->goRoom(direction);
    updateLabel();
    Enemy* doomer=chapter->currentRoom->getEnemy();
    Hp *hp=chapter->currentRoom->getHp();
    Weapon *weapon=chapter->currentRoom->getWeapon();//weapon reward

    if(weapon!=nullptr)
    {
        if(doomer!=nullptr)
        {
            ui->chest->setEnabled(false);
            ui->chest->show();
            weaponTreasure=weapon;
            ui->chest->setIconSize(QSize(50,50));
            ui->treasure->setIcon(QIcon(QString::fromStdString(":/Images/Characters/"+weapon->getUrl())));
            ui->treasure->setIconSize(QSize(50,50));
        }
        else
        {
            ui->chest->setEnabled(true);
            ui->chest->show();
            weaponTreasure=weapon;
            ui->chest->setIconSize(QSize(160,160));
            ui->treasure->setIcon(QIcon(QString::fromStdString(":/Images/Characters/"+weapon->getUrl())));
            ui->treasure->setIconSize(QSize(120,120));
        }

    }
    else if(hp!=nullptr)
    {
        if(doomer!=nullptr)
        {
            if(doomer->getName()=="Morgana")
            {
                sceneFx->setMedia(QUrl("qrc:/Sounds/sD2.wav"));
                sceneFx->play();
            }
            ui->chest->setEnabled(false);
            ui->chest->show();
            healthPotionTreasure=hp;

            ui->chest->setIconSize(QSize(50,50));
            ui->treasure->setIcon(QIcon(QString::fromStdString(":/Images/Characters/"+hp->getUrl())));
            ui->treasure->setIconSize(QSize(50,50));
        }
        else
        {
            ui->chest->show();
            healthPotionTreasure=hp;

            ui->chest->setIconSize(QSize(160,160));
            ui->treasure->setIcon(QIcon(QString::fromStdString(":/Images/Characters/"+hp->getUrl())));
            ui->treasure->setIconSize(QSize(120,120));
        }

    }
    else
    {
        ui->treasure->hide();
        ui->chest->hide();
    }

    if(doomer!=nullptr)
    {
        safeArea=false;
        ui->north->setDisabled(true);
        ui->east->setDisabled(true);
        ui->west->setDisabled(true);
        ui->south->setDisabled(true);
        ui->north->setText("No Escape");
        ui->east->setText("No Escape");
        ui->west->setText("No Escape");
        ui->south->setText("No Escape");
        currentEnemy=doomer;
        battle_thread->setEnemy(currentEnemy);
        ui->enemyName->show();
        ui->enemyHealth->show();
        ui->enemyHealth->setValue(doomer->getHealth());
        ui->enemyName->setText(QString::fromStdString(doomer->getName()));

        //initBattle;
        battle_thread->setEnemy(doomer);
        battle_thread->fighting=true;
        battle_thread->attackSpeed=2000-(unsigned long)doomer->getSpeed();
        if(doomer->getName()=="lvl3 Inferno Doomer")
            battle_thread->start();
    }
    else
    {
        safeArea=true;
        ui->enemyName->hide();
        ui->enemyHealth->hide();
    }
}

void GameScreen::updateLabel(){
    ui->label->setText(QString::fromStdString(chapter->getDescription()));

    currentEnemy!=nullptr&&(currentEnemy->getName()=="Morgana"||currentEnemy->getName()=="The Great Infern") ? ui->description->setPixmap(QPixmap(":/Images/Characters/"+QString::fromStdString(chapter->getImage())).scaled(460,460,Qt::KeepAspectRatio)):ui->description->setPixmap(QPixmap(":/Images/Characters/"+QString::fromStdString(chapter->getImage())).scaled(300,300,Qt::KeepAspectRatio));
}

void GameScreen::on_pushButton_2_clicked()
{
    //inventory
    InventoryUI *inventoryUI=new InventoryUI(this,inventory,this);
    inventoryUI->setInventory(this->inventory);
    inventoryUI->setModal(true);
    inventoryUI->show();

}

void GameScreen::updatePlayer(Player*player)
{
    if(player->getHealth()>=0)
        ui->healthBar->setValue(player->getHealth());
    else
        ui->healthBar->setValue(0);
}

void GameScreen::refreshHealth(Player* player)
{
    ui->healthBar->setValue(player->getHealth());
}
void GameScreen::onItemSelected(Weapon *w)
{
    if(w!=nullptr)
    {
        QPixmap pic(":/Images/Characters/"+(QString::fromStdString(w->getUrl())));
        ui->currentWeaponImg->setPixmap(pic.scaled(120,120,Qt::KeepAspectRatio));
        ui->currentWeaponPower->setValue(w->getPower());
        ui->currentWeaponSpeed->setValue(w->getSpeed());
        ui->currentWeaponName->setText(QString::fromStdString(w->getName()));
        soundPlayer->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(currentWeapon->getSoundUrl())));
    }
}

void GameScreen::useHp(Hp *hp)
{
    if(hp!=nullptr)
    {
        ui->healthBar->setValue(player->getHealth());
    }
}

int GameScreen::generateRandomNum(const int& min,const int& max)
{
    static bool first=true;
    if(first)
    {
        srand(time(NULL));
        first=false;
    }
    int r=min+rand()%((max-min)+1);
    return r;
}

void GameScreen::showDialogBox(string message,string title)
{
    QMessageBox::about(this,QString::fromStdString(message),QString::fromStdString(title));
}

void GameScreen::closeEvent(QCloseEvent *event)
{
    ui_thread->setStop(true);
    battle_thread->fighting=false;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Quit", "Are you sure you want to Leave?",
                                  QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

    if (reply == QMessageBox::Yes)
    {
        event->accept();
    }

    if (reply == QMessageBox::No)
    {
        ui_thread->setStop(false);
        ui_thread->start();
        event->ignore();
    }

    if(reply == QMessageBox::Cancel)
    {
        ui_thread->setStop(false);
        ui_thread->start();
        event->ignore();
    }

}
void GameScreen::reload()
{
    ui->attackBtn->setDisabled(false);

}
void GameScreen::reloadDef()
{
    ui->defendBtn->setDisabled(false);

}
void GameScreen::updatePowerTimer()
{
    countA--;
    if(countA>0)
    {
        ui->timeLeft->setText(QString(QString::fromStdString(to_string(countA)))+" sec(s) Left of "+ability);
    }
    else
    {
        ui->timeLeft->setText("");
        countA=period;
        timerX->stop();
    }
}

void GameScreen::updateWaitBar()
{
    countB+=10;
    if(countB<=100)
    {
        ui->specialTime->setValue(countB);
    }
}
void GameScreen::specialReload()
{
    ui->special->setText(QString::fromStdString(player->getAbility()));
    switch(player->getRaceType())
    {
    case SHADOWALKER:  ui->special->setIcon(QIcon(":/Images/Characters/sw_ic.png"));break;
    case MOONMAGE:  ui->special->setIcon(QIcon(":/Images/Characters/mage_ic.png"));break;
    case KNIGHT:  ui->special->setIcon(QIcon(":/Images/Characters/k_ic.png"));break;
    case AI:  ui->special->setIcon(QIcon(":/Images/Characters/ai_ic.png"));break;
    }

    int i=60;
    i--;
    ui->special->setDisabled(false);
    ui->specialTime->hide();
}

void GameScreen::invisibility()
{
    player=clonePlayer;
    battle_thread->fighting=true;
    ui->healthBar->setEnabled(true);
    ui->myImg->show();
    ui->specialTime->hide();
}

void GameScreen::LastStand()
{
    player->setAttack(power);
    ui->specialTime->hide();
}

void GameScreen::on_attackBtn_clicked()
{
    soundPlayer->play();
    ui->attackBtn->setDisabled(true);
    timer->start(1000-(player->getSpeed()*2));
    if(!safeArea){
        battle_thread->start();
        battle_thread->attack();

        if(currentEnemy->getHealth()>=20&&currentEnemy->getHealth()<=50)
        {
            ui->enemyHealth->setStyleSheet(ui->enemyHealth->property("defaultStyleSheet").toString()+"QProgressBar::chunk{background:orange}");
        }
        else if(currentEnemy->getHealth()<20){
            ui->enemyHealth->setStyleSheet(ui->enemyHealth->property("defaultStyleSheet").toString()+"QProgressBar::chunk{background:red}");
        }

        if(player->getHealth()>=20&&player->getHealth()<=50)
        {
            ui->healthBar->setStyleSheet(ui->healthBar->property("defaultStyleSheet").toString()+"QProgressBar::chunk{background:orange}");
        }else if(player->getHealth()<20){
            ui->healthBar->setStyleSheet(ui->healthBar->property("defaultStyleSheet").toString()+"QProgressBar::chunk{background:red}");
        }
        else{
            ui->healthBar->setStyleSheet(ui->healthBar->property("defaultStyleSheet").toString()+"QProgressBar::chunk{background:green}");
        }

        currentEnemy->getHealth()>=0?ui->enemyHealth->setValue(currentEnemy->getHealth()):ui->enemyHealth->setValue(0);
        if(battle_thread->isBattleOver())
        {
            if(battle_thread->getWinner())
            {
                if(currentEnemy->getName()=="The Great INFERN"||currentEnemy->getName()=="Morgana"||currentEnemy->getName()=="Doomage")
                {
                    currentEnemy->getName()=="The Great INFERN"?isInfernDeated=true:currentEnemy->getName()=="Morgana"?isMorganaDeafeated=true:isDoomageDefeated=true;
                    string p="ATTACK: "+to_string(player->getAttack())+" +10";
                    string d="DEFENCE: "+to_string(player->getDefence())+" +10";
                    string s="SPEED: "+to_string(player->getSpeed())+" +10";
                    string i="INTELLIGENCE: "+to_string(player->getintelligence())+" +10";

                    string msg= "STAT:\n"+p+"\n"+d+"\n"+s+"\n"+i;
                    showDialogBox("Chapter completed",msg);

                    player->setAttack(player->getAttack()+10);
                    player->setDefence(player->getDefence()+10);
                    player->setIntelligence(player->getintelligence()+10);
                    player->setSpeed(player->getSpeed()+10);
                }

                chapter->currentRoom->removeEnemy();
                int rand=generateRandomNum(1,5);

                switch(rand)
                {
                case 1:
                    chapter->currentRoom->setDescription(player->getName()+": I shall Avenge my Clan.");break;
                case 2:
                    chapter->currentRoom->setDescription(player->getName()+": my whole clan wiped out just like that.");break;
                case 3:
                    chapter->currentRoom->setDescription(player->getName()+": There's nothing here!.");break;
                case 4:
                    chapter->currentRoom->setDescription(player->getName()+": There's not a lot of time left, i must find a cure and bring an end to all of this.");break;
                case 5:
                    chapter->currentRoom->setDescription(player->getName()+": Why is all this happening...");break;
                default:
                    chapter->currentRoom->setDescription(player->getName()+": This Area Looks oddly Familier.");
                }

                chapter->currentRoom->setImg(chapter->currentRoom->defaultImg);

                ui->north->setDisabled(false);
                ui->east->setDisabled(false);
                ui->west->setDisabled(false);
                ui->south->setDisabled(false);
                ui->north->setText("North");
                ui->east->setText("East");
                ui->west->setText("West");
                ui->south->setText("South");

                if(weaponTreasure!=nullptr)
                {
                    ui->chest->setEnabled(true);
                    ui->chest->setIconSize(QSize(160,160));
                    ui->treasure->setIconSize(QSize(130,130));
                }
                else if(healthPotionTreasure!=nullptr)
                {
                    ui->chest->setEnabled(true);
                    ui->chest->setIconSize(QSize(160,160));
                    ui->treasure->setIconSize(QSize(130,130));
                }

                QMediaPlayer *player=new QMediaPlayer(this);
                player->setVolume(100);
                player->setMedia(QUrl("qrc:/Sounds/destroyed.wav"));
                player->play();
                ui->description->clear();
            }
            else
            {
                //dead
                showDialogBox("You're Dead","No "+player->getName()+", You can't Die now Arise and fight for your people.");
                chapter->currentRoom=chapter->resetRoom();
                updateLabel();
                battle_thread->fighting=false;

                ui->north->setDisabled(false);
                ui->east->setDisabled(false);
                ui->west->setDisabled(false);
                ui->south->setDisabled(false);

                ui->north->setText("North");
                ui->east->setText("East");
                ui->west->setText("West");
                ui->south->setText("South");

                ui->enemyHealth->hide();
                ui->enemyName->hide();

                ui->healthBar->setValue(40);
                player->setHealth(40);
            }
        }
    }
}

void GameScreen::on_special_clicked()
{
    specialFx->play();
    if(battle_thread->isBattleOver())
    {
        if(battle_thread->getWinner())
        {
            chapter->currentRoom->removeEnemy();
            ui->north->setDisabled(false);
            ui->east->setDisabled(false);
            ui->west->setDisabled(false);
            ui->south->setDisabled(false);
            ui->north->setText("North");
            ui->east->setText("East");
            ui->west->setText("West");
            ui->south->setText("South");
        }
    }
    else
    {
        // clonePlayer=player;
        timerX=new QTimer(this);
        timerY=new QTimer(this);
        ui->specialTime->show();
        connect(timerY,SIGNAL(timeout()),this,SLOT(updateWaitBar()));
        timerY->start(1000);
        countB=0;
        switch(player->getRaceType())
        {
        case SHADOWALKER:
        {
            ability=new QString(" Invisibility.");connect(timerX,SIGNAL(timeout()),this,SLOT(updatePowerTimer()));
            timerX->start(1000);countA=5;ui->timeLeft->setText(QString(QString::fromStdString(to_string(countA)))+" sec(s) Left of "+" Invisibility.");ui->myImg->hide();ui->healthBar->setDisabled(true);battle_thread->fighting=false;invisiblity_dur->start((player->getBoost()*1000)+200);
        }break;
        case MOONMAGE:
        {
            player->setHealth(player->getHealth()+player->getBoost());ui->healthBar->setValue(player->getHealth());
        }break;
        case KNIGHT:
        {
            ability=new QString(" +"+QString::fromStdString(to_string(player->getBoost()))+" Extra Damage.");connect(timerX,SIGNAL(timeout()),this,SLOT(updatePowerTimer()));
            timerX->start(1000);countA=5;ui->timeLeft->setText(QString(QString::fromStdString(to_string(countA)))+" sec(s) Left of "+QString::fromStdString(to_string(player->getBoost()))+" Extra Damage.");player->setAttack(player->getBoost()+player->getAttack());ls->start((6*1000)+200);
        }break;
        case AI:
        {
            currentEnemy->setHealth(currentEnemy->getHealth()-player->getBoost());ui->enemyHealth->setValue(currentEnemy->getHealth());
        };break;
        }
        ui->special->setText("waiting...");
        ui->special->setEnabled(false);
        timer2->start(11500);//3 sec
    }
}

void GameScreen::on_defendBtn_clicked()
{
    defenceFx->play();
    ui->defendBtn->setDisabled(true);
    defTimer->start(800-(player->getSpeed()*2));
    if(battle_thread->fighting)
        battle_thread->isdefend=true;
}

void GameScreen::on_treasure_clicked()
{
    lootFx->play();
    bool exists=0;
    if(weaponTreasure!=nullptr)
    for(Weapon w:inventory->getWeapons())
        if(w.getName()==weaponTreasure->getName()){exists=true;}
    if( weaponTreasure!=nullptr&&!exists){
       inventory->addWeapon(weaponTreasure);
       ui->treasure->hide();
       ui->description->setText("");
       chapter->currentRoom->removeWeapon();
       chapter->currentRoom->removeHp();
       chapter->currentRoom->setImg(chapter->currentRoom->defaultImg);
    }
   else if(inventory->getHp().size()<=6&&healthPotionTreasure!=nullptr)
   {
       inventory->addHp(healthPotionTreasure);
       ui->treasure->hide();
       ui->description->setText("");
       chapter->currentRoom->removeWeapon();
       chapter->currentRoom->removeHp();
       chapter->currentRoom->setImg(chapter->currentRoom->defaultImg);
   }
}

void GameScreen::on_chest_clicked()
{
    lootFx->play();
    ui->treasure->show();
    ui->chest->hide();
    int rand=generateRandomNum(1,5);
    switch(rand)
    {
    case 1:chapter->currentRoom->setDescription(player->getName()+": I shall Avenge my Clan.");break;
    case 2:chapter->currentRoom->setDescription(player->getName()+": my whole clan wiped out just like that.");break;
    case 3:chapter->currentRoom->setDescription(player->getName()+": There's nothing here!.");break;
    case 4:chapter->currentRoom->setDescription(player->getName()+": There's not a lot of time left, i must find a cure and bring an end to all of this.");break;
    case 5:chapter->currentRoom->setDescription(player->getName()+": Why is all this happening...");break;
    default:chapter->currentRoom->setDescription(player->getName()+": This Area Looks oddly Familier.");   }
    weaponTreasure!=nullptr?ui->description->setText("narator: It's a Weapon: "+QString::fromStdString(weaponTreasure->getName())+"\nPick it up"):ui->description->setText("narator: It's a Potion: "+QString::fromStdString(healthPotionTreasure->getName())+"\nPick it up");
}

void GameScreen::on_pushButton_clicked()
{
   // closeEvent(new QCloseEvent());
    ChapterScreen *chapterScreen=new ChapterScreen();
    chapterScreen->inventory=this->inventory;
    chapterScreen->player=this->player;
    chapterScreen->storyline=storyline;
    chapterScreen->show();
    hide();
}

void GameScreen::on_pushButton_4_clicked()
{
    //showMap
    Map *map=new Map(this,c);
    map->show();
    map->setModal(true);
}
