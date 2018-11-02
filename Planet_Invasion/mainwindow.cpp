#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventoryui.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playButton_clicked()
{
    ui->Title->setText("Loading Game..");
    hide();
    chapter = new ChapterScreen(this);
    chapter -> show();
}
