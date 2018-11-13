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
#include <QtGui/QIcon>
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *currentWeaponImg;
    QVBoxLayout *verticalLayout_3;
    QLabel *currentWeaponName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QProgressBar *currentWeaponPower;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QProgressBar *currentWeaponSpeed;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *enemyName;
    QProgressBar *enemyHealth;
    QPushButton *treasure;
    QPushButton *chest;
    QLabel *description;
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *north;
    QPushButton *south;
    QPushButton *east;
    QPushButton *west;
    QVBoxLayout *verticalLayout_7;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *attackBtn;
    QPushButton *defendBtn;
    QProgressBar *specialTime;
    QPushButton *special;
    QLabel *timeLeft;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *myName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *myImg;
    QProgressBar *healthBar;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QStringLiteral("GameScreen"));
        GameScreen->resize(585, 458);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        currentWeaponImg = new QLabel(centralwidget);
        currentWeaponImg->setObjectName(QStringLiteral("currentWeaponImg"));

        horizontalLayout_3->addWidget(currentWeaponImg);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        currentWeaponName = new QLabel(centralwidget);
        currentWeaponName->setObjectName(QStringLiteral("currentWeaponName"));

        verticalLayout_3->addWidget(currentWeaponName);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        currentWeaponPower = new QProgressBar(centralwidget);
        currentWeaponPower->setObjectName(QStringLiteral("currentWeaponPower"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentWeaponPower->sizePolicy().hasHeightForWidth());
        currentWeaponPower->setSizePolicy(sizePolicy);
        currentWeaponPower->setMaximum(10);
        currentWeaponPower->setValue(2);

        horizontalLayout_5->addWidget(currentWeaponPower);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        currentWeaponSpeed = new QProgressBar(centralwidget);
        currentWeaponSpeed->setObjectName(QStringLiteral("currentWeaponSpeed"));
        sizePolicy.setHeightForWidth(currentWeaponSpeed->sizePolicy().hasHeightForWidth());
        currentWeaponSpeed->setSizePolicy(sizePolicy);
        currentWeaponSpeed->setMaximum(10);
        currentWeaponSpeed->setValue(4);

        horizontalLayout_7->addWidget(currentWeaponSpeed);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_3->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        enemyName = new QLabel(centralwidget);
        enemyName->setObjectName(QStringLiteral("enemyName"));
        enemyName->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(enemyName);

        enemyHealth = new QProgressBar(centralwidget);
        enemyHealth->setObjectName(QStringLiteral("enemyHealth"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enemyHealth->sizePolicy().hasHeightForWidth());
        enemyHealth->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 213, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 191, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 85, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 113, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(127, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        enemyHealth->setPalette(palette);
        enemyHealth->setValue(10);

        verticalLayout_6->addWidget(enemyHealth);


        verticalLayout_4->addLayout(verticalLayout_6);

        treasure = new QPushButton(centralwidget);
        treasure->setObjectName(QStringLiteral("treasure"));
        sizePolicy.setHeightForWidth(treasure->sizePolicy().hasHeightForWidth());
        treasure->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Characters/Ji.png"), QSize(), QIcon::Normal, QIcon::Off);
        treasure->setIcon(icon);
        treasure->setFlat(true);

        verticalLayout_4->addWidget(treasure);

        chest = new QPushButton(centralwidget);
        chest->setObjectName(QStringLiteral("chest"));
        chest->setEnabled(true);
        sizePolicy.setHeightForWidth(chest->sizePolicy().hasHeightForWidth());
        chest->setSizePolicy(sizePolicy);
        chest->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Characters/treasure.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        chest->setIcon(icon1);
        chest->setFlat(true);

        verticalLayout_4->addWidget(chest);

        description = new QLabel(centralwidget);
        description->setObjectName(QStringLiteral("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setWordWrap(false);

        verticalLayout_4->addWidget(description);


        horizontalLayout_10->addLayout(verticalLayout_4);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setScaledContents(true);
        label->setWordWrap(true);

        horizontalLayout_10->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_10);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setFlat(false);

        gridLayout->addWidget(pushButton_3, 2, 4, 1, 1);

        north = new QPushButton(centralwidget);
        north->setObjectName(QStringLiteral("north"));

        gridLayout->addWidget(north, 0, 4, 1, 1);

        south = new QPushButton(centralwidget);
        south->setObjectName(QStringLiteral("south"));

        gridLayout->addWidget(south, 3, 4, 1, 1);

        east = new QPushButton(centralwidget);
        east->setObjectName(QStringLiteral("east"));

        gridLayout->addWidget(east, 2, 5, 1, 1);

        west = new QPushButton(centralwidget);
        west->setObjectName(QStringLiteral("west"));

        gridLayout->addWidget(west, 2, 3, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        attackBtn = new QPushButton(centralwidget);
        attackBtn->setObjectName(QStringLiteral("attackBtn"));

        horizontalLayout_8->addWidget(attackBtn);

        defendBtn = new QPushButton(centralwidget);
        defendBtn->setObjectName(QStringLiteral("defendBtn"));

        horizontalLayout_8->addWidget(defendBtn);


        verticalLayout_7->addLayout(horizontalLayout_8);

        specialTime = new QProgressBar(centralwidget);
        specialTime->setObjectName(QStringLiteral("specialTime"));
        sizePolicy.setHeightForWidth(specialTime->sizePolicy().hasHeightForWidth());
        specialTime->setSizePolicy(sizePolicy);
        specialTime->setValue(0);
        specialTime->setTextVisible(false);

        verticalLayout_7->addWidget(specialTime);

        special = new QPushButton(centralwidget);
        special->setObjectName(QStringLiteral("special"));
        sizePolicy1.setHeightForWidth(special->sizePolicy().hasHeightForWidth());
        special->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(special);

        timeLeft = new QLabel(centralwidget);
        timeLeft->setObjectName(QStringLiteral("timeLeft"));

        verticalLayout_7->addWidget(timeLeft);


        horizontalLayout_6->addLayout(verticalLayout_7);


        verticalLayout->addLayout(horizontalLayout_6);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        myName = new QLabel(centralwidget);
        myName->setObjectName(QStringLiteral("myName"));
        sizePolicy.setHeightForWidth(myName->sizePolicy().hasHeightForWidth());
        myName->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(myName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        myImg = new QLabel(centralwidget);
        myImg->setObjectName(QStringLiteral("myImg"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(myImg->sizePolicy().hasHeightForWidth());
        myImg->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(myImg);

        healthBar = new QProgressBar(centralwidget);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        healthBar->setValue(100);

        horizontalLayout_2->addWidget(healthBar);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_5);

        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 26));
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
        currentWeaponImg->setText(QApplication::translate("GameScreen", "WeaponImg", nullptr));
        currentWeaponName->setText(QApplication::translate("GameScreen", "name", nullptr));
        label_2->setText(QApplication::translate("GameScreen", "Power", nullptr));
        currentWeaponPower->setFormat(QApplication::translate("GameScreen", "%p P", nullptr));
        label_3->setText(QApplication::translate("GameScreen", "Speed", nullptr));
        currentWeaponSpeed->setFormat(QApplication::translate("GameScreen", "%p S", nullptr));
        pushButton_2->setText(QApplication::translate("GameScreen", "Inventory", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton_2->setShortcut(QApplication::translate("GameScreen", "I", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton->setText(QApplication::translate("GameScreen", "Options", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("GameScreen", "O", nullptr));
#endif // QT_NO_SHORTCUT
        enemyName->setText(QApplication::translate("GameScreen", "enemyName", nullptr));
        enemyHealth->setFormat(QApplication::translate("GameScreen", "%p Hp", nullptr));
        treasure->setText(QString());
        chest->setText(QString());
        description->setText(QString());
        label->setText(QApplication::translate("GameScreen", "You are in the middle of nowhere", nullptr));
        pushButton_3->setText(QString());
        north->setText(QApplication::translate("GameScreen", "North", nullptr));
#ifndef QT_NO_SHORTCUT
        north->setShortcut(QApplication::translate("GameScreen", "Up", nullptr));
#endif // QT_NO_SHORTCUT
        south->setText(QApplication::translate("GameScreen", "South", nullptr));
#ifndef QT_NO_SHORTCUT
        south->setShortcut(QApplication::translate("GameScreen", "Down", nullptr));
#endif // QT_NO_SHORTCUT
        east->setText(QApplication::translate("GameScreen", "East", nullptr));
#ifndef QT_NO_SHORTCUT
        east->setShortcut(QApplication::translate("GameScreen", "Right", nullptr));
#endif // QT_NO_SHORTCUT
        west->setText(QApplication::translate("GameScreen", "West", nullptr));
#ifndef QT_NO_SHORTCUT
        west->setShortcut(QApplication::translate("GameScreen", "Left", nullptr));
#endif // QT_NO_SHORTCUT
        attackBtn->setText(QApplication::translate("GameScreen", "Attack", nullptr));
#ifndef QT_NO_SHORTCUT
        attackBtn->setShortcut(QApplication::translate("GameScreen", "A", nullptr));
#endif // QT_NO_SHORTCUT
        defendBtn->setText(QApplication::translate("GameScreen", "Defence", nullptr));
#ifndef QT_NO_SHORTCUT
        defendBtn->setShortcut(QApplication::translate("GameScreen", "D", nullptr));
#endif // QT_NO_SHORTCUT
        special->setText(QApplication::translate("GameScreen", "Special", nullptr));
#ifndef QT_NO_SHORTCUT
        special->setShortcut(QApplication::translate("GameScreen", "S", nullptr));
#endif // QT_NO_SHORTCUT
        timeLeft->setText(QString());
        myName->setText(QApplication::translate("GameScreen", "username", nullptr));
        myImg->setText(QApplication::translate("GameScreen", "userImg", nullptr));
        healthBar->setFormat(QApplication::translate("GameScreen", "%p Hp", nullptr));
        toolBar->setWindowTitle(QApplication::translate("GameScreen", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
