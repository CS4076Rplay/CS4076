#include "charactercreator.h"
#include "ui_charactercreator.h"
#include "player.h"
#include "fileparser.h"
#include "intro.h"
#include <iostream>


CharacterCreator::CharacterCreator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CharacterCreator)
{

    ui->setupUi(this);
}

CharacterCreator::~CharacterCreator()
{
    delete ui;
}

void CharacterCreator::on_raceSelector_currentTextChanged(const QString &arg1)
{
    QString *img=new QString();
    QString *desc=new QString();
    int health=100;
    int speed=45;
    int strength=45;
    int intel=45;
    int defense=45;


    cout<<arg1.toStdString()<<endl;
    if(arg1=="SHADOWALKER")
    {
        *img="Shadowalker.png";
        *desc="Shadowalker are A Race of Amazonian Warriors Trained in The Art Of Stealth, They Use Thier Speed And Intelligence to capture or Kill their Target, It is said that Shadowalker have a unique skill of Invisibilty when they hold their breath";
        strength+=10;
        speed+=40;
        intel+=20;
        defense+=35;
        ui->char_type->setPixmap(QPixmap(":/Images/Characters/sw_ic.png").scaled(200,200,Qt::KeepAspectRatio));
    }
    else if(arg1=="KNIGHT")
    {
        *img="Knight.png";
        *desc="Knights are Forged from dragon Flames, They have incredible strength and Wear the Toghest Armour. TRained in Combat and extremly skilled";
        strength+=45;
        speed+=10;
        intel+=10;
        defense+=30;
        ui->char_type->setPixmap(QPixmap(":/Images/Characters/k_ic.png").scaled(200,200,Qt::KeepAspectRatio));
    }

    else if(arg1=="MOONMAGE")
    {
        *img="Mage1.png";
        *desc="Moon mages are Wise due to their long life and experience, They Use Dark Magic to destroy their Foes";
        strength+=5;
        speed+=26;
        intel+=40;
        defense+=15;
        ui->char_type->setPixmap(QPixmap(":/Images/Characters/mage_ic.png").scaled(200,200,Qt::KeepAspectRatio));
    }
    else if(arg1=="AI")
    {
        *img="AI.png";
        *desc="AI Made by the people to do one thing and one thing only to Kill anything that stands in their way";
        strength+=30;
        speed+=30;
        intel+=30;
        defense+=20;
        ui->char_type->setPixmap(QPixmap(":/Images/Characters/ai_ic.png").scaled(200,200,Qt::KeepAspectRatio));
    }
    else {
        *img="AI.png";
    }
    QPixmap pix(":/Images/Characters/"+(*img));
    ui->characterImg->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
    ui->charDesc->setText(*desc);
    ui->spdBar->setValue(speed);
    ui->strBar->setValue(strength);
    ui->defBar->setValue(defense);
    ui->intelBar->setValue(intel);

}

void CharacterCreator::on_strSlide_valueChanged(int value)
{


}

void CharacterCreator::on_pushButton_clicked()
{
    //create player
    string uname;
    RACETYPES race;
    String r;
    int health;
    int speed;
    int strength;
    int intel;
    int defense;
    string save;

    uname=(ui->unameSpace->text().toStdString());

    if(ui->raceSelector->currentText()=="SHADOWALKER")
    {
        r="SHADOWALKER";
        race=SHADOWALKER;
    }
    else if(ui->raceSelector->currentText()=="MOONMAGE")
    {
        r="MOONMAGE";
        race=MOONMAGE;
    }
    else if(ui->raceSelector->currentText()=="KNIGHT")
    {
        r="KNIGHT";
        race=KNIGHT;
    }

    else if(ui->raceSelector->currentText()=="AI")
    {
        r="AI";
        race=AI;
    }
    if(uname.empty())uname="Miaximilian";


    health=ui->healthBar->value();
    speed=ui->spdBar->value();
    strength=ui->strBar->value();
    intel=ui->intelBar->value();
    defense=ui->defBar->value();

    save=uname+"\n"+r+"\n"+to_string(health)+"\n"+to_string(strength)+"\n"+to_string(defense)+"\n"+to_string(speed)+"\n"+to_string(intel);

    Player *player=new Player(uname,race,health,speed,strength,intel,defense);
    FileParser *playerFile=new FileParser("E:/qProjects/AlienInvasion/CS4076/Planet_Invasion/player.txt");
    playerFile->saveFile(save);

    hide();
    cout<<"@CS\n"<<uname<<endl;
    Story().replace_all(intro,"$name",uname);
    Story().replace_all(intro,"$race",r);
    Intro *intro=new Intro(this,this->intro,player);
    intro->setInventory(inventory);
    intro->setStoryLine(storyline);
    intro->setIntro(this->intro);
    intro->show();
}
