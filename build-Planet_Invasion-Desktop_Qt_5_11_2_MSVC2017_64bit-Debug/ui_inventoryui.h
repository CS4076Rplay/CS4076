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
#include <QtWidgets/QFrame>
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
    QFrame *line;
    QVBoxLayout *potion_slot3;
    QPushButton *drink3;
    QVBoxLayout *potion_slot1;
    QPushButton *drink1;
    QVBoxLayout *slot4;
    QPushButton *use_s4;
    QHBoxLayout *aboutWeapon;
    QVBoxLayout *verticalLayout;
    QLabel *currentItemImg;
    QLabel *currentItemDesc;
    QVBoxLayout *verticalLayout_2;
    QLabel *currentWeaponLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *weaponPower;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *weaponSpeed;
    QProgressBar *progressBar_2;
    QVBoxLayout *slot5;
    QPushButton *use_s5;
    QVBoxLayout *slot2;
    QPushButton *use_s2;
    QVBoxLayout *slot1;
    QPushButton *use_s1;
    QVBoxLayout *slot6;
    QPushButton *use_s6;
    QVBoxLayout *slot8;
    QPushButton *use_s8;
    QVBoxLayout *slot9;
    QPushButton *use_s9;
    QVBoxLayout *slot7;
    QPushButton *use_s7;
    QVBoxLayout *slot3;
    QPushButton *use_s3;
    QFrame *line_3;
    QFrame *line_2;
    QVBoxLayout *potion_slot5;
    QPushButton *drink5;
    QVBoxLayout *potion_slot6;
    QPushButton *drink6;
    QVBoxLayout *potion_slot2;
    QPushButton *drink2;
    QVBoxLayout *potion_slot4;
    QPushButton *drink4;
    QVBoxLayout *verticalLayout_5;
    QLabel *potionImage;
    QLabel *potionName;
    QLabel *potionDesc;
    QFrame *line_4;

    void setupUi(QDialog *InventoryUI)
    {
        if (InventoryUI->objectName().isEmpty())
            InventoryUI->setObjectName(QStringLiteral("InventoryUI"));
        InventoryUI->resize(525, 369);
        gridLayout = new QGridLayout(InventoryUI);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line = new QFrame(InventoryUI);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 4, 1, 1);

        potion_slot3 = new QVBoxLayout();
        potion_slot3->setObjectName(QStringLiteral("potion_slot3"));
        drink3 = new QPushButton(InventoryUI);
        drink3->setObjectName(QStringLiteral("drink3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(drink3->sizePolicy().hasHeightForWidth());
        drink3->setSizePolicy(sizePolicy1);

        potion_slot3->addWidget(drink3);


        gridLayout->addLayout(potion_slot3, 1, 5, 1, 1);

        potion_slot1 = new QVBoxLayout();
        potion_slot1->setObjectName(QStringLiteral("potion_slot1"));
        drink1 = new QPushButton(InventoryUI);
        drink1->setObjectName(QStringLiteral("drink1"));
        sizePolicy1.setHeightForWidth(drink1->sizePolicy().hasHeightForWidth());
        drink1->setSizePolicy(sizePolicy1);

        potion_slot1->addWidget(drink1);


        gridLayout->addLayout(potion_slot1, 0, 5, 1, 1);

        slot4 = new QVBoxLayout();
        slot4->setObjectName(QStringLiteral("slot4"));
        use_s4 = new QPushButton(InventoryUI);
        use_s4->setObjectName(QStringLiteral("use_s4"));
        use_s4->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s4->sizePolicy().hasHeightForWidth());
        use_s4->setSizePolicy(sizePolicy1);

        slot4->addWidget(use_s4);


        gridLayout->addLayout(slot4, 1, 0, 1, 1);

        aboutWeapon = new QHBoxLayout();
        aboutWeapon->setSpacing(15);
        aboutWeapon->setObjectName(QStringLiteral("aboutWeapon"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentItemImg = new QLabel(InventoryUI);
        currentItemImg->setObjectName(QStringLiteral("currentItemImg"));
        sizePolicy1.setHeightForWidth(currentItemImg->sizePolicy().hasHeightForWidth());
        currentItemImg->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(currentItemImg);

        currentItemDesc = new QLabel(InventoryUI);
        currentItemDesc->setObjectName(QStringLiteral("currentItemDesc"));
        sizePolicy1.setHeightForWidth(currentItemDesc->sizePolicy().hasHeightForWidth());
        currentItemDesc->setSizePolicy(sizePolicy1);
        currentItemDesc->setWordWrap(true);

        verticalLayout->addWidget(currentItemDesc);


        aboutWeapon->addLayout(verticalLayout);

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
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy2);
        progressBar_2->setValue(24);

        horizontalLayout_2->addWidget(progressBar_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        aboutWeapon->addLayout(verticalLayout_2);


        gridLayout->addLayout(aboutWeapon, 3, 0, 1, 3);

        slot5 = new QVBoxLayout();
        slot5->setObjectName(QStringLiteral("slot5"));
        use_s5 = new QPushButton(InventoryUI);
        use_s5->setObjectName(QStringLiteral("use_s5"));
        use_s5->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s5->sizePolicy().hasHeightForWidth());
        use_s5->setSizePolicy(sizePolicy1);

        slot5->addWidget(use_s5);


        gridLayout->addLayout(slot5, 1, 1, 1, 1);

        slot2 = new QVBoxLayout();
        slot2->setObjectName(QStringLiteral("slot2"));
        use_s2 = new QPushButton(InventoryUI);
        use_s2->setObjectName(QStringLiteral("use_s2"));
        use_s2->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s2->sizePolicy().hasHeightForWidth());
        use_s2->setSizePolicy(sizePolicy1);

        slot2->addWidget(use_s2);


        gridLayout->addLayout(slot2, 0, 1, 1, 1);

        slot1 = new QVBoxLayout();
        slot1->setObjectName(QStringLiteral("slot1"));
        slot1->setContentsMargins(0, 0, 0, 0);
        use_s1 = new QPushButton(InventoryUI);
        use_s1->setObjectName(QStringLiteral("use_s1"));
        use_s1->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s1->sizePolicy().hasHeightForWidth());
        use_s1->setSizePolicy(sizePolicy1);

        slot1->addWidget(use_s1);


        gridLayout->addLayout(slot1, 0, 0, 1, 1);

        slot6 = new QVBoxLayout();
        slot6->setObjectName(QStringLiteral("slot6"));
        use_s6 = new QPushButton(InventoryUI);
        use_s6->setObjectName(QStringLiteral("use_s6"));
        use_s6->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s6->sizePolicy().hasHeightForWidth());
        use_s6->setSizePolicy(sizePolicy1);

        slot6->addWidget(use_s6);


        gridLayout->addLayout(slot6, 1, 2, 1, 1);

        slot8 = new QVBoxLayout();
        slot8->setObjectName(QStringLiteral("slot8"));
        use_s8 = new QPushButton(InventoryUI);
        use_s8->setObjectName(QStringLiteral("use_s8"));
        use_s8->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s8->sizePolicy().hasHeightForWidth());
        use_s8->setSizePolicy(sizePolicy1);

        slot8->addWidget(use_s8);


        gridLayout->addLayout(slot8, 2, 1, 1, 1);

        slot9 = new QVBoxLayout();
        slot9->setObjectName(QStringLiteral("slot9"));
        use_s9 = new QPushButton(InventoryUI);
        use_s9->setObjectName(QStringLiteral("use_s9"));
        use_s9->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s9->sizePolicy().hasHeightForWidth());
        use_s9->setSizePolicy(sizePolicy1);

        slot9->addWidget(use_s9);


        gridLayout->addLayout(slot9, 2, 2, 1, 1);

        slot7 = new QVBoxLayout();
        slot7->setObjectName(QStringLiteral("slot7"));
        use_s7 = new QPushButton(InventoryUI);
        use_s7->setObjectName(QStringLiteral("use_s7"));
        use_s7->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s7->sizePolicy().hasHeightForWidth());
        use_s7->setSizePolicy(sizePolicy1);

        slot7->addWidget(use_s7);


        gridLayout->addLayout(slot7, 2, 0, 1, 1);

        slot3 = new QVBoxLayout();
        slot3->setObjectName(QStringLiteral("slot3"));
        use_s3 = new QPushButton(InventoryUI);
        use_s3->setObjectName(QStringLiteral("use_s3"));
        use_s3->setEnabled(false);
        sizePolicy1.setHeightForWidth(use_s3->sizePolicy().hasHeightForWidth());
        use_s3->setSizePolicy(sizePolicy1);

        slot3->addWidget(use_s3);


        gridLayout->addLayout(slot3, 0, 2, 1, 1);

        line_3 = new QFrame(InventoryUI);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 4, 1, 1);

        line_2 = new QFrame(InventoryUI);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 4, 1, 1);

        potion_slot5 = new QVBoxLayout();
        potion_slot5->setObjectName(QStringLiteral("potion_slot5"));
        drink5 = new QPushButton(InventoryUI);
        drink5->setObjectName(QStringLiteral("drink5"));
        sizePolicy1.setHeightForWidth(drink5->sizePolicy().hasHeightForWidth());
        drink5->setSizePolicy(sizePolicy1);

        potion_slot5->addWidget(drink5);


        gridLayout->addLayout(potion_slot5, 2, 5, 1, 1);

        potion_slot6 = new QVBoxLayout();
        potion_slot6->setObjectName(QStringLiteral("potion_slot6"));
        drink6 = new QPushButton(InventoryUI);
        drink6->setObjectName(QStringLiteral("drink6"));
        sizePolicy1.setHeightForWidth(drink6->sizePolicy().hasHeightForWidth());
        drink6->setSizePolicy(sizePolicy1);

        potion_slot6->addWidget(drink6);


        gridLayout->addLayout(potion_slot6, 2, 6, 1, 1);

        potion_slot2 = new QVBoxLayout();
        potion_slot2->setObjectName(QStringLiteral("potion_slot2"));
        drink2 = new QPushButton(InventoryUI);
        drink2->setObjectName(QStringLiteral("drink2"));
        sizePolicy1.setHeightForWidth(drink2->sizePolicy().hasHeightForWidth());
        drink2->setSizePolicy(sizePolicy1);

        potion_slot2->addWidget(drink2);


        gridLayout->addLayout(potion_slot2, 0, 6, 1, 1);

        potion_slot4 = new QVBoxLayout();
        potion_slot4->setObjectName(QStringLiteral("potion_slot4"));
        drink4 = new QPushButton(InventoryUI);
        drink4->setObjectName(QStringLiteral("drink4"));
        sizePolicy1.setHeightForWidth(drink4->sizePolicy().hasHeightForWidth());
        drink4->setSizePolicy(sizePolicy1);

        potion_slot4->addWidget(drink4);


        gridLayout->addLayout(potion_slot4, 1, 6, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        potionImage = new QLabel(InventoryUI);
        potionImage->setObjectName(QStringLiteral("potionImage"));

        verticalLayout_5->addWidget(potionImage);

        potionName = new QLabel(InventoryUI);
        potionName->setObjectName(QStringLiteral("potionName"));

        verticalLayout_5->addWidget(potionName);

        potionDesc = new QLabel(InventoryUI);
        potionDesc->setObjectName(QStringLiteral("potionDesc"));
        potionDesc->setWordWrap(true);

        verticalLayout_5->addWidget(potionDesc);


        gridLayout->addLayout(verticalLayout_5, 3, 6, 1, 1);

        line_4 = new QFrame(InventoryUI);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 4, 1, 1);


        retranslateUi(InventoryUI);

        QMetaObject::connectSlotsByName(InventoryUI);
    } // setupUi

    void retranslateUi(QDialog *InventoryUI)
    {
        InventoryUI->setWindowTitle(QApplication::translate("InventoryUI", "Dialog", nullptr));
        drink3->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        drink1->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        use_s4->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        currentItemImg->setText(QApplication::translate("InventoryUI", "TextLabel", nullptr));
        currentItemDesc->setText(QApplication::translate("InventoryUI", "TextLabel", nullptr));
        currentWeaponLabel->setText(QApplication::translate("InventoryUI", "WeaponName", nullptr));
        weaponPower->setText(QApplication::translate("InventoryUI", "POWER", nullptr));
        weaponSpeed->setText(QApplication::translate("InventoryUI", "SPEED", nullptr));
        use_s5->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s2->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s1->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s6->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s8->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s9->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s7->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        use_s3->setText(QApplication::translate("InventoryUI", "USE", nullptr));
        drink5->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        drink6->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        drink2->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        drink4->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
        potionImage->setText(QString());
        potionName->setText(QString());
        potionDesc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InventoryUI: public Ui_InventoryUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYUI_H
