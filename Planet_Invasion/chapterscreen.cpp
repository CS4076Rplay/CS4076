#include "chapterscreen.h"
#include "ui_chapterscreen.h"
#include "gamescreen.h"
#include <iostream>

ChapterScreen::ChapterScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChapterScreen)
{
    ui->setupUi(this);
    layout = new QGridLayout();
    setLayout(layout);

    option1 = new QPushButton("Chapter1", this);
    option2 = new QPushButton("chapter2", this);
    option3 = new QPushButton("chapter3", this);
    option4 = new QPushButton("chapter4", this);

    layout->addWidget(option1,0,0);
    layout->addWidget(option2,0,1);
    layout->addWidget(option3,1,0);
    layout->addWidget(option4,1,1);

    connect(option1,SIGNAL(clicked()), this, SLOT(handlebutton1()));
    connect(option2,SIGNAL(clicked()), this, SLOT(handlebutton2()));
}

void ChapterScreen::handlebutton1(){
   Weapon cW;
    Weapon *tempWeapon=new Weapon(50,50);
    tempWeapon->setName("Hammer of Sorrow");
    tempWeapon->setDescription("weapon once held by Zeldon before he lost his entire family");
    tempWeapon->setId("WEAPON");
    tempWeapon->setUrl("Hammer.png");


   inventory->getWeapons().size()>0?cW=inventory->getWeapons()[0]:cW=*tempWeapon;

   game  = new GameScreen("chapter1", this,storyline,player,inventory,&cW);
   game->show();
    hide();
    /**InventoryUI inventory;
    inventory.setModal(true);
    inventory.exec();**/
}

void ChapterScreen::handlebutton2(){
    Weapon cW;
     Weapon *tempWeapon=new Weapon(50,50);
     tempWeapon->setName("Hammer of Sorrow");
     tempWeapon->setDescription("weapon once held by Zeldon before he lost his entire family");
     tempWeapon->setId("WEAPON");
     tempWeapon->setUrl("Hammer.png");


    inventory->getWeapons().size()>0?cW=inventory->getWeapons()[0]:cW=*tempWeapon;

    game  = new GameScreen("chapter2", this,storyline,player,inventory,&cW);
    game->show();

   hide();
}

ChapterScreen::~ChapterScreen()
{
    delete ui;
}
