#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include <string>
#include <QMainWindow>
#include "chapter.h"
#include "fileparser.h"
#include "player.h"
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool loadFiles();
    void loadIntro();

private slots:
    void on_pushButton_clicked();
    void on_progress_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    vector<string> intro;
    vector<Chapter> chapters;
    Player player;
};

#endif // MAINWINDOW_H
