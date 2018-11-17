#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventoryui.h"
#include "fileparser.h"
#include "charactercreator.h"
#include <QMediaPlaylist>
#include <iostream>
#include "s_chapter.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupFiles();
    soundtrack=new QMediaPlaylist();
    splay=new QMediaPlayer();
    splay->setVolume(100);
    soundtrack->addMedia(QUrl("qrc:/Sounds/st.wav"));
    soundtrack->addMedia(QUrl("qrc:/stm.mp3"));
    soundtrack->setPlaybackMode(QMediaPlaylist::Loop);
    splay->setPlaylist(soundtrack);
    splay->play();
}

void MainWindow::setupFiles()
{

    //loadPlayer
    FileParser *playerfile=new FileParser(":/Story/player.txt");
    vector<String> playerInfo = playerfile->loadFile();//name,class,hp,stk,def,spd,intel
    map<String,RACETYPES> races;
               //SHADOWALKER,MOONMAGE,KNIGHT,AI
               races["SHADOWALKER"]=SHADOWALKER;
               races["MOONMAGE"]=MOONMAGE;
               races["KNIGHT"]=KNIGHT;
               races["AI"]=AI;
    if(playerInfo.size()<=0)
    {
        player=nullptr;
        ui->playButton->setText("NEW GAME");
    }else{
            player=new Player(playerInfo[0],
            races[playerInfo[1]],
            stoi(playerInfo[2]),stoi(playerInfo[3]),
            stoi(playerInfo[4]),stoi(playerInfo[5]),stoi(playerInfo[6]));
    }

    if(player!=nullptr)
    switch(player->getRaceType())
    {
    case SHADOWALKER:{player->setBoost(5);player->setAbility("invisibility");}break;
    case AI:{player->setBoost(60);player->setAbility("Atomic Destruction");}break;
    case KNIGHT:{player->setBoost(25);player->setAbility("Last Stand");}break;
    case MOONMAGE:{player->setBoost(25);player->setAbility("Heal");}break;
    }
    //loadIntro
    FileParser *introFile=new FileParser(":/Story/intro.txt");
    intro=introFile->loadFile(true);
    cout<<intro<<endl;
    //loadStory
    storyline=new Story();
    FileParser *chap1=new FileParser(":/Story/chapter1.txt");
    S_Chapter *chapter1=new S_Chapter();
    chapter1->setChapterStory(chap1->loadFile(true));
    FileParser *chap2=new FileParser(":/Story/chapter2.txt");
    S_Chapter *chapter2=new S_Chapter();
    FileParser *chap3=new FileParser(":/Story/chapter3.txt");
    S_Chapter *chapter3=new S_Chapter();
    chapter2->setChapterStory(chap2->loadFile(true));
    chapter3->setChapterStory(chap3->loadFile(true));
    storyline->addChapter(*chapter1);
    storyline->addChapter(*chapter2);
    storyline->addChapter(*chapter3);
    //loadInventory
    inventory=new Inventory();
   // FileParser *inventoryFile=new FileParser(":Story/inventory.txt",',');//problem loading from file
    vector<vector<string>> inventoryInfo;
    for(int i=0;i<7;i++)
    inventoryInfo.push_back(vector<string>());
    //Knife,Knife1,Knife is weak but it does damage,Knife.png,50,70
    for(unsigned int i=0;i<inventoryInfo.size();i++)
    cout<<i<<endl;
       inventoryInfo[0].push_back("Knife");
    inventoryInfo[1].push_back("WEAPON");
    inventoryInfo[2].push_back("Knife is Weak but it does Damage");
    inventoryInfo[3].push_back("Knife.png");
    inventoryInfo[4].push_back("5");
    inventoryInfo[5].push_back("7");
    inventoryInfo[6].push_back("knife.wav");

    inventoryInfo[0].push_back("Hammer");
 inventoryInfo[1].push_back("WEAPON");
 inventoryInfo[2].push_back("Hammer does Damage");
 inventoryInfo[3].push_back("Hammer.png");
 inventoryInfo[4].push_back("10");
 inventoryInfo[5].push_back("2");
   inventoryInfo[6].push_back("bash.wav");

 inventoryInfo[0].push_back("25HP");
inventoryInfo[1].push_back("HP");
inventoryInfo[2].push_back("Adds 25 more health to your current health");
inventoryInfo[3].push_back("25h.png");
inventoryInfo[4].push_back("25");
inventoryInfo[5].push_back("0");
  inventoryInfo[6].push_back("smallGulp.wav");

inventoryInfo[0].push_back("100HP");
inventoryInfo[1].push_back("HP");
inventoryInfo[2].push_back("Adds 100 more health to your current health");
inventoryInfo[3].push_back("100h.png");
inventoryInfo[4].push_back("100");
inventoryInfo[5].push_back("0");
  inventoryInfo[6].push_back("largeGulp.wav");


    cout<<"fdfg"<<endl;
    for(unsigned int i=0;i<inventoryInfo[0].size();i++)
    {
        Item *item=new Item(inventoryInfo[0][i],inventoryInfo[1][i],inventoryInfo[2][i],inventoryInfo[3][i]);
        inventory->addItem(*item);
        if(inventoryInfo[1][i]=="WEAPON")
        {
            Weapon *weapon=new Weapon(stoi(inventoryInfo[4][i]),stoi(inventoryInfo[5][i]));
            weapon->setName(inventoryInfo[0][i]);
            weapon->setId(inventoryInfo[1][i]);
            weapon->setDescription(inventoryInfo[2][i]);
            weapon->setUrl(inventoryInfo[3][i]);
            weapon->setSoundUrl(inventoryInfo[6][i]);
            inventory->addWeapon(weapon);

        }
        if(inventoryInfo[1][i]=="HP")
        {
            Hp *hp=new Hp(stoi(inventoryInfo[4][i]));
            hp->setName(inventoryInfo[0][i]);
            hp->setId(inventoryInfo[1][i]);
            hp->setDescription(inventoryInfo[2][i]);
            hp->setUrl(inventoryInfo[3][i]);
            hp->setSoundUrl(inventoryInfo[6][i]);
            inventory->addHp(hp);
        }
        for(Weapon w: inventory->getWeapons())
        {
            cout<<w.getName();
        }
    }


}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playButton_clicked()
{

    hide();
    CharacterCreator *newGame=new CharacterCreator(this);
   newGame->intro=this->intro;
   newGame->inventory=this->inventory;
   newGame->storyline=this->storyline;

    if(player==nullptr)
    {
        cout<<"Here"<<endl;
        newGame->show();
        //for testing

    }else
    {
        chapter = new ChapterScreen(this);
        chapter->inventory=this->inventory;
        chapter->storyline=this->storyline;
        chapter->player=this->player;
        chapter -> show();
    }
}
