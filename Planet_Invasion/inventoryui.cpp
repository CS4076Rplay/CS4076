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
    else if(it.getId()=="HP")
    {
        Hp h=(Hp)item;
        hps.push_back(h);
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
    //loadTemporaryInfo(&weapons);
    setupInventory();
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
    vector<vector<string>> inventoryInfo;
    for(int i=0;i<6;i++)
    inventoryInfo.push_back(vector<string>());
    //Knife,Knife1,Knife is weak but it does damage,Knife.png,50,70
    for(unsigned int i=0;i<inventoryInfo.size();i++)
    cout<<i<<endl;
       inventoryInfo[0].push_back("Knife");
    inventoryInfo[1].push_back("WEAPON");
    inventoryInfo[2].push_back("Knife is Weak but it does Damage");
    inventoryInfo[3].push_back("Knife.png");
    inventoryInfo[4].push_back("50");
    inventoryInfo[5].push_back("70");
    cout<<"fdfg"<<endl;
    for(unsigned int i=0;i<inventoryInfo[0].size();i++)
    {
        Item *item=new Item(inventoryInfo[0][i],inventoryInfo[1][i],inventoryInfo[2][i],inventoryInfo[3][i]);
        inventory->addItem(*item);
        if(inventoryInfo[1][i]=="WEAPON")
        {
            Weapon *weapon=new Weapon(stoi(inventoryInfo[4][i]),stoi(inventoryInfo[5][i]));
            weapon->setName(inventoryInfo[0][i]);
            weapon->setId(inventoryInfo[1][i]);
            weapon->setDescription(inventoryInfo[2][i]);
            weapon->setUrl(inventoryInfo[3][i]);
            inventory->addWeapon(weapon);
        }
        if(inventoryInfo[1][i]=="HP")
        {
            Hp *hp=new Hp(stoi(inventoryInfo[4][i]));
            hp->setName(inventoryInfo[0][i]);
            hp->setId(inventoryInfo[1][i]);
            hp->setDescription(inventoryInfo[2][i]);
            hp->setUrl(inventoryInfo[3][i]);
            inventory->addHp(hp);
        }
        for(Weapon w: inventory->getWeapons())
        {
            cout<<w.getName();
        }
    }
    cout<<"setting up inventory"<<endl;
    cout<<inventory->getWeapons().size()<<endl;
   for(Weapon w:inventory->getWeapons())
   {
       cout<<w.getName()<<endl;
       weapons.push_back(w);
   }
   for(Hp h:inventory->getHp())
   {
       hps.push_back(h);
   }

}

void InventoryUI::setInventory(Inventory* inventory)
{
    this->inventory=inventory;
}
InventoryUI::~InventoryUI()
{
    delete ui;
}
