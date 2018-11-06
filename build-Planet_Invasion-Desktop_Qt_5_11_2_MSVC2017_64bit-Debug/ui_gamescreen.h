/********************************************************************************
** Form generated from reading UI file 'gamescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *description;
    QFrame *line;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QPushButton *south;
    QPushButton *north;
    QPushButton *east;
    QPushButton *west;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QStringLiteral("GameScreen"));
        GameScreen->resize(464, 336);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        description = new QLabel(centralwidget);
        description->setObjectName(QStringLiteral("description"));

        horizontalLayout_10->addWidget(description);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(true);
        label->setWordWrap(true);

        horizontalLayout_10->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        south = new QPushButton(centralwidget);
        south->setObjectName(QStringLiteral("south"));

        gridLayout->addWidget(south, 1, 0, 1, 1);

        north = new QPushButton(centralwidget);
        north->setObjectName(QStringLiteral("north"));

        gridLayout->addWidget(north, 0, 0, 1, 1);

        east = new QPushButton(centralwidget);
        east->setObjectName(QStringLiteral("east"));

        gridLayout->addWidget(east, 1, 1, 1, 1);

        west = new QPushButton(centralwidget);
        west->setObjectName(QStringLiteral("west"));

        gridLayout->addWidget(west, 0, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_9->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_9->addWidget(pushButton_7);


        horizontalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_6);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(100);

        verticalLayout->addWidget(progressBar);

        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 464, 26));
        GameScreen->setMenuBar(menubar);
        toolBar = new QToolBar(GameScreen);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GameScreen->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(GameScreen);

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QMainWindow *GameScreen)
    {
        GameScreen->setWindowTitle(QApplication::translate("GameScreen", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("GameScreen", "Inventory", nullptr));
        pushButton->setText(QApplication::translate("GameScreen", "Options", nullptr));
        description->setText(QApplication::translate("GameScreen", "TextLabel", nullptr));
        label->setText(QApplication::translate("GameScreen", "You are in the middle of nowhere", nullptr));
        south->setText(QApplication::translate("GameScreen", "South", nullptr));
        north->setText(QApplication::translate("GameScreen", "North", nullptr));
        east->setText(QApplication::translate("GameScreen", "East", nullptr));
        west->setText(QApplication::translate("GameScreen", "West", nullptr));
        pushButton_8->setText(QApplication::translate("GameScreen", "Attack", nullptr));
        pushButton_7->setText(QApplication::translate("GameScreen", "Defence", nullptr));
        toolBar->setWindowTitle(QApplication::translate("GameScreen", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
