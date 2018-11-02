#include "chapterscreen.h"
#include "ui_chapterscreen.h"
#include "chapter2.h"
#include "gamescreen.h"

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
    hide();
    InventoryUI inventory;
    inventory.setModal(true);
    inventory.exec();
}

void ChapterScreen::handlebutton2(){
    hide();
    chapter = new Chapter2();
    game = new GameScreen(this);
    game->show();
}

ChapterScreen::~ChapterScreen()
{
    delete ui;
}
