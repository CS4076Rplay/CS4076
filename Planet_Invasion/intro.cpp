#include "intro.h"
#include "ui_intro.h"
#include <QDebug>
#include "fileparser.h"

bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

bool contains(std::string& str,const std::string& find)
{
    std::vector<string> strAsList=FileParser().split(str,' ');
    for(string s:strAsList)
    {
        if(s==find)return true;
    }
    return false;
}
void replace_all(std::string& str, const std::string& from, const std::string& to)
{
   if(contains(str,from))
      {
        replace(str,from,to);
        replace_all(str,from,to);
      }
}

Intro::Intro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Intro)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/Characters/earth1.jpg");
    ui->introPic->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

    QPixmap pix1(":/Images/Characters/planetx.jpg");
    ui->introimg2->setPixmap(pix1.scaled(300,300,Qt::KeepAspectRatio));
   // printf("@Intrp\n%s",intro);
    intro=FileParser(":/Story/intro.txt").loadFile(true);
  name="Haley";
  race="SHADOWALKER";
  cout<<"$"<<race<<endl;
    replace_all(intro,"$name",name);
    replace_all(intro,"$race",race);

    ui->introlbl->setText(QString::fromStdString(intro));
}

Intro::~Intro()
{
    delete ui;
}
