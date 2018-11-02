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
    //loadPlayer
    FileParser *playerfile=new FileParser(":/Story/player.txt");
    vector<String> playerInfo = playerfile->loadFile();//name,class,hp,stk,def,spd,intel
    map<String,RACETYPES> races;
               //SHADOWALKER,MOONMAGE,BRUTE,AI
               races["SHADOWALKER"]=SHADOWALKER;
               races["MOONMAGE"]=MOONMAGE;
               races["BRUTE"]=BRUTE;
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
    if(player==nullptr)
    {
        cout<<"Here"<<endl;
        newGame->show();
        //for testing
        chapter = new ChapterScreen(this);
        chapter -> show();
    }else
    {
        chapter = new ChapterScreen(this);
        chapter -> show();
    }
}
