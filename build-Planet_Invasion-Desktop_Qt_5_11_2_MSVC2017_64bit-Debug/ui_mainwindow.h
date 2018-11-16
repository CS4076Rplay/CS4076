/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *playButton;
    QPushButton *creditsBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(579, 417);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background-color:qlineargradient(spread:pad, x1:0.0895522, y1:0.512, x2:0, y2:1, stop:0 rgba(34, 45, 71, 255), stop:1 rgba(86, 38, 0, 255));\n"
"color:rgb(255, 255, 255);\n"
"font: 9pt \"Papyrus\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 511, 371));
        groupBox->setStyleSheet(QLatin1String("background: transparent;\n"
"background-image:url(:/bg1.png);\n"
"backgroun-repeat:no-repeat;\n"
""));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 200, 161, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        playButton = new QPushButton(verticalLayoutWidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(237, 205, 77, 255), stop:1 rgba(255, 172, 172, 255));\n"
"\n"
""));

        verticalLayout->addWidget(playButton);

        creditsBtn = new QPushButton(verticalLayoutWidget);
        creditsBtn->setObjectName(QStringLiteral("creditsBtn"));
        creditsBtn->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255))"));

        verticalLayout->addWidget(creditsBtn);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Game", nullptr));
        groupBox->setTitle(QString());
        playButton->setText(QApplication::translate("MainWindow", "Play Game", nullptr));
#ifndef QT_NO_SHORTCUT
        playButton->setShortcut(QApplication::translate("MainWindow", "P", nullptr));
#endif // QT_NO_SHORTCUT
        creditsBtn->setText(QApplication::translate("MainWindow", "Credits", nullptr));
#ifndef QT_NO_SHORTCUT
        creditsBtn->setShortcut(QApplication::translate("MainWindow", "C", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
