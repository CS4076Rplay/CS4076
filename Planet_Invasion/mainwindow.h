#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chapterscreen.h"
#include "player.h"
#include "story.h"

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
   QMediaPlaylist *soundtrack;
   QMediaPlayer *splay;

private slots:
    void on_playButton_clicked();

    void on_creditsBtn_clicked();

private:
    Ui::MainWindow *ui;
    ChapterScreen *chapter;
    Player *player;
    string intro;
    Inventory *inventory;
    Story *storyline;

};

#endif // MAINWINDOW_H
