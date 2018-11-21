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
void InventoryUI::MOUSE_CLICKED(int i)
{
    cout<<"CLicked: "<<i<<endl;
}

void InventoryUI::MOUSE_CLICKED(Hp* h)
{

        cout<<"potion"<<endl;
        QPixmap pix(":/Images/Characters/"+QString::fromStdString(h->getUrl()));
        ui->potionImage->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        ui->potionName->setText(QString::fromStdString(h->getName()));
        ui->potionDesc->setText(QString::fromStdString(h->getDescription()));


}
void InventoryUI::MOUSE_CLICKED(Weapon* w)
{

        cout<<"item"<<endl;
        QPixmap pix(":/Images/Characters/"+QString::fromStdString(w->getUrl()));
        ui->currentItemImg->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
        ui->currentWeaponLabel->setText(QString::fromStdString(w->getName()));
        ui->progressBar->setValue(w->getPower());
        ui->progressBar_2->setValue(w->getSpeed());
        ui->currentItemDesc->setText(QString::fromStdString(w->getDescription()));

}
InventoryUI::InventoryUI(QWidget *parent,Inventory* inventory,GameScreen* currentGame) :
    QDialog(parent),
    ui(new Ui::InventoryUI)
{
    cout<<"I'm openning inventory..."<<endl;
    this->inventory=inventory;
    soundFx=new QMediaPlayer(this);
    soundFx->setVolume(100);
    setWindowTitle("INVENTORY");
    this->currentGame=currentGame;
    currentGame->weapon_thread->setStop(false);
    currentGame->weapon_thread->setItem(nullptr);
    currentGame->weapon_thread->start();
    ui->setupUi(this);
    //loadTemporaryInfo(&weapons);
    setupInventory();
     cout<<"HERE"<<endl;
     ClickableQLabel *label[9];
    for(int i=0;i<9;i++)
       {

            label[i]=new ClickableQLabel(this);
            if(i<6)potion_label[i]=new ClickableQLabel(this);


       }

    cout<<"DONE"<<endl;
    QPixmap pic(":/Images/Characters/"+QString::fromStdString(weapons[0].getUrl()));
    ui->currentItemImg->setPixmap(pic.scaled(100,100,Qt::KeepAspectRatio));
    ui->currentWeaponLabel->setText(QString::fromStdString(weapons[0].getName()));
    ui->progressBar->setValue(weapons[0].getPower());
    ui->progressBar_2->setValue(weapons[0].getSpeed());
    ui->currentItemDesc->setText(QString::fromStdString(weapons[0].getDescription()));

    for(unsigned int i=0;i<weapons.size();i++)
    {

        slotType.push_back("Weapon");
        label[i]->item=&weapons[i];
        QString img=QString::fromStdString(weapons[i].getUrl());
        QPixmap pix(":/Images/Characters/"+img);
        label[i]->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
         connect(label[i],SIGNAL(clicked(Weapon*)),this,SLOT(MOUSE_CLICKED(Weapon*)));

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
    }int i=0;
    for(unsigned int i=0;i<hps.size();i++)
    {

        potions.push_back("HP");
        potion_label[i]->potion=&hps[i];
        QString img=QString::fromStdString(hps[i].getUrl());
        QPixmap pix(":/Images/Characters/"+img);
        potion_label[i]->setPixmap(pix.scaled(80,80,Qt::KeepAspectRatio));
         connect(potion_label[i],SIGNAL(clicked(Hp*)),this,SLOT(MOUSE_CLICKED(Hp*)));

        string s=img.toStdString();
        cout<<i<<":"<<s<<endl;
        switch(i)
        {

            case 0: {
                ui->potion_slot1->addWidget(potion_label[i]);

                ui->drink1->setEnabled(true);
                ui->drink1->setText("USE");

            }break;
            case 1: {
                ui->potion_slot2->addWidget(potion_label[i]);
                ui->drink2->setEnabled(true);
                  ui->drink2->setText("USE");
            }break;
            case 2: {
                ui->potion_slot3->addWidget(potion_label[i]);
                ui->drink3->setEnabled(true);
                  ui->drink3->setText("USE");
            }break;
            case 3: {
                ui->potion_slot4->addWidget(potion_label[i]);
                ui->drink4->setEnabled(true);
                  ui->drink4->setText("USE");
            }break;
            case 4: {
                ui->potion_slot5->addWidget(potion_label[i]);
                ui->drink5->setEnabled(true);
                  ui->drink5->setText("USE");
            }break;
            case 5: {
                ui->potion_slot6->addWidget(potion_label[i]);
                ui->drink6->setEnabled(true);
                  ui->drink6->setText("USE");
            }break;

        default:break;
        }
    }
    cout<<"-------------------------HEALTH POTION--------------------------"<<endl;
    for( int i=5;i>=(int)hps.size();i--)//8//7
    {

        potions.push_back("Empty");
        cout<<i<<endl;

        potion_label[i]->setText("Empty Slot");

        switch(i)
        {
        case 0: {
            ui->potion_slot1->addWidget(potion_label[i]);

            ui->drink1->setEnabled(false);

        }break;
        case 1: {
            ui->potion_slot2->addWidget(potion_label[i]);
            ui->drink2->setEnabled(false);
        }break;
        case 2: {
            ui->potion_slot3->addWidget(potion_label[i]);
            ui->drink3->setEnabled(false);
        }break;
        case 3: {
            ui->potion_slot4->addWidget(potion_label[i]);
            ui->drink4->setEnabled(false);
        }break;
        case 4: {
            ui->potion_slot5->addWidget(potion_label[i]);
            ui->drink5->setEnabled(false);
        }break;
        case 5: {
            ui->potion_slot6->addWidget(potion_label[i]);
            ui->drink6->setEnabled(false);
        }break;

             default:break;
        }
    }
cout<<"-------------------------WEAPONS--------------------------"<<endl;
    for(unsigned int i=8;i>=weapons.size();i--)//8//7
    {
        slotType.push_back("Empty");
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
    cout<<"i'm deleteing"<<endl;
     currentGame->weapon_thread->setStop(true);
    delete ui;
}


void InventoryUI::on_use_s1_clicked()
{
    if(slotType[0]=="Weapon"&&weapons.size()>0)
    {
        currentGame->setCurrentWeapon(&weapons[0]);
          currentGame->weapon_thread->setItem(&weapons[0]);

    }


}

void InventoryUI::on_use_s2_clicked()
{
    if(slotType[1]=="Weapon"&&weapons.size()>1)
    {
        currentGame->setCurrentWeapon(&weapons[1]);
         currentGame->weapon_thread->setItem(&weapons[1]);

    }

}

void InventoryUI::on_use_s3_clicked()
{ cout<<"attempting to remove slot 3"<<endl;
    if(slotType[2]=="Weapon"&&weapons.size()>2)
    {
        currentGame->setCurrentWeapon(&weapons[2]);
         currentGame->weapon_thread->setItem(&weapons[2]);

    }

}

void InventoryUI::on_use_s4_clicked()
{
    if(slotType[3]=="Weapon"&&weapons.size()>3)
    {
        currentGame->setCurrentWeapon(&weapons[3]);
         currentGame->weapon_thread->setItem(&weapons[3]);

    }

}

void InventoryUI::on_use_s5_clicked()
{
    if(slotType[4]=="Weapon"&&weapons.size()>4)
    {
        currentGame->setCurrentWeapon(&weapons[4]);
         currentGame->weapon_thread->setItem(&weapons[4]);

    }
}

void InventoryUI::on_use_s6_clicked()
{
    if(slotType[5]=="Weapon"&&weapons.size()>5)
    {
        currentGame->setCurrentWeapon(&weapons[5]);
         currentGame->weapon_thread->setItem(&weapons[5]);

    }

}

void InventoryUI::on_use_s7_clicked()
{
    if(slotType[6]=="Weapon"&&weapons.size()>6)
    {
        currentGame->setCurrentWeapon(&weapons[6]);
         currentGame->weapon_thread->setItem(&weapons[6]);

    }

}

void InventoryUI::on_use_s8_clicked()
{
    if(slotType[7]=="Weapon"&&weapons.size()>7)
    {
        currentGame->setCurrentWeapon(&weapons[7]);
         currentGame->weapon_thread->setItem(&weapons[7]);

    }

}

void InventoryUI::on_use_s9_clicked()
{
    if(slotType[8]=="Weapon"&&weapons.size()>8)
    {


        currentGame->setCurrentWeapon(&weapons[8]);
         currentGame->weapon_thread->setItem(&weapons[8]);

    }

}
void InventoryUI::closeEvent(QCloseEvent *event)
{
   currentGame->weapon_thread->setStop(true);
    event->accept();
}

void InventoryUI::on_drink1_clicked()
{
    hide();
    soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[0].getSoundUrl())));
    soundFx->play();
    if(potions[0]=="HP"&&hps.size()>0)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[0].getHp()<100)
        {
            cout<<currentGame->player->getHealth()<<endl;


            currentGame->player->setHealth(currentGame->player->getHealth()+hps[0].getHp());
             currentGame->ui_thread->player=currentGame->player;
        }
        else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+0);
        hps.erase(hps.begin()+0);
        potion_label[0]->hide();
        ui->potion_slot1->replaceWidget(potion_label[0],new QLabel("Empty"));

        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }

    }
}

