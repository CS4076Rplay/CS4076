#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chapterscreen.h"
#include "player.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void setupFiles();

private slots:
    void on_playButton_clicked();

private:
    Ui::MainWindow *ui;
    ChapterScreen *chapter;
    Player *player;
    string intro;
};

#endif // MAINWINDOW_H
