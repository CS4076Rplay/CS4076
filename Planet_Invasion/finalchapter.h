#ifndef FINALCHAPTER_H
#define FINALCHAPTER_H

#include "player.h"
#include "story.h"

#include <QDialog>

namespace Ui {
class FinalChapter;
}

class FinalChapter : public QDialog
{
    Q_OBJECT
private:
    Player *player;
    Inventory *inventory;
    Story *storyline;

public:
    explicit FinalChapter(QWidget *parent = nullptr,Player* player=nullptr,Inventory* inventory=nullptr,Story* story=nullptr);
    ~FinalChapter();

private slots:
    void on_mainMenuBtn_clicked();

private:
    Ui::FinalChapter *ui;
};

#endif // FINALCHAPTER_H
