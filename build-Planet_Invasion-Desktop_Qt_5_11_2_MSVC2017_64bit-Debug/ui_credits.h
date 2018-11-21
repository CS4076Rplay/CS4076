/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Credits
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Credits)
    {
        if (Credits->objectName().isEmpty())
            Credits->setObjectName(QStringLiteral("Credits"));
        Credits->resize(400, 300);
        verticalLayout = new QVBoxLayout(Credits);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Credits);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 9pt \"Papyrus\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent;\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);


        retranslateUi(Credits);

        QMetaObject::connectSlotsByName(Credits);
    } // setupUi

    void retranslateUi(QDialog *Credits)
    {
        Credits->setWindowTitle(QApplication::translate("Credits", "Dialog", nullptr));
        label->setText(QApplication::translate("Credits", "Credits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credits: public Ui_Credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H
