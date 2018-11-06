#include "intro.h"
#include "ui_intro.h"
#include <QDebug>
#include "fileparser.h"
#include "gamescreen.h"

Intro::Intro(QWidget *parent,string intro,Player *player) :
    QDialog(parent),
    ui(new Ui::Intro)
{
    this->intro=intro;
    this->player=player;
    ui->setupUi(this);
    QPixmap pix(":/Images/Characters/earth1.jpg");
    ui->introPic->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

    QPixmap pix1(":/Images/Characters/planetx.jpg");
    ui->introimg2->setPixmap(pix1.scaled(300,300,Qt::KeepAspectRatio));
   // printf("@Intrp\n%s",intro);
    //intro=FileParser(":/Story/intro.txt").loadFile(true);
  //name="Haley";
  //race="SHADOWALKER";
  cout<<"$"<<race<<endl;


    ui->introlbl->setText(QString::fromStdString(intro));
}

void Intro::setStoryLine(Story *storyline)
{
    this->storyline=storyline;
}
void Intro::setInventory( Inventory *inventory)
{
    this->inventory=inventory;
}
void Intro::setIntro(const string& intro)
{
    this->intro=intro;
}

Intro::~Intro()
{
    delete ui;
}

void Intro::on_pushButton_clicked()
{
    hide();
   GameScreen *newG =  new GameScreen("chapter1", this,storyline,player,inventory);
    newG -> show();
}
