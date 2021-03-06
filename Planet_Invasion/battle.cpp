#include "battle.h"
#include <iostream>

Battle::Battle(QObject *parent,Player* player,Inventory* inventory):
    QThread(parent)
{
    this->player=player;

    this->inventory=inventory;
    soundFx=new QMediaPlayer(this);
    soundFx->setVolume(100);
    soundFx2=new QMediaPlayer(this);
    soundFx2->setVolume(100);
    defSoundFx=new QMediaPlayer(this);
    defSoundFx->setVolume(120);
    randomNum=QRandomGenerator(1);



}
Battle::Battle()
{

}
void Battle::run()
{
    // cout<<"run"<<endl;
    while(fighting&&!isBattleOver()&&player!=nullptr)
    {
        cout<<generateRandomNum(100,104)<<endl;
        cout<<"fighting"<<endl;
        if(player!=nullptr){
            // cout<<"Die!!!"<<endl;

            if(!isdefend)
            {
                int defencePower=0;
                int attackPower=enemy->getStrength();
                // cout<<"atk: "<<attackPower<<endl;
                enemy->isBoss() && enemy->getDoomer()==INFERNO ? attackPower+=4:attackPower+=2;
                enemy->isBoss() && enemy->getDoomer()==SHADOW ? attackPower+=2:attackPower+=1;
                attackPower=generateRandomNum(1,attackPower);
                damage="+"+to_string(attackPower);
                if(!isBattleOver())
                {
                    soundFx->play();
                    player->setHealth(player->getHealth()-(attackPower-defencePower));
                    soundFx2->play();
                    emit attackResult(player);
                }
                else
                {
                    //display you are dead
                    emit attackResult(player);
                }
            }
            else
            {
                defend();
                defSoundFx->play();
                emit attackResult(player);

            }
        }else{damage="";}
        msleep(attackSpeed);

    }
}
Battle::Battle(Player* player,Enemy* enemy,Item* reward,Inventory* inventory)
{
    this->player=player;
    this->enemy=enemy;
    this->reward=reward;
    this->inventory=inventory;
    cout<<"Rand: "<<generateRandomNum(1,5);

}
void Battle::setReward(Item* reward)
{
    this->reward=reward;
}
void Battle::setInventory(Inventory* inventory)
{
    this->inventory=inventory;
}

int Battle::generateRandomNum(const int& min,const int& max)
{
    static bool first=true;
    if(first)
    {
        srand(time(NULL));
        first=false;
    }
    int r=min+rand()%((max-min)+1);
    cout<<r<<endl;
    return r;
}
void Battle::setEnemy(Enemy* enemy)
{
    this->enemy=enemy;
    if(enemy!=nullptr){

        int rand=generateRandomNum(1,4);

        if(enemy->getDoomer()==INFERNO)
            switch(rand)
            {
            case 1:soundFx->setMedia(QUrl("qrc:/Sounds/iD1.wav"));break;
            case 2:soundFx->setMedia(QUrl("qrc:/Sounds/iD2.wav"));break;
            case 3:soundFx->setMedia(QUrl("qrc:/Sounds/iD3.wav"));break;
            default:soundFx->setMedia(QUrl("qrc:/Sounds/iD4.wav"));break;

            }
        else{
            switch(rand)
            {
            case 1:soundFx->setMedia(QUrl("qrc:/Sounds/sD.wav"));break;
            default:soundFx->setMedia(QUrl("qrc:/Sounds/sD3.wav"));break;


            }
        }
    }defSoundFx->setMedia(QUrl("qrc:/Sounds/blocked.wav"));
    if(player!=nullptr)
        switch(player->getRaceType())
        {
        case SHADOWALKER:soundFx2->setMedia(QUrl("qrc:/Sounds/sw_hurt.wav"));break;
        case AI:soundFx2->setMedia(QUrl("qrc:/Sounds/ai_hurt.wav"));break;
        default:soundFx2->setMedia(QUrl("qrc:/Sounds/m_hurt.wav"));break;

        }
}
void Battle::setItem(Item* item)
{
    this->reward=item;
}

bool Battle::getWinner()
{
    if(player->getHealth()>enemy->getHealth())
        return true;
    else return false;
}
bool Battle::isBattleOver()
{
    // cout<<player->getHealth()<<endl;
    if(player->getHealth()<=0||enemy->getHealth()<=0)
    {cout<<"Battle is over"<<endl;
        return true;
    }
    return false;
}
void Battle::attack()
{ cout<<"Power: "<<player->getAttack()<<endl;
    int attackPower=(player->getAttack()/10)+((player->getintelligence()/10)/3);
    cout<<"Attack: "<<attackPower<<endl;

    int defencePower=enemy->getHealth()+enemy->getDefence();
    cout<<"Def: "<<defencePower<<endl;
    enemy->isBoss() && enemy->getDoomer()==INFERNO ? defencePower+=12:defencePower+=1;
    enemy->isBoss() && enemy->getDoomer()==SHADOW ? defencePower+=20:defencePower+=2;
    if(defencePower>enemy->getHealth()+attackPower)
        defencePower=enemy->getHealth()+attackPower-1;

    if(!isBattleOver())
    {
        //
        cout<<"Between: "<<enemy->getHealth()<<" or "<<enemy->getHealth()+enemy->getDefence()<<endl;
        defencePower=generateRandomNum(enemy->getHealth(),enemy->getHealth()+enemy->getDefence());
        cout<<"Def: "<<defencePower<<endl;
        enemy->setHealth((defencePower-attackPower));
        cout<<enemy->getHealth();
    }
    else
    {
        //display you are dead
    }
}
void Battle::defend()
{
    cout<<"defence: "<<player->getDefence();
    int defencePower=(player->getDefence()+((player->getintelligence()/10)/3))/10;
    cout<<"defenceP: "<<defencePower<<endl;
    int attackPower=enemy->getStrength();
    cout<<"E: AtkPower: "<<attackPower<<endl;

    // cout<<"atk: "<<attackPower<<endl;
    enemy->isBoss() && enemy->getDoomer()==INFERNO ? attackPower+=4:attackPower+=2;
    enemy->isBoss() && enemy->getDoomer()==SHADOW ? attackPower+=2:attackPower+=1;
    damage="+"+to_string(attackPower);
    if(!isBattleOver())
    {
        soundFx->play();
        player->setHealth(player->getHealth()-(attackPower-defencePower));


    }
    else
    {
        //display you are dead
    }
    isdefend=false;
}
