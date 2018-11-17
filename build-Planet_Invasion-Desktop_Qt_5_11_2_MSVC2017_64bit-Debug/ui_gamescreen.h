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
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
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
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *enemyName;
    QProgressBar *enemyHealth;
    QPushButton *treasure;
    QPushButton *chest;
    QLabel *description;
    QLabel *label;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *north;
    QPushButton *south;
    QPushButton *east;
    QPushButton *west;
    QFrame *line_6;
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
        GameScreen->resize(766, 630);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qradialgradient(spread:pad, cx:0.495, cy:0.335, radius:1.287, fx:0.519876, fy:0.54, stop:0 rgba(62, 24, 8, 255), stop:1 rgba(212, 168, 106, 212))"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        currentWeaponImg = new QLabel(groupBox);
        currentWeaponImg->setObjectName(QStringLiteral("currentWeaponImg"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentWeaponImg->sizePolicy().hasHeightForWidth());
        currentWeaponImg->setSizePolicy(sizePolicy);
        currentWeaponImg->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0))"));

        horizontalLayout_3->addWidget(currentWeaponImg);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        currentWeaponName = new QLabel(groupBox);
        currentWeaponName->setObjectName(QStringLiteral("currentWeaponName"));
        sizePolicy.setHeightForWidth(currentWeaponName->sizePolicy().hasHeightForWidth());
        currentWeaponName->setSizePolicy(sizePolicy);
        currentWeaponName->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 14pt \"Modern No. 20\";\n"
"color:rgb(255, 250, 194)"));

        verticalLayout_3->addWidget(currentWeaponName);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 255, 255)\n"
""));

        horizontalLayout_5->addWidget(label_2, 0, Qt::AlignRight);

        currentWeaponPower = new QProgressBar(groupBox);
        currentWeaponPower->setObjectName(QStringLiteral("currentWeaponPower"));
        sizePolicy.setHeightForWidth(currentWeaponPower->sizePolicy().hasHeightForWidth());
        currentWeaponPower->setSizePolicy(sizePolicy);
        currentWeaponPower->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 255, 255)\n"
""));
        currentWeaponPower->setMaximum(10);
        currentWeaponPower->setValue(2);

        horizontalLayout_5->addWidget(currentWeaponPower);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout_7->addWidget(label_3);

        currentWeaponSpeed = new QProgressBar(groupBox);
        currentWeaponSpeed->setObjectName(QStringLiteral("currentWeaponSpeed"));
        sizePolicy.setHeightForWidth(currentWeaponSpeed->sizePolicy().hasHeightForWidth());
        currentWeaponSpeed->setSizePolicy(sizePolicy);
        currentWeaponSpeed->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 255, 255)"));
        currentWeaponSpeed->setMaximum(10);
        currentWeaponSpeed->setValue(4);

        horizontalLayout_7->addWidget(currentWeaponSpeed);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_3->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0.0597015, y1:0.051, x2:0, y2:1, stop:0 rgba(232, 255, 0, 255), stop:1 rgba(159, 255, 226, 255));\n"
