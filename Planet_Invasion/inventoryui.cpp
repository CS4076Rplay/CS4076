#include "inventoryui.h"
#include "ui_inventoryui.h"
#include <QPixmap>
#include "weapon.h"
#include "fileparser.h"
void setupInventory();
void saveToInventory(Item &item);
void loadInventory();

InventoryUI::InventoryUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryUI)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/Weapons/Knife.png");
    ui->currentItemImg->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

}
void setupInventory()
{

}

InventoryUI::~InventoryUI()
{
    delete ui;
}
