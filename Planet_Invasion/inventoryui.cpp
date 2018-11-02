#include "inventoryui.h"
#include "ui_inventoryui.h"
#include <QPixmap>
#include "fileparser.h"
#include <iostream>
#include "clickableqlabel.h"
void setupInventory();
void loadInventory();
template <typename T>
void loadTemporaryInfo(vector<T> *items)
{

    Weapon *w=new Weapon(50,80); cout<<"TEMPLATE"<<endl;
    w->setName("Knife");
    w->setDescription("Not So powerfull but very fast");
    w->setUrl("Knife.png");
    w->setId("WEAPON");


    Weapon *w1=new Weapon(85,30);
    w1->setName("Hammer");
    w1->setDescription("So powerfull but very slow");
    w1->setUrl("Hammer.png");
    w1->setId("WEAPON");

    Weapon *w2=new Weapon(90,70);
    w2->setName("MachineGun");
    w2->setDescription("Master of speed and power");
    w2->setUrl("MachineGun.png");
    w2->setId("WEAPON");


    cout<<w->toString()<<endl;


    items->push_back(*w);
    items->push_back(*w1);
    items->push_back(*w2);


}
template<typename T>
void InventoryUI::saveToInventory(T& item)
{
    Item it=(Item)item;
    if(it.getId()=="WEAPON")
    {
        Weapon w=(Weapon)item;
        weapons.push_back(w);
    }
    else if(it.getId()=="KEY")
    {
        KeyItem k=(KeyItem)item;
        keys.push_back(k);
    }
}
void InventoryUI::MOUSE_CLICKED()
{
    cout<<"item"<<endl;

}
void InventoryUI::MOUSE_CLICKED(Item& item)
{
    cout<<"item"<<endl;
    QString img=QString::fromStdString(item.getName());
   ui->currentItemImg->setText(img);
}
InventoryUI::InventoryUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryUI)
{
    ui->setupUi(this);

    loadTemporaryInfo(&weapons);
     cout<<"HERE"<<endl;
    ClickableQLabel *label[9];
    for(int i=0;i<9;i++)
       {
            cout<<i<<endl;
            label[i]=new ClickableQLabel(this);
       }
    cout<<"DONE"<<endl;
    for(unsigned int i=0;i<weapons.size();i++)
    {
        QString img=QString::fromStdString(weapons[i].getUrl());
        QPixmap pix(":/Images/Weapons/"+img);
        label[i]->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
         connect(label[i],SIGNAL(clicked(weapons[i])),this,SLOT(MOUSE_CLICKED(weapons[i])));

        string s=img.toStdString();
        cout<<i<<":"<<s<<endl;
        switch(i)
        {
            case 0: {
                ui->slot1->addWidget(label[i]);

                ui->use_s1->setEnabled(true);
            }break;
            case 1: {
                ui->slot2->addWidget(label[i]);
                ui->use_s2->setEnabled(true);
            }break;
            case 2: {
                ui->slot3->addWidget(label[i]);
                ui->use_s3->setEnabled(true);
            }break;
            case 3: {
                ui->slot4->addWidget(label[i]);
                ui->use_s4->setEnabled(true);
            }break;
            case 4: {
                ui->slot5->addWidget(label[i]);
                ui->use_s5->setEnabled(true);
            }break;
            case 5: {
                ui->slot6->addWidget(label[i]);
                ui->use_s6->setEnabled(true);
            }break;
            case 6: {
                ui->slot7->addWidget(label[i]);
                ui->use_s7->setEnabled(true);
            }break;
            case 7: {
                ui->slot8->addWidget(label[i]);
                ui->use_s8->setEnabled(true);
            }break;
            case 8: {
                ui->slot9->addWidget(label[i]);
                ui->use_s9->setEnabled(true);
            }break;
        default:break;
        }
    }

    for(unsigned int i=8;i>=weapons.size();i--)//8//7
    {
        cout<<i<<endl;

        label[i]->setText("Empty Slot");

        switch(i)
        {
            case 0: {
                ui->slot1->addWidget(label[i]);
                ui->use_s1->setEnabled(false);
            }break;
            case 1: {
                ui->slot2->addWidget(label[i]);
                ui->use_s2->setEnabled(false);
            }break;
            case 2: {
                ui->slot3->addWidget(label[i]);
                ui->use_s3->setEnabled(false);
            }break;
            case 3: {
                ui->slot4->addWidget(label[i]);
                ui->use_s4->setEnabled(false);
            }break;
            case 4: {
                ui->slot5->addWidget(label[i]);
                ui->use_s5->setEnabled(false);
            }break;
            case 5: {
                ui->slot6->addWidget(label[i]);
                ui->use_s6->setEnabled(false);
            }break;
            case 6: {
                ui->slot7->addWidget(label[i]);
                ui->use_s7->setEnabled(false);
            }break;
            case 7: {
                ui->slot8->addWidget(label[i]);
                ui->use_s8->setEnabled(false);
            }break;
            case 8: {
                ui->slot9->addWidget(label[i]);
                ui->use_s9->setEnabled(false);
            }break;
        default:break;
        }
    }

    QPixmap pix(":/Images/Weapons/Hammer.png");
    ui->currentItemImg->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
  // setupInventory();
}

void InventoryUI::setupInventory()
{

    FileParser *inventoryfile =new FileParser("E:/qProjects/AlienInvasion/CS4076/Planet_Invasion/inventory.txt",',');
    vector<vector<string>> inventoryElements= inventoryfile->loadFile(6);//name,id,desc,url,power,speed
    for(unsigned int i=0;i<inventoryElements.size();i++)
    {

            if(inventoryElements[i][1]=="WEAPON")
            {
                Weapon w(stoi(inventoryElements[i][4]),stoi(inventoryElements[i][5]));
                w.setName(inventoryElements[i][0]);
                w.setId(inventoryElements[i][1]);
                w.setDescription(inventoryElements[i][2]);
                w.setUrl(":Images/"+inventoryElements[i][3]);

               weapons.push_back(w);
            }
            else  if(inventoryElements[i][1]=="KEY")
            {
                KeyItem k(inventoryElements[i][4]);
                k.setName(inventoryElements[i][0]);
                k.setId(inventoryElements[i][1]);
                k.setDescription(inventoryElements[i][2]);
                k.setUrl(":Images/"+inventoryElements[i][3]);

               keys.push_back(k);
            }


    }
    for(Weapon w:weapons)
    {
        cout<<w.toString()<<endl;
    }
}


InventoryUI::~InventoryUI()
{
    delete ui;
}
