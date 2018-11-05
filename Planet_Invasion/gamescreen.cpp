#include "gamescreen.h"
#include "ui_gamescreen.h"
#include "chapterscreen.h"
#include "chapter2.h"

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{
    ui->setupUi(this);
    chapter2 = new Chapter2();
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::on_north_clicked()
{
    chapter2->goRoom("north");
    ui->label->setText(QString::fromStdString(chapter2->getDescription()));
}
