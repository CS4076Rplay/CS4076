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
void Chapter1::createRooms(){

    S_Chapter story=storyline->getChapter(0);
    QString text=QString::fromStdString(story.getChapterStory());
    cout<<story.getChapterStory()<<endl;
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
        cout<<storyParts[i]<<endl;
        Story().replace(storyParts[i],"~","");
        storyMap[(int)i]=storyParts[i];
    }

    cout<<"\n\n"<<storyMap[0];
    a = new Room(storyMap[1]);
    b = new Room(storyMap[2]);
    c = new Room(storyMap[3]);
    d = new Room(storyMap[4]);
    e = new Room(storyMap[5]);
    f = new Room(storyMap[6]);
    g = new Room(storyMap[7]);
    h = new Room(storyMap[8]);
    i = new Room(storyMap[9]);
    j = new Room(storyMap[10]);
    k = new Room(storyMap[11]);

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