"font: 10pt \"Lucida Sans Unicode\";"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/inventory.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(110, 0, 0, 255));\n"
"font: 10pt \"Lucida Sans Unicode\";\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setStyleSheet(QStringLiteral("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(49, 16, 0, 255), stop:1 rgba(107, 73, 0, 255))"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        enemyName = new QLabel(groupBox);
        enemyName->setObjectName(QStringLiteral("enemyName"));
        sizePolicy.setHeightForWidth(enemyName->sizePolicy().hasHeightForWidth());
        enemyName->setSizePolicy(sizePolicy);
        enemyName->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:rgb(255, 0, 0)"));
        enemyName->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(enemyName, 0, Qt::AlignHCenter);

        enemyHealth = new QProgressBar(groupBox);
        enemyHealth->setObjectName(QStringLiteral("enemyHealth"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enemyHealth->sizePolicy().hasHeightForWidth());
        enemyHealth->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(186, 0, 72, 255));
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
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(127, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush9(QColor(0, 170, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        enemyHealth->setPalette(palette);
        enemyHealth->setStyleSheet(QLatin1String("\n"
"background:transparent;\n"
"background-color:rgb(186, 0, 72);\n"
"font: 9pt \"Impact\";\n"
"color:rgb(255, 255, 255)"));
        enemyHealth->setValue(10);

        verticalLayout_6->addWidget(enemyHealth);


        verticalLayout_4->addLayout(verticalLayout_6);

        treasure = new QPushButton(groupBox);
        treasure->setObjectName(QStringLiteral("treasure"));
        sizePolicy.setHeightForWidth(treasure->sizePolicy().hasHeightForWidth());
        treasure->setSizePolicy(sizePolicy);
        treasure->setStyleSheet(QLatin1String("background:transparent;\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Characters/Ji.png"), QSize(), QIcon::Normal, QIcon::Off);
        treasure->setIcon(icon1);
        treasure->setFlat(true);

        verticalLayout_4->addWidget(treasure);

        chest = new QPushButton(groupBox);
        chest->setObjectName(QStringLiteral("chest"));
        chest->setEnabled(true);
        sizePolicy.setHeightForWidth(chest->sizePolicy().hasHeightForWidth());
        chest->setSizePolicy(sizePolicy);
        chest->setLayoutDirection(Qt::LeftToRight);
        chest->setStyleSheet(QLatin1String("background:transparent;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/Characters/treasure.png"), QSize(), QIcon::Normal, QIcon::Off);
        chest->setIcon(icon2);
        chest->setFlat(true);

        verticalLayout_4->addWidget(chest);

        description = new QLabel(groupBox);
        description->setObjectName(QStringLiteral("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setStyleSheet(QLatin1String("background:transparent;\n"
"font: italic 8pt \"MS Serif\";\n"
"color: rgb(255, 255, 255);"));
        description->setWordWrap(false);

        verticalLayout_4->addWidget(description);


        horizontalLayout_10->addLayout(verticalLayout_4);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 14pt \"Papyrus\";\n"
"color:rgb(255, 247, 233)"));
        label->setScaledContents(true);
        label->setWordWrap(true);

        horizontalLayout_10->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_10);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color: rgb(168, 168, 168);"));
        pushButton_3->setFlat(false);

        gridLayout->addWidget(pushButton_3, 2, 4, 1, 1, Qt::AlignHCenter);

        north = new QPushButton(groupBox);
        north->setObjectName(QStringLiteral("north"));
        sizePolicy.setHeightForWidth(north->sizePolicy().hasHeightForWidth());
        north->setSizePolicy(sizePolicy);
        north->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(110, 0, 0, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(north, 0, 4, 1, 1, Qt::AlignHCenter);

        south = new QPushButton(groupBox);
        south->setObjectName(QStringLiteral("south"));
        sizePolicy.setHeightForWidth(south->sizePolicy().hasHeightForWidth());
        south->setSizePolicy(sizePolicy);
        south->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(south, 3, 4, 1, 1, Qt::AlignHCenter);

        east = new QPushButton(groupBox);
        east->setObjectName(QStringLiteral("east"));
        sizePolicy.setHeightForWidth(east->sizePolicy().hasHeightForWidth());
        east->setSizePolicy(sizePolicy);
        east->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(east, 2, 5, 1, 1, Qt::AlignLeft);

        west = new QPushButton(groupBox);
        west->setObjectName(QStringLiteral("west"));
        sizePolicy.setHeightForWidth(west->sizePolicy().hasHeightForWidth());
        west->setSizePolicy(sizePolicy);
        west->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 74, 255), stop:1 rgba(255, 167, 0, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(west, 2, 3, 1, 1, Qt::AlignRight);


        horizontalLayout_6->addLayout(gridLayout);

        line_6 = new QFrame(groupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        attackBtn = new QPushButton(groupBox);
        attackBtn->setObjectName(QStringLiteral("attackBtn"));
        attackBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(attackBtn->sizePolicy().hasHeightForWidth());
        attackBtn->setSizePolicy(sizePolicy);
        attackBtn->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 74, 255), stop:1 rgba(255, 167, 0, 255));\n"
