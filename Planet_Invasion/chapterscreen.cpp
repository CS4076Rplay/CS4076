#include "chapterscreen.h"
#include "ui_chapterscreen.h"

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

    connect(option1,SIGNAL(clicked()), this, SLOT(handlebutton()));
}

void ChapterScreen::handlebutton(){
    InventoryUI inventory;
    inventory.setModal(true);
    inventory.exec();
}
ChapterScreen::~ChapterScreen()
{
    delete ui;
}
