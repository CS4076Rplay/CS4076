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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InventoryUI
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *potion_slot5;
    QPushButton *drink5;
    QVBoxLayout *potion_slot6;
    QPushButton *drink6;
    QVBoxLayout *potion_slot1;
    QPushButton *drink1;
    QVBoxLayout *potion_slot2;
    QPushButton *drink2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QVBoxLayout *slot2;
    QPushButton *use_s2;
    QVBoxLayout *slot4;
    QPushButton *use_s4;
    QVBoxLayout *slot5;
    QPushButton *use_s5;
    QVBoxLayout *slot3;
    QPushButton *use_s3;
    QVBoxLayout *slot8;
    QPushButton *use_s8;
    QVBoxLayout *slot6;
    QPushButton *use_s6;
    QVBoxLayout *slot7;
    QPushButton *use_s7;
    QVBoxLayout *slot9;
    QPushButton *use_s9;
    QVBoxLayout *potion_slot4;
    QPushButton *drink4;
    QVBoxLayout *slot1;
    QPushButton *use_s1;
    QVBoxLayout *potion_slot3;
    QPushButton *drink3;
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
    QFrame *line_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *potionImage;
    QLabel *potionName;
    QLabel *potionDesc;

    void setupUi(QDialog *InventoryUI)
    {
        if (InventoryUI->objectName().isEmpty())
            InventoryUI->setObjectName(QStringLiteral("InventoryUI"));
        InventoryUI->resize(545, 394);
        groupBox = new QGroupBox(InventoryUI);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 511, 361));
        groupBox->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(80, 41, 0, 255), stop:1 rgba(117, 92, 8, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(49, 16, 0, 255), stop:1 rgba(107, 73, 0, 255));"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        potion_slot5 = new QVBoxLayout();
        potion_slot5->setObjectName(QStringLiteral("potion_slot5"));
        drink5 = new QPushButton(groupBox);
        drink5->setObjectName(QStringLiteral("drink5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(drink5->sizePolicy().hasHeightForWidth());
        drink5->setSizePolicy(sizePolicy);
        drink5->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot5->addWidget(drink5);


        gridLayout_2->addLayout(potion_slot5, 2, 4, 1, 1);

        potion_slot6 = new QVBoxLayout();
        potion_slot6->setObjectName(QStringLiteral("potion_slot6"));
        drink6 = new QPushButton(groupBox);
        drink6->setObjectName(QStringLiteral("drink6"));
        sizePolicy.setHeightForWidth(drink6->sizePolicy().hasHeightForWidth());
        drink6->setSizePolicy(sizePolicy);
        drink6->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot6->addWidget(drink6);


        gridLayout_2->addLayout(potion_slot6, 2, 5, 1, 1);

        potion_slot1 = new QVBoxLayout();
        potion_slot1->setObjectName(QStringLiteral("potion_slot1"));
        drink1 = new QPushButton(groupBox);
        drink1->setObjectName(QStringLiteral("drink1"));
        sizePolicy.setHeightForWidth(drink1->sizePolicy().hasHeightForWidth());
        drink1->setSizePolicy(sizePolicy);
        drink1->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot1->addWidget(drink1);


        gridLayout_2->addLayout(potion_slot1, 0, 4, 1, 1);

        potion_slot2 = new QVBoxLayout();
        potion_slot2->setObjectName(QStringLiteral("potion_slot2"));
        drink2 = new QPushButton(groupBox);
        drink2->setObjectName(QStringLiteral("drink2"));
        sizePolicy.setHeightForWidth(drink2->sizePolicy().hasHeightForWidth());
        drink2->setSizePolicy(sizePolicy);
        drink2->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot2->addWidget(drink2);


        gridLayout_2->addLayout(potion_slot2, 0, 5, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 3, 1, 1);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 3, 1, 1);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 2, 3, 1, 1);

        slot2 = new QVBoxLayout();
        slot2->setObjectName(QStringLiteral("slot2"));
        use_s2 = new QPushButton(groupBox);
        use_s2->setObjectName(QStringLiteral("use_s2"));
        use_s2->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s2->sizePolicy().hasHeightForWidth());
        use_s2->setSizePolicy(sizePolicy);
        use_s2->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)\n"
