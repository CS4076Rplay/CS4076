#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chapterscreen.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_button = new QPushButton("Play", this);
    m_button2 = new QPushButton("Chapters", this);

    m_button->setGeometry(QRect(QPoint(100,100), QSize(200, 50)));
    m_button2 -> setGeometry(QRect(QPoint(100, 200),QSize(200, 50)));

    connect(m_button2, SIGNAL(clicked()), this, SLOT(handlebutton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handlebutton(){
    hide();
    chapter = new ChapterScreen(this);
    chapter->show();
}

