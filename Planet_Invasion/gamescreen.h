#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "chapter2.h"
#include "player.h"
#include "story.h"
namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameScreen(const string& chap, QWidget *parent = nullptr,Story *storyline=nullptr,Player *player=nullptr, Inventory *inventory=nullptr);
    ~GameScreen();

private slots:

    void on_north_clicked();

    void on_west_clicked();

    void on_south_clicked();

    void on_east_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GameScreen *ui;
    void updateLabel();
    Chapter *chapter;
    Story *storyline;
    Player *player;
    Inventory *inventory;
};

#endif // GAMESCREEN_H
