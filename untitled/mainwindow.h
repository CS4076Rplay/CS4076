#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "chapterscreen.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void handlebutton();

private:
    Ui::MainWindow *ui;
    QPushButton *m_button, *m_button2;
    ChapterScreen *chapter;
};

#endif // MAINWINDOW_H
