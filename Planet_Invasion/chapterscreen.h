#ifndef CHAPTERSCREEN_H
#define CHAPTERSCREEN_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include "inventoryui.h"
#include "gamescreen.h"

namespace Ui {
class ChapterScreen;
}

class ChapterScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ChapterScreen(QWidget *parent = nullptr);
    ~ChapterScreen();
signals:
    void mainwindow();
private slots:
    void handlebutton1();
    void handlebutton2();
private:
    Ui::ChapterScreen *ui;
    QGridLayout *layout;
    QPushButton *option1, *option2, *option3, *option4;
    InventoryUI *inventory;
    GameScreen *game;
};

#endif // CHAPTERSCREEN_H