void InventoryUI::on_drink2_clicked()
{   hide();
  soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[1].getSoundUrl())));
  soundFx->play();
  if(potions[1]=="HP"&&hps.size()>1)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[1].getHp()<100)
        {

           // currentGame->player->setHealth(currentGame->player->getHealth()+hps[1].getHp());
            currentGame->ui_thread->health=currentGame->player->getHealth()+hps[1].getHp();
             currentGame->ui_thread->player=currentGame->player;
        }else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+1);
        hps.erase(hps.begin()+1);
        potion_label[1]->hide();
        ui->potion_slot2->replaceWidget(potion_label[1],new QLabel("Empty"));
        potion_label[1]->blockSignals(true);
        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }
    }
}

void InventoryUI::on_drink3_clicked()
{   hide();
      soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[2].getSoundUrl())));
    soundFx->play();
      if(potions[2]=="HP"&&hps.size()>2)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[2].getHp()<100)
        {
           //currentGame->ui_thread->health=currentGame->player->getHealth()+hps[2].getHp();

            currentGame->player->setHealth(currentGame->player->getHealth()+hps[2].getHp());
             currentGame->ui_thread->player=currentGame->player;
        }else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+2);
        hps.erase(hps.begin()+2);
         potion_label[2]->hide();
        ui->potion_slot3->replaceWidget(potion_label[2],new QLabel("Empty"));
        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }

    }
}

