#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent,const int& chapter) :
    QDialog(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
    if(chapter==1)
    ui->map->setPixmap(QPixmap(":/Map/chapter1.png").scaled(500,500,Qt::KeepAspectRatio));
    else if(chapter==2)
        ui->map->setPixmap(QPixmap(":/Map/chapter2.png").scaled(500,500,Qt::KeepAspectRatio));
    else if(chapter==3)
        ui->map->setPixmap(QPixmap(":/Map/chapter3.png").scaled(500,500,Qt::KeepAspectRatio));

    setWindowTitle(QString::fromStdString("CHAPTER "+chapter));
}

Map::~Map()
{
    delete ui;
}
