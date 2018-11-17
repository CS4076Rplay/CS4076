#include "chapterscreen.h"
#include "ui_chapterscreen.h"
#include "gamescreen.h"
#include <iostream>

ChapterScreen::ChapterScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChapterScreen)
{
    ui->setupUi(this);

}

void ChapterScreen::handlebutton(string chapter){
   Weapon cW;
    Weapon *tempWeapon=new Weapon(50,50);
    tempWeapon->setName("Hammer of Sorrow");
    tempWeapon->setDescription("weapon once held by Zeldon before he lost his entire family");
    tempWeapon->setId("WEAPON");
    tempWeapon->setUrl("Hammer.png");


   inventory->getWeapons().size()>0?cW=inventory->getWeapons()[0]:cW=*tempWeapon;

   game  = new GameScreen(chapter, this,storyline,player,inventory,&cW);
   game->show();
    hide();
    /**InventoryUI inventory;
    inventory.setModal(true);
    inventory.exec();**/
}

ChapterScreen::~ChapterScreen()
{
    delete ui;
}

void ChapterScreen::on_ch1_clicked()
{
    handlebutton("chapter1");
}

void ChapterScreen::on_ch2_clicked()
{
    handlebutton("chapter2");
}

void ChapterScreen::on_ch3_clicked()
{
   handlebutton("chapter3");
}