""));

        slot2->addWidget(use_s2);


        gridLayout_2->addLayout(slot2, 0, 1, 1, 1);

        slot4 = new QVBoxLayout();
        slot4->setObjectName(QStringLiteral("slot4"));
        use_s4 = new QPushButton(groupBox);
        use_s4->setObjectName(QStringLiteral("use_s4"));
        use_s4->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s4->sizePolicy().hasHeightForWidth());
        use_s4->setSizePolicy(sizePolicy);
        use_s4->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        slot4->addWidget(use_s4);


        gridLayout_2->addLayout(slot4, 1, 1, 1, 1);

        slot5 = new QVBoxLayout();
        slot5->setObjectName(QStringLiteral("slot5"));
        use_s5 = new QPushButton(groupBox);
        use_s5->setObjectName(QStringLiteral("use_s5"));
        use_s5->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s5->sizePolicy().hasHeightForWidth());
        use_s5->setSizePolicy(sizePolicy);
        use_s5->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        slot5->addWidget(use_s5);


        gridLayout_2->addLayout(slot5, 1, 2, 1, 1);

        slot3 = new QVBoxLayout();
        slot3->setObjectName(QStringLiteral("slot3"));
        use_s3 = new QPushButton(groupBox);
        use_s3->setObjectName(QStringLiteral("use_s3"));
        use_s3->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s3->sizePolicy().hasHeightForWidth());
        use_s3->setSizePolicy(sizePolicy);
        use_s3->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        slot3->addWidget(use_s3);


        gridLayout_2->addLayout(slot3, 0, 2, 1, 1);

        slot8 = new QVBoxLayout();
        slot8->setObjectName(QStringLiteral("slot8"));
        use_s8 = new QPushButton(groupBox);
        use_s8->setObjectName(QStringLiteral("use_s8"));
        use_s8->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s8->sizePolicy().hasHeightForWidth());
        use_s8->setSizePolicy(sizePolicy);
        use_s8->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)\n"
""));

        slot8->addWidget(use_s8);


        gridLayout_2->addLayout(slot8, 2, 1, 1, 1);

        slot6 = new QVBoxLayout();
        slot6->setObjectName(QStringLiteral("slot6"));
        use_s6 = new QPushButton(groupBox);
        use_s6->setObjectName(QStringLiteral("use_s6"));
        use_s6->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s6->sizePolicy().hasHeightForWidth());
        use_s6->setSizePolicy(sizePolicy);
        use_s6->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        slot6->addWidget(use_s6);


        gridLayout_2->addLayout(slot6, 1, 0, 1, 1);

        slot7 = new QVBoxLayout();
        slot7->setObjectName(QStringLiteral("slot7"));
        use_s7 = new QPushButton(groupBox);
        use_s7->setObjectName(QStringLiteral("use_s7"));
        use_s7->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s7->sizePolicy().hasHeightForWidth());
        use_s7->setSizePolicy(sizePolicy);
        use_s7->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)\n"
""));

        slot7->addWidget(use_s7);


        gridLayout_2->addLayout(slot7, 2, 0, 1, 1);

        slot9 = new QVBoxLayout();
        slot9->setObjectName(QStringLiteral("slot9"));
        use_s9 = new QPushButton(groupBox);
        use_s9->setObjectName(QStringLiteral("use_s9"));
        use_s9->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s9->sizePolicy().hasHeightForWidth());
        use_s9->setSizePolicy(sizePolicy);
        use_s9->setAutoFillBackground(false);
        use_s9->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)\n"
