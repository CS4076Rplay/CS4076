/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Intro
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *introPic;
    QLabel *introimg2;
    QLabel *label;
    QLabel *label_2;
    QLabel *introlbl;
    QPushButton *pushButton;

    void setupUi(QDialog *Intro)
    {
        if (Intro->objectName().isEmpty())
            Intro->setObjectName(QStringLiteral("Intro"));
        Intro->resize(693, 300);
        verticalLayout = new QVBoxLayout(Intro);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        introPic = new QLabel(Intro);
        introPic->setObjectName(QStringLiteral("introPic"));
        introPic->setPixmap(QPixmap(QString::fromUtf8(":/Images/Characters/earth1.jpg")));
        introPic->setWordWrap(false);

        horizontalLayout->addWidget(introPic);

        introimg2 = new QLabel(Intro);
        introimg2->setObjectName(QStringLiteral("introimg2"));
        introimg2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Characters/earth1.jpg")));

        horizontalLayout->addWidget(introimg2);

        label = new QLabel(Intro);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ch3.png")));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(Intro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/ch2.png")));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        introlbl = new QLabel(Intro);
        introlbl->setObjectName(QStringLiteral("introlbl"));

        verticalLayout->addWidget(introlbl);

        pushButton = new QPushButton(Intro);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.03, y2:1, stop:0 rgba(81, 178, 25, 255), stop:1 rgba(255, 243, 23, 255));\n"
""));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Intro);

        QMetaObject::connectSlotsByName(Intro);
    } // setupUi

    void retranslateUi(QDialog *Intro)
    {
        Intro->setWindowTitle(QApplication::translate("Intro", "Dialog", nullptr));
        introPic->setText(QString());
        introimg2->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        introlbl->setText(QApplication::translate("Intro", "intro", nullptr));
        pushButton->setText(QApplication::translate("Intro", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Intro: public Ui_Intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
