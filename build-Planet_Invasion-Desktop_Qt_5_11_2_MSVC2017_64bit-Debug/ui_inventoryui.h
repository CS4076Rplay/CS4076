/********************************************************************************
** Form generated from reading UI file 'inventoryui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYUI_H
#define UI_INVENTORYUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InventoryUI
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *slot2;
    QPushButton *use_s2;
    QVBoxLayout *slot1;
    QPushButton *use_s1;
    QVBoxLayout *slot6;
    QPushButton *use_s6;
    QVBoxLayout *slot5;
    QPushButton *use_s5;
    QVBoxLayout *slot7;
    QPushButton *use_s7;
    QVBoxLayout *slot9;
    QPushButton *use_s9;
    QVBoxLayout *slot8;
    QPushButton *use_s8;
    QVBoxLayout *slot4;
    QPushButton *use_s4;
    QVBoxLayout *slot3;
    QPushButton *use_s3;
    QHBoxLayout *horizontalLayout;
    QLabel *currentItemImg;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentWeaponLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weaponPower;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weaponSpeed;
    QProgressBar *progressBar_2;

    void setupUi(QDialog *InventoryUI)
    {
        if (InventoryUI->objectName().isEmpty())
            InventoryUI->setObjectName(QStringLiteral("InventoryUI"));
        InventoryUI->resize(410, 345);
        gridLayout = new QGridLayout(InventoryUI);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        slot2 = new QVBoxLayout();
        slot2->setObjectName(QStringLiteral("slot2"));
        use_s2 = new QPushButton(InventoryUI);
        use_s2->setObjectName(QStringLiteral("use_s2"));
        use_s2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(use_s2->sizePolicy().hasHeightForWidth());
        use_s2->setSizePolicy(sizePolicy);

        slot2->addWidget(use_s2);


        gridLayout->addLayout(slot2, 0, 1, 1, 1);

        slot1 = new QVBoxLayout();
        slot1->setObjectName(QStringLiteral("slot1"));
        slot1->setContentsMargins(10, 10, 10, 10);
        use_s1 = new QPushButton(InventoryUI);
        use_s1->setObjectName(QStringLiteral("use_s1"));
        use_s1->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s1->sizePolicy().hasHeightForWidth());
        use_s1->setSizePolicy(sizePolicy);

        slot1->addWidget(use_s1);


        gridLayout->addLayout(slot1, 0, 0, 1, 1);

        slot6 = new QVBoxLayout();
        slot6->setObjectName(QStringLiteral("slot6"));
        use_s6 = new QPushButton(InventoryUI);
        use_s6->setObjectName(QStringLiteral("use_s6"));
        use_s6->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s6->sizePolicy().hasHeightForWidth());
        use_s6->setSizePolicy(sizePolicy);

        slot6->addWidget(use_s6);


        gridLayout->addLayout(slot6, 1, 2, 1, 1);

        slot5 = new QVBoxLayout();
        slot5->setObjectName(QStringLiteral("slot5"));
        use_s5 = new QPushButton(InventoryUI);
        use_s5->setObjectName(QStringLiteral("use_s5"));
        use_s5->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s5->sizePolicy().hasHeightForWidth());
        use_s5->setSizePolicy(sizePolicy);

        slot5->addWidget(use_s5);


        gridLayout->addLayout(slot5, 1, 1, 1, 1);

        slot7 = new QVBoxLayout();
        slot7->setObjectName(QStringLiteral("slot7"));
        use_s7 = new QPushButton(InventoryUI);
        use_s7->setObjectName(QStringLiteral("use_s7"));
        use_s7->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s7->sizePolicy().hasHeightForWidth());
        use_s7->setSizePolicy(sizePolicy);

        slot7->addWidget(use_s7);


        gridLayout->addLayout(slot7, 2, 0, 1, 1);

        slot9 = new QVBoxLayout();
        slot9->setObjectName(QStringLiteral("slot9"));
        use_s9 = new QPushButton(InventoryUI);
        use_s9->setObjectName(QStringLiteral("use_s9"));
        use_s9->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s9->sizePolicy().hasHeightForWidth());
        use_s9->setSizePolicy(sizePolicy);

        slot9->addWidget(use_s9);


        gridLayout->addLayout(slot9, 2, 2, 1, 1);

        slot8 = new QVBoxLayout();
        slot8->setObjectName(QStringLiteral("slot8"));
        use_s8 = new QPushButton(InventoryUI);
        use_s8->setObjectName(QStringLiteral("use_s8"));
        use_s8->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s8->sizePolicy().hasHeightForWidth());
        use_s8->setSizePolicy(sizePolicy);

        slot8->addWidget(use_s8);


        gridLayout->addLayout(slot8, 2, 1, 1, 1);

        slot4 = new QVBoxLayout();
        slot4->setObjectName(QStringLiteral("slot4"));
        use_s4 = new QPushButton(InventoryUI);
        use_s4->setObjectName(QStringLiteral("use_s4"));
        use_s4->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s4->sizePolicy().hasHeightForWidth());
        use_s4->setSizePolicy(sizePolicy);

        slot4->addWidget(use_s4);


        gridLayout->addLayout(slot4, 1, 0, 1, 1);

        slot3 = new QVBoxLayout();
        slot3->setObjectName(QStringLiteral("slot3"));
        use_s3 = new QPushButton(InventoryUI);
        use_s3->setObjectName(QStringLiteral("use_s3"));
        use_s3->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s3->sizePolicy().hasHeightForWidth());
        use_s3->setSizePolicy(sizePolicy);

        slot3->addWidget(use_s3);


        gridLayout->addLayout(slot3, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        currentItemImg = new QLabel(InventoryUI);
        currentItemImg->setObjectName(QStringLiteral("currentItemImg"));

        horizontalLayout->addWidget(currentItemImg);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentWeaponLabel = new QLabel(InventoryUI);
        currentWeaponLabel->setObjectName(QStringLiteral("currentWeaponLabel"));

        verticalLayout_2->addWidget(currentWeaponLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weaponPower = new QLabel(InventoryUI);
        weaponPower->setObjectName(QStringLiteral("weaponPower"));

        horizontalLayout_3->addWidget(weaponPower);

        progressBar = new QProgressBar(InventoryUI);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setValue(80);
        progressBar->setTextVisible(true);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weaponSpeed = new QLabel(InventoryUI);
        weaponSpeed->setObjectName(QStringLiteral("weaponSpeed"));

        horizontalLayout_2->addWidget(weaponSpeed);

        progressBar_2 = new QProgressBar(InventoryUI);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        sizePolicy1.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy1);
        progressBar_2->setValue(24);

        horizontalLayout_2->addWidget(progressBar_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);


        retranslateUi(InventoryUI);

        QMetaObject::connectSlotsByName(InventoryUI);
    } // setupUi

    void retranslateUi(QDialog *InventoryUI)
    {
        InventoryUI->setWindowTitle(QApplication::translate("InventoryUI", "Dialog", nullptr));
        use_s2->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s1->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s6->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s5->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s7->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s9->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s8->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s4->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s3->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        currentItemImg->setText(QApplication::translate("InventoryUI", "TextLabel", nullptr));
        currentWeaponLabel->setText(QApplication::translate("InventoryUI", "WeaponName", nullptr));
        weaponPower->setText(QApplication::translate("InventoryUI", "POWER", nullptr));
        weaponSpeed->setText(QApplication::translate("InventoryUI", "SPEED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InventoryUI: public Ui_InventoryUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYUI_H
