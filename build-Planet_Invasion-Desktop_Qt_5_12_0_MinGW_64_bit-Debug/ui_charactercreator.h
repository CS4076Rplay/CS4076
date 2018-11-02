/********************************************************************************
** Form generated from reading UI file 'charactercreator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERCREATOR_H
#define UI_CHARACTERCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator
{
public:

    void setupUi(QDialog *CharacterCreator)
    {
        if (CharacterCreator->objectName().isEmpty())
            CharacterCreator->setObjectName(QString::fromUtf8("CharacterCreator"));
        CharacterCreator->resize(400, 300);

        retranslateUi(CharacterCreator);

        QMetaObject::connectSlotsByName(CharacterCreator);
    } // setupUi

    void retranslateUi(QDialog *CharacterCreator)
    {
        CharacterCreator->setWindowTitle(QApplication::translate("CharacterCreator", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator: public Ui_CharacterCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERCREATOR_H
