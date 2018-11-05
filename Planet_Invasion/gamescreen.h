#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "chapter2.h"

namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameScreen(QWidget *parent = nullptr);
    ~GameScreen();

private slots:

    void on_north_clicked();

private:
    Ui::GameScreen *ui;
    void updateLabel(const QString text);
    Chapter2 *chapter2;
};

#endif // GAMESCREEN_H
