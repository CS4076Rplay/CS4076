#include "charactercreator.h"
#include "ui_charactercreator.h"


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
    int speed=30;
    int strength=30;
    int intel=30;
    int defense=30;

    if(arg1=="SHADOWALKER")
       {
        *img="Shadowalker.png";
        *desc="Shadowalker are A Race of Amazonian Warriors Trained in The Art Of Stealth, They Use Thier Speed And Intelligence to capture or Kill their Target, It is said that Shadowalker have a unique skill of Invisibilty when they hold their breath";
        strength+=10;
        speed+=40;
        intel+=20;
        defense+=35;
    }
    else if(arg1=="KNIGHT")
    {
        *img="Knight.png";
        *desc="Knights are Forged from dragon Flames, They have incredible strength and Wear the Toghest Armour. TRained in Combat and extremly skilled";
        strength+=45;
        speed+=10;
        intel+=10;
        defense+=30;
    }
    else if(arg1=="MOONMAGE")
    {
        *img="Mage1.png";
        *desc="Moon mages are Wise due to their long life and experience, They Use Dark Magic to destroy their Foes";
        strength+=5;
        speed+=26;
        intel+=40;
        defense+=15;
    }
    else if(arg1=="AI")
    {
        *img="AI.png";
        *desc="AI Made by the people to do one thing and one thing only to Kill anything that stands in their way";
        strength+=30;
        speed+=30;
        intel+=30;
        defense+=20;
    }
    else {
        *img="AI.png";
    }
     QPixmap pix(":/Images/Characters/"+(*img));
     ui->characterImg->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
     ui->charDesc->setText(*desc);
     ui->spdSlide->setMinimum(speed);
     ui->strSlide->setMinimum(strength);
     ui->defSlide->setMinimum(defense);
     ui->intelSlide->setMinimum(intel);

}

void CharacterCreator::on_strSlide_valueChanged(int value)
{
    static int points=50;
    int curPoint=50;

    if(value<=points)
    {

        curPoint-=value;
        ui->AntributePointLabel->setText(QString::fromStdString(std::to_string(curPoint)+"/20 Points"));
    }
    else ui->strBar->setEnabled(false);

}