void InventoryUI::on_drink4_clicked()
{   hide();
      soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[3].getSoundUrl())));
    soundFx->play();
      if(potions[3]=="HP"&&hps.size()>3)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[3].getHp()<100)
        {
            //currentGame->ui_thread->health=currentGame->player->getHealth()+hps[3].getHp();

            currentGame->player->setHealth(currentGame->player->getHealth()+hps[3].getHp());
             currentGame->ui_thread->player=currentGame->player;
        }else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+3);
        hps.erase(hps.begin()+3);
         potion_label[3]->hide();
        ui->potion_slot4->replaceWidget(potion_label[3],new QLabel("Empty"));
        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }
    }
}

void InventoryUI::on_drink5_clicked()
{   hide();
      soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[4].getSoundUrl())));
    soundFx->play();
      if(potions[4]=="HP"&&hps.size()>4)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[4].getHp()<100)
        {
            //currentGame->ui_thread->health=currentGame->player->getHealth()+hps[4].getHp();

            currentGame->player->setHealth(currentGame->player->getHealth()+hps[4].getHp());
         currentGame->ui_thread->player=currentGame->player;
        }else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+4);
        hps.erase(hps.begin()+4);
         potion_label[4]->hide();
        ui->potion_slot5->replaceWidget(potion_label[4],new QLabel("Empty"));
        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }
    }
}

void InventoryUI::on_drink6_clicked()
{   hide();
      soundFx->setMedia(QUrl("qrc:/Sounds/"+QString::fromStdString(hps[5].getSoundUrl())));
   soundFx->play();
      if(potions[5]=="HP"&&hps.size()>5)
    {
        if(currentGame->player->getHealth()>=100)
        {

        }
        else{
        if(currentGame->player->getHealth()+hps[5].getHp()<100)
        {
            //currentGame->ui_thread->health=currentGame->player->getHealth()+hps[5].getHp();

            currentGame->player->setHealth(currentGame->player->getHealth()+hps[5].getHp());
             currentGame->ui_thread->player=currentGame->player;
        }else{
            currentGame->ui_thread->health=100;
            currentGame->player->setHealth(100);
        }
        potions.erase(potions.begin()+5);
        hps.erase(hps.begin()+5);
         potion_label[5]->hide();
        ui->potion_slot6->replaceWidget(potion_label[5],new QLabel("Empty"));
        inventory->setHps(hps);
        currentGame->inventory=inventory;
        }
    }
}
