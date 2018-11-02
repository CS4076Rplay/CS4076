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
