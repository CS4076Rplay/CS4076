#include "chapter2.h"
#include "fileparser.h"
#include "room.h"

#include <QString>

Chapter2::Chapter2()
{

    createRooms();
}
Chapter2::Chapter2( Player *player, Inventory *inventory, Story *storyline)

{
      this->player=player;
        this->inventory=inventory;
    this->storyline=storyline;
    createRooms();
}
void Chapter2::createRooms(){

    S_Chapter story=storyline->getChapter(1);
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
    Enemy *doomerLvl1=new Enemy(100,4,5,50,SHADOW,false);
    doomerLvl1->setName("lvl1 Shadow Doomer");
    doomerLvl1->setDescription("Weak Shadow Doomer");
    doomerLvl1->setId("Enemy");
    doomerLvl1->setUrl("shadwDoomer.png");
    doomerLvl1->setSoundUrl("iD1.wav");



    Enemy *doomerLvl2=new Enemy(100,3,5,60,SHADOW,false);
    doomerLvl2->setName("lvl2 Shadow Doomer");
    doomerLvl2->setDescription("Shadow Doomer minion");
    doomerLvl2->setId("Enemy");
    doomerLvl2->setUrl("shadwDoomer.png");
    doomerLvl2->setSoundUrl("iD1.wav");


    Enemy *doomerLvl3=new Enemy(100,6,4,60,SHADOW,false);
    doomerLvl3->setName("lvl3 Shadow Doomer");
    doomerLvl3->setDescription("strong Shadow Doomer");
    doomerLvl3->setId("Enemy");
    doomerLvl3->setUrl("shadwDoomer.png");
    doomerLvl3->setSoundUrl("iD2.wav");



    Enemy *doomerLvl4=new Enemy(100,5,8,80,SHADOW,false);
    doomerLvl4->setName("lvl4 Shadow Doomer");
    doomerLvl4->setDescription("powerfull Shadow Doomer");
    doomerLvl4->setId("Enemy");
    doomerLvl4->setUrl("shadwDoomer.png");
    doomerLvl4->setSoundUrl("iD1.wav");


    Enemy *doomerLvl5=new Enemy(100,7,8,120,SHADOW,false);
    doomerLvl5->setName("Morgan's Pet");
    doomerLvl5->setDescription("Morgan's Pet");
    doomerLvl5->setId("Enemy");
    doomerLvl5->setUrl("morgana_Guardian.png");
    doomerLvl5->setSoundUrl("iD1.wav");


    Enemy *morgana=new Enemy(100,9,10,300,SHADOW,true);
    morgana->setName("The Great INFERN");
    morgana->setDescription("Strongest of all doomers");
    morgana->setId("Enemy");
    morgana->setUrl("morgana.png");

    a = new Room(storyMap[0],"");
    b = new Room(storyMap[1],"");
    c = new Room(storyMap[5],"");

    d = new Room(storyMap[2],doomerLvl1->getUrl());
    d->addEnemy(doomerLvl1);
    e = new Room(storyMap[4],"");

    f = new Room(storyMap[3],doomerLvl4->getUrl());
    f->addEnemy(doomerLvl4);
    g = new Room(storyMap[6],"");
    h = new Room(storyMap[7],doomerLvl3->getUrl());
    h->addEnemy(doomerLvl3);
    i = new Room(storyMap[8],doomerLvl5->getUrl());
    i->addEnemy(doomerLvl5);
    j = new Room(storyMap[9],morgana->getUrl());
    j->addEnemy(morgana);
    //NESW
    a->setExits(b, nullptr, nullptr, nullptr);
    b->setExits(d, c, a, nullptr);
    c->setExits(e, g, nullptr, b );
    d->setExits(f, e, b, nullptr);
    e->setExits(nullptr, nullptr, c, d);
    f->setExits(nullptr, nullptr, d, nullptr);
    g->setExits(nullptr, nullptr, h, c);
    h->setExits(g, i, nullptr, nullptr);
    i->setExits(nullptr, j, nullptr, h);

    currentRoom = a;
}
Room* Chapter2::resetRoom(){
   return a;
}

