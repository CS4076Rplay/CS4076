#include "chapter3.h"
#include "fileparser.h"
#include "room.h"

#include <QString>

Chapter3::Chapter3()
{

    createRooms();
}

Chapter3::Chapter3( Player *player, Inventory *inventory, Story *storyline)
{
    this->player=player;
    this->inventory=inventory;
    this->storyline=storyline;
    createRooms();
}

void Chapter3::createRooms()
{

    S_Chapter story=storyline->getChapter(2);
    QString text=QString::fromStdString(story.getChapterStory());

    string chapterStory=story.getChapterStory();
    Story().replace_all(chapterStory,"$name",player->getName());
    map<RACETYPES,string> races;
    races[SHADOWALKER]="SHADOWALKER";
    races[MOONMAGE]="MOONMAGE";
    races[KNIGHT]="KNIGHT";
    races[AI]="AI";

    if(player->getRaceType()==SHADOWALKER)
    {
        Story().replace_all(chapterStory,"Dad","Mom");
        Story().replace_all(chapterStory,"she's","he's");
        Story().replace_all(chapterStory,"mother","father");
        Story().replace_all(chapterStory,"DAD!!!","MOM!!!");
        Story().replace_all(chapterStory," her","him");
        Story().replace_all(chapterStory,"wife","husband");

    }

    Story().replace_all(chapterStory,"$race",races[player->getRaceType()]);

    vector<string> storyParts=FileParser().split(chapterStory,'~');

    map<int,string> storyMap;

    for(unsigned int i=0;i<storyParts.size();i++)
    {
        Story().replace(storyParts[i],"~","");
        storyMap[(int)i]=storyParts[i];
    }

    Enemy *salamander=new Enemy(130,8,7,50,INFERNO,false);
    salamander->setName("Salamader");
    salamander->setDescription("Salamander Doomer");
    salamander->setId("Enemy");
    salamander->setUrl("salamander.png");
    salamander->setSoundUrl("iD3.wav");


    Enemy *dragoid=new Enemy(120,8,5,60,SHADOW,false);
    dragoid->setName("Dragoid");
    dragoid->setDescription("Shadow Doomer minion");
    dragoid->setId("Enemy");
    dragoid->setUrl("m1.png");
    dragoid->setSoundUrl("sD3.wav");


    Enemy *doomage=new Enemy(200,10,10,500,HYBRID,true);
    doomage->setName("Doomage");
    doomage->setDescription("Strongest of all doomers");
    doomage->setId("Enemy");
    doomage->setUrl("doomage.png");


    Weapon *ji=new Weapon(80,100);
    ji->setName("Death Whisperer");
    ji->setDescription("");
    ji->setId("WEAPON");
    ji->setUrl("ji.png");


    Weapon *BattleAxe=new Weapon(100,50);
    BattleAxe->setName("AXe of Helion");
    BattleAxe->setDescription("Forged from the sun");
    BattleAxe->setId("WEAPON");
    BattleAxe->setUrl("BattleAxe.png");


    Weapon *Revolver=new Weapon(70,30);
    Revolver->setName("Revolver");
    Revolver->setDescription("");
    Revolver->setId("WEAPON");
    Revolver->setUrl("Revolver.png");


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

    a = new Room(storyMap[0],"room1.png");
    a->defaultImg="room1.png";
    b = new Room(storyMap[1],"room1.png");
    b->defaultImg="room1.png";
    c = new Room(storyMap[4],salamander->getUrl());
    c->addEnemy(salamander);
    c->addHp(hun);
    c->defaultImg="room1.png";

    d = new Room(storyMap[2],"room0.png");

    e = new Room(storyMap[3],dragoid->getUrl());
    e->addEnemy(dragoid);
    e->addHp(fifty);
    e->defaultImg="room12.png";

    f = new Room(storyMap[5],doomage->getUrl());
    f->addEnemy(doomage);
    f->defaultImg="room2.png";

    //NESW
    a->setExits(b, nullptr, nullptr, nullptr);
    b->setExits(d, c, a, e);
    c->setExits(nullptr, nullptr, nullptr, b );
    d->setExits(f, nullptr, b, nullptr);
    e->setExits(nullptr, b, nullptr, nullptr);
    f->setExits(nullptr,nullptr,nullptr,nullptr);

    currentRoom = a;
}
Room* Chapter3::resetRoom()
{
    return a;
}

