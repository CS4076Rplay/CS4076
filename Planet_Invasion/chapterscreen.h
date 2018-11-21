#ifndef CHAPTERSCREEN_H
#define CHAPTERSCREEN_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include "inventoryui.h"
#include "gamescreen.h"
#include "player.h"
#include "story.h"
namespace Ui {
class ChapterScreen;
}

class ChapterScreen : public QDialog
{
    friend class MainWindow;
    friend class FinalChapter;
    friend class GameScreen;
    Q_OBJECT

public:
    explicit ChapterScreen(QWidget *parent = nullptr);
    ~ChapterScreen();
signals:
    void mainwindow();
private slots:
    void handlebutton(string);

    void on_ch1_clicked();

    void on_ch2_clicked();

    void on_ch3_clicked();

private:
    Ui::ChapterScreen *ui;
    InventoryUI *inventoryUI;
    GameScreen *game;
    Inventory *inventory;
    Story *storyline;
    Player *player;

};

#endif // CHAPTERSCREEN_H
