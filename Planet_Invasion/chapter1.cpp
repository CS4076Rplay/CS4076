#include "chapter1.h"
#include <QDebug>
#include <iostream>
#include "fileparser.h"
using namespace std;
Chapter1::Chapter1()
{

    createRooms();
}

Chapter1::Chapter1( Player *player, Inventory *inventory, Story *storyline)
{
    this->player=player;
    this->inventory=inventory;
    this->storyline=storyline;
    createRooms();
}

void Chapter1::createRooms()
{

    S_Chapter story=storyline->getChapter(0);
    QString text=QString::fromStdString(story.getChapterStory());

    string chapterStory=story.getChapterStory();
    Story().replace_all(chapterStory,"$name",player->getName());
    map<RACETYPES,string> races;
    races[SHADOWALKER]="SHADOWALKER";
    races[MOONMAGE]="MOONMAGE";
    races[KNIGHT]="KNIGHT";
    races[AI]="AI";

    Story().replace_all(chapterStory,"$race",races[player->getRaceType()]);

    vector<string> storyParts=FileParser().split(chapterStory,'~');

    map<int,string> storyMap;
    for(unsigned int i=0;i<storyParts.size();i++)
    {

        Story().replace(storyParts[i],"~","");
        storyMap[(int)i]=storyParts[i];
    }

    //create chapter Enemies here
    Enemy *i_doomerLvl1=new Enemy(100,2,5,30,INFERNO,false);
    i_doomerLvl1->setName("lvl1 Inferno Doomer");
    i_doomerLvl1->setDescription("Weak inferno Doomer");
    i_doomerLvl1->setId("Enemy");
    i_doomerLvl1->setUrl("i_doomer.png");
    i_doomerLvl1->setSoundUrl("iD1.wav");



    Enemy *doomerLvl2=new Enemy(100,3,5,50,SHADOW,false);
    doomerLvl2->setName("lvl2 Shadow Doomer");
    doomerLvl2->setDescription("Shadow Doomer minion");
    doomerLvl2->setId("Enemy");
    doomerLvl2->setUrl("i_doomer.png");
    doomerLvl2->setSoundUrl("iD1.wav");


    Enemy *doomerLvl3=new Enemy(100,5,4,50,INFERNO,false);
    doomerLvl3->setName("lvl3 Inferno Doomer");
    doomerLvl3->setDescription("strong inferno Doomer");
    doomerLvl3->setId("Enemy");
    doomerLvl3->setUrl("i_doomer.png");
    doomerLvl3->setSoundUrl("iD2.wav");



    Enemy *doomerLvl4=new Enemy(100,6,4,60,INFERNO,false);
    doomerLvl4->setName("lvl4 Inferno Doomer");
    doomerLvl4->setDescription("powerfull inferno Doomer");
    doomerLvl4->setId("Enemy");
    doomerLvl4->setUrl("i_doomer.png");
    doomerLvl4->setSoundUrl("iD1.wav");


    Enemy *doomerLvl5=new Enemy(100,7,5,60,INFERNO,false);
    doomerLvl5->setName("lvl5 Inferno Doomer(The Gaurdian)");
    doomerLvl5->setDescription("BodyGuard to the BOSS INFERN");
    doomerLvl5->setId("Enemy");
    doomerLvl5->setUrl("_infern_guardian.png");
    doomerLvl5->setSoundUrl("iD1.wav");


    Enemy *infern=new Enemy(100,8,10,88,SHADOW,true);
    infern->setName("The Great INFERN");
    infern->setDescription("Strongest of all doomers");
    infern->setId("Enemy");
    infern->setUrl("_infern.png");

    Weapon *nunchucks=new Weapon(4,60);
    nunchucks->setName("Nunchucks of Pain");
    nunchucks->setDescription("");
    nunchucks->setId("WEAPON");
    nunchucks->setUrl("Nunchuks.png");
    nunchucks->setSoundUrl("nchucks.wav");


    Weapon *m_gun=new Weapon(5,90);
    m_gun->setName("Mx380");
    m_gun->setDescription("");
    m_gun->setId("WEAPON");
    m_gun->setUrl("MachineGun.png");
    m_gun->setSoundUrl("mgun.wav");

    Weapon *sol=new Weapon(12,50);
    sol->setName("Sword of light");
    sol->setDescription("");
    sol->setId("WEAPON");
    sol->setUrl("Sword.png");
    sol->setSoundUrl("Sword.mp3");

    Weapon *BattleAxe=new Weapon(7,5);
    BattleAxe->setName("AXe of Helion");
    BattleAxe->setDescription("Forged from the sun");
    BattleAxe->setId("WEAPON");
    BattleAxe->setUrl("BattleAxe.png");

    Weapon *Revolver=new Weapon(6,20);
    Revolver->setName("Revolver");
    Revolver->setDescription("");
    Revolver->setId("WEAPON");
    Revolver->setUrl("Revolver.png");
    Revolver->setSoundUrl("sgun.wav");

    Weapon *Flail=new Weapon(4,60);
    Flail->setName("Flail");
    Flail->setDescription("");
    Flail->setId("WEAPON");
    Flail->setUrl("Flail.png");
    Flail->setSoundUrl("nchucks.wav");

    Hp *fifty=new Hp(50);
    fifty->setName("50 Hp");
    fifty->setDescription("Adds 50 Hp");
    fifty->setId("HP");
    fifty->setUrl("50h.png");

    Hp *twentyfive=new Hp(25);
    twentyfive->setName("25 Hp");
    twentyfive->setDescription("Adds 25 Hp");
    twentyfive->setId("HP");
    twentyfive->setUrl("25h.png");


    Hp *hun=new Hp(100);
    hun->setName("100 Hp");
    hun->setDescription("Adds 100 Hp");
    hun->setId("HP");
    hun->setUrl("100h.png");






    a = new Room(storyMap[1],"room0.png");

    b = new Room(storyMap[2],i_doomerLvl1->getUrl());
    b->addEnemy(i_doomerLvl1);
    b->defaultImg="room12.png";

    c = new Room(storyMap[3],"room12.png");

    c->addWeapon(m_gun);
    c->defaultImg="room12.png";


    d = new Room(storyMap[4],doomerLvl2->getUrl());
    d->addEnemy(doomerLvl2);
    d->addHp(fifty);
    d->defaultImg="room12.png";


    e = new Room(storyMap[5],"room12.png");
    e->addWeapon(Flail);
    e->defaultImg="room12.png";

    f = new Room(storyMap[6],doomerLvl3->getUrl());
    f->addEnemy(doomerLvl3);
    f->defaultImg="room12.png";

    g = new Room(storyMap[7],"room12.png");
    g->defaultImg="room12.png";


    h = new Room(storyMap[8],doomerLvl4->getUrl());
    h->addEnemy(doomerLvl4);
    h->addHp(hun);
    h->defaultImg="room12.png";

    i = new Room(storyMap[9],"room12.png");
    i->addWeapon(nunchucks);
    i->defaultImg="room12.png";

    j = new Room(storyMap[10],doomerLvl5->getUrl());
    j->addEnemy(doomerLvl5);
    j->defaultImg="room12.png";

    k = new Room(storyMap[11],infern->getUrl());
    k->addEnemy(infern);
    k->addWeapon(sol);
    k->defaultImg="room2.png";


    a->setExits(f, e, b, g);
    b->setExits(a, d, nullptr, c);
    c->setExits(g, b, nullptr, nullptr );
    d->setExits(e, nullptr, nullptr, b);
    e->setExits(nullptr, nullptr,d, a);
    f->setExits(i, nullptr, a, nullptr);
    g->setExits(nullptr, a, c, h);
    h->setExits(nullptr, g, nullptr, nullptr);
    i->setExits(nullptr, j, f, nullptr);
    j->setExits(nullptr, k, nullptr, i);
    currentRoom = a;
}

Room* Chapter1::resetRoom()
{
    return a;
}