"color:rgb(255, 255, 255)\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/attack-icon-3.jpg.png"), QSize(), QIcon::Normal, QIcon::Off);
        attackBtn->setIcon(icon3);
        attackBtn->setIconSize(QSize(30, 30));

        horizontalLayout_8->addWidget(attackBtn);

        defendBtn = new QPushButton(groupBox);
        defendBtn->setObjectName(QStringLiteral("defendBtn"));
        defendBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(defendBtn->sizePolicy().hasHeightForWidth());
        defendBtn->setSizePolicy(sizePolicy);
        defendBtn->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"color:rgb(255, 255, 255)"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/attack-icon-13.jpg.png"), QSize(), QIcon::Normal, QIcon::Off);
        defendBtn->setIcon(icon4);
        defendBtn->setIconSize(QSize(30, 30));

        horizontalLayout_8->addWidget(defendBtn);


        verticalLayout_7->addLayout(horizontalLayout_8);

        specialTime = new QProgressBar(groupBox);
        specialTime->setObjectName(QStringLiteral("specialTime"));
        sizePolicy.setHeightForWidth(specialTime->sizePolicy().hasHeightForWidth());
        specialTime->setSizePolicy(sizePolicy);
        specialTime->setValue(0);
        specialTime->setTextVisible(false);

        verticalLayout_7->addWidget(specialTime, 0, Qt::AlignHCenter);

        special = new QPushButton(groupBox);
        special->setObjectName(QStringLiteral("special"));
        sizePolicy.setHeightForWidth(special->sizePolicy().hasHeightForWidth());
        special->setSizePolicy(sizePolicy);
        special->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.238806 rgba(193, 155, 29, 255), stop:1 rgba(255, 229, 49, 255));"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Characters/sw_ic.png"), QSize(), QIcon::Normal, QIcon::Off);
        special->setIcon(icon5);
        special->setIconSize(QSize(35, 35));

        verticalLayout_7->addWidget(special, 0, Qt::AlignHCenter);

        timeLeft = new QLabel(groupBox);
        timeLeft->setObjectName(QStringLiteral("timeLeft"));
        timeLeft->setStyleSheet(QLatin1String("background:transparent;\n"
"color:rgb(255, 255, 255);\n"
"font: 8pt \"MS Shell Dlg 2\";"));

        verticalLayout_7->addWidget(timeLeft);


        horizontalLayout_6->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        myName = new QLabel(groupBox);
        myName->setObjectName(QStringLiteral("myName"));
        sizePolicy.setHeightForWidth(myName->sizePolicy().hasHeightForWidth());
        myName->setSizePolicy(sizePolicy);
        myName->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:rgb(0, 255, 0)"));

        verticalLayout_5->addWidget(myName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        myImg = new QLabel(groupBox);
        myImg->setObjectName(QStringLiteral("myImg"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(myImg->sizePolicy().hasHeightForWidth());
        myImg->setSizePolicy(sizePolicy3);
        myImg->setStyleSheet(QLatin1String("background:transparent;\n"
""));

        horizontalLayout_2->addWidget(myImg);

        healthBar = new QProgressBar(groupBox);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        healthBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 9pt \"Impact\";\n"
"color:rgb(255, 255, 255)"));
        healthBar->setValue(100);

        horizontalLayout_2->addWidget(healthBar);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout_5);


        verticalLayout->addWidget(groupBox);

        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 766, 26));
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
        groupBox->setTitle(QString());
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
        pushButton->setText(QApplication::translate("GameScreen", "Quit", nullptr));
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
        north->setShortcut(QApplication::translate("GameScreen", "W", nullptr));
#endif // QT_NO_SHORTCUT
        south->setText(QApplication::translate("GameScreen", "South", nullptr));
#ifndef QT_NO_SHORTCUT
        south->setShortcut(QApplication::translate("GameScreen", "S", nullptr));
#endif // QT_NO_SHORTCUT
        east->setText(QApplication::translate("GameScreen", "East", nullptr));
#ifndef QT_NO_SHORTCUT
        east->setShortcut(QApplication::translate("GameScreen", "D", nullptr));
#endif // QT_NO_SHORTCUT
        west->setText(QApplication::translate("GameScreen", "West", nullptr));
#ifndef QT_NO_SHORTCUT
        west->setShortcut(QApplication::translate("GameScreen", "A", nullptr));
#endif // QT_NO_SHORTCUT
        attackBtn->setText(QApplication::translate("GameScreen", "Attack", nullptr));
#ifndef QT_NO_SHORTCUT
        attackBtn->setShortcut(QApplication::translate("GameScreen", "J", nullptr));
#endif // QT_NO_SHORTCUT
        defendBtn->setText(QApplication::translate("GameScreen", "Defence", nullptr));
#ifndef QT_NO_SHORTCUT
        defendBtn->setShortcut(QApplication::translate("GameScreen", "L", nullptr));
#endif // QT_NO_SHORTCUT
        special->setText(QApplication::translate("GameScreen", "Special", nullptr));
#ifndef QT_NO_SHORTCUT
        special->setShortcut(QApplication::translate("GameScreen", "K", nullptr));
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
