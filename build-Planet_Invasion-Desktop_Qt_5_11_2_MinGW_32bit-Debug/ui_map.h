/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *map;

    void setupUi(QDialog *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QStringLiteral("Map"));
        Map->resize(400, 300);
        verticalLayout = new QVBoxLayout(Map);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        map = new QLabel(Map);
        map->setObjectName(QStringLiteral("map"));

        verticalLayout->addWidget(map);


        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QDialog *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "Dialog", nullptr));
        map->setText(QApplication::translate("Map", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
