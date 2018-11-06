#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "chapterscreen.h"
#include "chapter2.h"
#include "chapter1.h"
#include <iostream>

GameScreen::GameScreen(const string& chap,QWidget *parent,Story *storyline,Player *player,Inventory *inventory) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{
    ui->setupUi(this);
    this->inventory=inventory;
    this->player=player;
    this->storyline=storyline;
    if(chap == "chapter2")
        chapter = new Chapter2(player,inventory,storyline);
    else if(chap == "chapter1")
        chapter = new Chapter1(player,inventory,storyline);
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::on_north_clicked()
{
    chapter->goRoom("north");
    updateLabel();

}

void GameScreen::on_west_clicked()
{
    chapter->goRoom("west");
    updateLabel();
}

void GameScreen::on_south_clicked()
{
    chapter->goRoom("south");
    updateLabel();
}

void GameScreen::on_east_clicked()
{
    chapter->goRoom("east");
    updateLabel();
}

void GameScreen::updateLabel(){
        ui->label->setText(QString::fromStdString(chapter->getDescription()));
}

void GameScreen::on_pushButton_2_clicked()
{
    //inventory
    for(Weapon w: inventory->getWeapons())
        cout<<"***"<<w.getName()<<endl;
    InventoryUI *inventoryUI=new InventoryUI();
    //inventoryUI->inventory=inventory;
    inventoryUI->setInventory(this->inventory);
    inventoryUI->setModal(true);
    inventoryUI->show();

}
