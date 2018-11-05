#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventoryui.h"
#include "fileparser.h"
#include "charactercreator.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupFiles();
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

    //loadIntro
    FileParser *introFile=new FileParser(":/Story/intro.txt");
    intro=introFile->loadFile(true);
    cout<<intro<<endl;
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playButton_clicked()
{
    ui->Title->setText("Loading Game..");
    hide();
    CharacterCreator *newGame=new CharacterCreator(this);
   newGame->intro=this->intro;
    if(player==nullptr)
    {
        cout<<"Here"<<endl;
        newGame->show();
        //for testing

    }else
    {
        chapter = new ChapterScreen(this);
        chapter -> show();
    }
}