""));

        slot9->addWidget(use_s9);


        gridLayout_2->addLayout(slot9, 2, 2, 1, 1);

        potion_slot4 = new QVBoxLayout();
        potion_slot4->setObjectName(QStringLiteral("potion_slot4"));
        drink4 = new QPushButton(groupBox);
        drink4->setObjectName(QStringLiteral("drink4"));
        sizePolicy.setHeightForWidth(drink4->sizePolicy().hasHeightForWidth());
        drink4->setSizePolicy(sizePolicy);
        drink4->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot4->addWidget(drink4);


        gridLayout_2->addLayout(potion_slot4, 1, 5, 1, 1);

        slot1 = new QVBoxLayout();
        slot1->setObjectName(QStringLiteral("slot1"));
        slot1->setContentsMargins(0, 0, 0, 0);
        use_s1 = new QPushButton(groupBox);
        use_s1->setObjectName(QStringLiteral("use_s1"));
        use_s1->setEnabled(false);
        sizePolicy.setHeightForWidth(use_s1->sizePolicy().hasHeightForWidth());
        use_s1->setSizePolicy(sizePolicy);
        use_s1->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(140, 1, 255, 255), stop:1 rgba(0, 255, 242, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        slot1->addWidget(use_s1);


        gridLayout_2->addLayout(slot1, 0, 0, 1, 1);

        potion_slot3 = new QVBoxLayout();
        potion_slot3->setObjectName(QStringLiteral("potion_slot3"));
        drink3 = new QPushButton(groupBox);
        drink3->setObjectName(QStringLiteral("drink3"));
        sizePolicy.setHeightForWidth(drink3->sizePolicy().hasHeightForWidth());
        drink3->setSizePolicy(sizePolicy);
        drink3->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        potion_slot3->addWidget(drink3);


        gridLayout_2->addLayout(potion_slot3, 1, 4, 1, 1);

        aboutWeapon = new QHBoxLayout();
        aboutWeapon->setSpacing(15);
        aboutWeapon->setObjectName(QStringLiteral("aboutWeapon"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        currentItemImg = new QLabel(groupBox);
        currentItemImg->setObjectName(QStringLiteral("currentItemImg"));
        sizePolicy.setHeightForWidth(currentItemImg->sizePolicy().hasHeightForWidth());
        currentItemImg->setSizePolicy(sizePolicy);
        currentItemImg->setStyleSheet(QLatin1String("background:transparent;\n"
""));

        verticalLayout->addWidget(currentItemImg);

        currentItemDesc = new QLabel(groupBox);
        currentItemDesc->setObjectName(QStringLiteral("currentItemDesc"));
        sizePolicy.setHeightForWidth(currentItemDesc->sizePolicy().hasHeightForWidth());
        currentItemDesc->setSizePolicy(sizePolicy);
        currentItemDesc->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 7pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));
        currentItemDesc->setWordWrap(true);

        verticalLayout->addWidget(currentItemDesc);


        aboutWeapon->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        currentWeaponLabel = new QLabel(groupBox);
        currentWeaponLabel->setObjectName(QStringLiteral("currentWeaponLabel"));
        currentWeaponLabel->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        verticalLayout_2->addWidget(currentWeaponLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        weaponPower = new QLabel(groupBox);
        weaponPower->setObjectName(QStringLiteral("weaponPower"));
        weaponPower->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"color:rgb(255, 247, 234)"));

        horizontalLayout_3->addWidget(weaponPower);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setStyleSheet(QLatin1String("\n"
"\n"
"color:rgb(255, 247, 234)"));
        progressBar->setMaximum(10);
        progressBar->setValue(8);
        progressBar->setTextVisible(true);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        weaponSpeed = new QLabel(groupBox);
        weaponSpeed->setObjectName(QStringLiteral("weaponSpeed"));
        weaponSpeed->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"color:rgb(255, 247, 234)"));

        horizontalLayout_2->addWidget(weaponSpeed);

        progressBar_2 = new QProgressBar(groupBox);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        sizePolicy2.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy2);
        progressBar_2->setStyleSheet(QLatin1String("\n"
"\n"
"color:rgb(255, 247, 234)"));
        progressBar_2->setMaximum(10);
        progressBar_2->setValue(2);

        horizontalLayout_2->addWidget(progressBar_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        aboutWeapon->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(aboutWeapon, 3, 0, 1, 3);

        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 3, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        potionImage = new QLabel(groupBox);
        potionImage->setObjectName(QStringLiteral("potionImage"));
        potionImage->setStyleSheet(QLatin1String("background:transparent;\n"
"\n"
""));

        verticalLayout_5->addWidget(potionImage);

        potionName = new QLabel(groupBox);
        potionName->setObjectName(QStringLiteral("potionName"));
        potionName->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));

        verticalLayout_5->addWidget(potionName);

        potionDesc = new QLabel(groupBox);
        potionDesc->setObjectName(QStringLiteral("potionDesc"));
        potionDesc->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 8pt \"Papyrus\";\n"
