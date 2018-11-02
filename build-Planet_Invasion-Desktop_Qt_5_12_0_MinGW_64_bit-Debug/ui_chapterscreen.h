/********************************************************************************
** Form generated from reading UI file 'chapterscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAPTERSCREEN_H
#define UI_CHAPTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ChapterScreen
{
public:

    void setupUi(QDialog *ChapterScreen)
    {
        if (ChapterScreen->objectName().isEmpty())
            ChapterScreen->setObjectName(QString::fromUtf8("ChapterScreen"));
        ChapterScreen->resize(400, 300);

        retranslateUi(ChapterScreen);

        QMetaObject::connectSlotsByName(ChapterScreen);
    } // setupUi

    void retranslateUi(QDialog *ChapterScreen)
    {
        ChapterScreen->setWindowTitle(QApplication::translate("ChapterScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChapterScreen: public Ui_ChapterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAPTERSCREEN_H
