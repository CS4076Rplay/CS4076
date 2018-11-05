#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "chapterscreen.h"
#include "chapter2.h"
#include "chapter1.h"

GameScreen::GameScreen(const string& chap,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{
    ui->setupUi(this);
    if(chap == "chapter2")
        chapter = new Chapter2();
    else if(chap == "chapter1")
        chapter = new Chapter1();
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