"color:rgb(255, 247, 234)"));
        potionDesc->setWordWrap(true);

        verticalLayout_5->addWidget(potionDesc);


        gridLayout_2->addLayout(verticalLayout_5, 3, 5, 1, 1);


        retranslateUi(InventoryUI);

        QMetaObject::connectSlotsByName(InventoryUI);
    } // setupUi

    void retranslateUi(QDialog *InventoryUI)
    {
        InventoryUI->setWindowTitle(QApplication::translate("InventoryUI", "Dialog", nullptr));
        groupBox->setTitle(QString());
        drink5->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink5->setShortcut(QApplication::translate("InventoryUI", "5", nullptr));
#endif // QT_NO_SHORTCUT
        drink6->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink6->setShortcut(QApplication::translate("InventoryUI", "6", nullptr));
#endif // QT_NO_SHORTCUT
        drink1->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink1->setShortcut(QApplication::translate("InventoryUI", "1", nullptr));
#endif // QT_NO_SHORTCUT
        drink2->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink2->setShortcut(QApplication::translate("InventoryUI", "2", nullptr));
#endif // QT_NO_SHORTCUT
        use_s2->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s2->setShortcut(QApplication::translate("InventoryUI", "2", nullptr));
#endif // QT_NO_SHORTCUT
        use_s4->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s4->setShortcut(QApplication::translate("InventoryUI", "5", nullptr));
#endif // QT_NO_SHORTCUT
        use_s5->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s5->setShortcut(QApplication::translate("InventoryUI", "6", nullptr));
#endif // QT_NO_SHORTCUT
        use_s3->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s3->setShortcut(QApplication::translate("InventoryUI", "3", nullptr));
#endif // QT_NO_SHORTCUT
        use_s8->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s8->setShortcut(QApplication::translate("InventoryUI", "8", nullptr));
#endif // QT_NO_SHORTCUT
        use_s6->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s6->setShortcut(QApplication::translate("InventoryUI", "4", nullptr));
#endif // QT_NO_SHORTCUT
        use_s7->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s7->setShortcut(QApplication::translate("InventoryUI", "7", nullptr));
#endif // QT_NO_SHORTCUT
        use_s9->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s9->setShortcut(QApplication::translate("InventoryUI", "9", nullptr));
#endif // QT_NO_SHORTCUT
        drink4->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink4->setShortcut(QApplication::translate("InventoryUI", "4", nullptr));
#endif // QT_NO_SHORTCUT
        use_s1->setText(QApplication::translate("InventoryUI", "USE", nullptr));
#ifndef QT_NO_SHORTCUT
        use_s1->setShortcut(QApplication::translate("InventoryUI", "1", nullptr));
#endif // QT_NO_SHORTCUT
        drink3->setText(QApplication::translate("InventoryUI", "Drink", nullptr));
#ifndef QT_NO_SHORTCUT
        drink3->setShortcut(QApplication::translate("InventoryUI", "3", nullptr));
#endif // QT_NO_SHORTCUT
        currentItemImg->setText(QApplication::translate("InventoryUI", "TextLabel", nullptr));
        currentItemDesc->setText(QApplication::translate("InventoryUI", "TextLabel", nullptr));
        currentWeaponLabel->setText(QApplication::translate("InventoryUI", "WeaponName", nullptr));
        weaponPower->setText(QApplication::translate("InventoryUI", "POWER", nullptr));
        weaponSpeed->setText(QApplication::translate("InventoryUI", "SPEED", nullptr));
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
