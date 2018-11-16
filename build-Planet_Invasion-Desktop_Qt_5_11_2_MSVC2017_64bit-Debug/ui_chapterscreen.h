/********************************************************************************
** Form generated from reading UI file 'chapterscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTERSCREEN_H
#define UI_CHAPTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChapterScreen
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *ch1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *ch2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *ch3;

    void setupUi(QDialog *ChapterScreen)
    {
        if (ChapterScreen->objectName().isEmpty())
            ChapterScreen->setObjectName(QStringLiteral("ChapterScreen"));
        ChapterScreen->resize(400, 300);
        groupBox = new QGroupBox(ChapterScreen);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 331, 241));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QLatin1String("background: transparent;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(12, 4, 37, 255), stop:1 rgba(26, 31, 94, 221));"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ch1.png")));

        verticalLayout->addWidget(label);

        ch1 = new QPushButton(groupBox);
        ch1->setObjectName(QStringLiteral("ch1"));
        ch1->setStyleSheet(QLatin1String("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Impact\";"));

        verticalLayout->addWidget(ch1);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/ch2.png")));

        verticalLayout_2->addWidget(label_2);

        ch2 = new QPushButton(groupBox);
        ch2->setObjectName(QStringLiteral("ch2"));
        ch2->setStyleSheet(QLatin1String("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Impact\";\n"
""));

        verticalLayout_2->addWidget(ch2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ch3.png")));

        verticalLayout_3->addWidget(label_3);

        ch3 = new QPushButton(groupBox);
        ch3->setObjectName(QStringLiteral("ch3"));
        ch3->setStyleSheet(QLatin1String("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255));\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Impact\";\n"
""));

        verticalLayout_3->addWidget(ch3);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        retranslateUi(ChapterScreen);

        QMetaObject::connectSlotsByName(ChapterScreen);
    } // setupUi

    void retranslateUi(QDialog *ChapterScreen)
    {
        ChapterScreen->setWindowTitle(QApplication::translate("ChapterScreen", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        ch1->setText(QApplication::translate("ChapterScreen", "Play Chapter 1", nullptr));
        label_2->setText(QString());
        ch2->setText(QApplication::translate("ChapterScreen", "Play Chapter 2", nullptr));
        label_3->setText(QString());
        ch3->setText(QApplication::translate("ChapterScreen", "Play Chapter 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChapterScreen: public Ui_ChapterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTERSCREEN_H
