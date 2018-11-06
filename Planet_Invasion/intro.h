#ifndef INTRO_H
#define INTRO_H
#include <iostream>
#include <QDialog>
#include "player.h"
#include "story.h"
namespace Ui {
class Intro;
}

class Intro : public QDialog
{
    friend class CharacterCreator;
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = nullptr,std::string intro="",Player *player=nullptr);
    ~Intro();
    void setIntro(const std::string&);
    void setStoryLine( Story*);
    void setInventory( Inventory*);


private slots:
    void on_pushButton_clicked();

private:
    Ui::Intro *ui;
    std::string intro;
    std::string name;
    std::string race;
    Story *storyline;
    Inventory *inventory;
    Player *player;


};

#endif // INTRO_H
