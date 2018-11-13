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
    Weapon cW;
     Weapon *tempWeapon=new Weapon(50,50);
     tempWeapon->setName("Hammer of Sorrow");
     tempWeapon->setDescription("weapon once held by Zeldon before he lost his entire family");
     tempWeapon->setId("WEAPON");
     tempWeapon->setUrl("Hammer.png");


    inventory->getWeapons().size()>0?cW=inventory->getWeapons()[0]:cW=*tempWeapon;

    GameScreen* newG  = new GameScreen("chapter1", this,storyline,player,inventory,&cW);
    newG -> show();
}
