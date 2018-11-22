/********************************************************************************
** Form generated from reading UI file 'finalchapter.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALCHAPTER_H
#define UI_FINALCHAPTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinalChapter
{
public:
    QGroupBox *groupBox;
    QPushButton *mainMenuBtn;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *finalStory;

    void setupUi(QDialog *FinalChapter)
    {
        if (FinalChapter->objectName().isEmpty())
            FinalChapter->setObjectName(QStringLiteral("FinalChapter"));
        FinalChapter->resize(613, 486);
        FinalChapter->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(FinalChapter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 160, 271, 181));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QLatin1String("background-image: url(:/finalPic.jpg);\n"
"background-repeat: no-repeat;"));
        mainMenuBtn = new QPushButton(FinalChapter);
        mainMenuBtn->setObjectName(QStringLiteral("mainMenuBtn"));
        mainMenuBtn->setGeometry(QRect(260, 440, 93, 28));
        mainMenuBtn->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.09, y1:0.193182, x2:1, y2:0, stop:0 rgba(228, 216, 17, 255), stop:1 rgba(255, 183, 20, 255));\n"
"color: rgb(2, 120, 57);\n"
"font: 8pt \"Impact\";"));
        groupBox_2 = new QGroupBox(FinalChapter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 40, 443, 361));
        groupBox_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border-color:transparent;"));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 441, 341));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        finalStory = new QLabel(verticalLayoutWidget);
        finalStory->setObjectName(QStringLiteral("finalStory"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(finalStory->sizePolicy().hasHeightForWidth());
        finalStory->setSizePolicy(sizePolicy1);
        finalStory->setStyleSheet(QLatin1String("font: 9pt \"Papyrus\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent\n"
""));
        finalStory->setScaledContents(true);
        finalStory->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        finalStory->setWordWrap(true);

        verticalLayout->addWidget(finalStory);


        retranslateUi(FinalChapter);

        QMetaObject::connectSlotsByName(FinalChapter);
    } // setupUi

    void retranslateUi(QDialog *FinalChapter)
    {
        FinalChapter->setWindowTitle(QApplication::translate("FinalChapter", "Dialog", nullptr));
        groupBox->setTitle(QString());
        mainMenuBtn->setText(QApplication::translate("FinalChapter", "Main Menu", nullptr));
        groupBox_2->setTitle(QString());
        finalStory->setText(QApplication::translate("FinalChapter", "edtfyguihjyufyuhjuytfyguytyfg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinalChapter: public Ui_FinalChapter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALCHAPTER_H
