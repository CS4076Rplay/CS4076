/********************************************************************************
** Form generated from reading UI file 'charactercreator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERCREATOR_H
#define UI_CHARACTERCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *characterImg;
    QComboBox *raceSelector;
    QVBoxLayout *verticalLayout_2;
    QLabel *characterName;
    QLabel *points;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QProgressBar *ahealthBar;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QProgressBar *aAtkBar;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QProgressBar *aDefBar;
    QSlider *horizontalSlider_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QProgressBar *aIntBar;
    QSlider *horizontalSlider_4;

    void setupUi(QDialog *CharacterCreator)
    {
        if (CharacterCreator->objectName().isEmpty())
            CharacterCreator->setObjectName(QStringLiteral("CharacterCreator"));
        CharacterCreator->resize(298, 329);
        horizontalLayout = new QHBoxLayout(CharacterCreator);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        characterImg = new QLabel(CharacterCreator);
        characterImg->setObjectName(QStringLiteral("characterImg"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(characterImg->sizePolicy().hasHeightForWidth());
        characterImg->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(characterImg);

        raceSelector = new QComboBox(CharacterCreator);
        raceSelector->setObjectName(QStringLiteral("raceSelector"));

        verticalLayout->addWidget(raceSelector);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        characterName = new QLabel(CharacterCreator);
        characterName->setObjectName(QStringLiteral("characterName"));

        verticalLayout_2->addWidget(characterName);

        points = new QLabel(CharacterCreator);
        points->setObjectName(QStringLiteral("points"));

        verticalLayout_2->addWidget(points);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(CharacterCreator);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        ahealthBar = new QProgressBar(CharacterCreator);
        ahealthBar->setObjectName(QStringLiteral("ahealthBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ahealthBar->sizePolicy().hasHeightForWidth());
        ahealthBar->setSizePolicy(sizePolicy1);
        ahealthBar->setValue(24);

        horizontalLayout_6->addWidget(ahealthBar);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalSlider = new QSlider(CharacterCreator);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(CharacterCreator);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        aAtkBar = new QProgressBar(CharacterCreator);
        aAtkBar->setObjectName(QStringLiteral("aAtkBar"));
        sizePolicy1.setHeightForWidth(aAtkBar->sizePolicy().hasHeightForWidth());
        aAtkBar->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        aAtkBar->setPalette(palette);
        aAtkBar->setValue(24);

        horizontalLayout_7->addWidget(aAtkBar);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalSlider_2 = new QSlider(CharacterCreator);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        sizePolicy1.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy1);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(horizontalSlider_2);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(CharacterCreator);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        aDefBar = new QProgressBar(CharacterCreator);
        aDefBar->setObjectName(QStringLiteral("aDefBar"));
        sizePolicy1.setHeightForWidth(aDefBar->sizePolicy().hasHeightForWidth());
        aDefBar->setSizePolicy(sizePolicy1);
        aDefBar->setValue(24);

        horizontalLayout_8->addWidget(aDefBar);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalSlider_3 = new QSlider(CharacterCreator);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(horizontalSlider_3);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(CharacterCreator);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        aIntBar = new QProgressBar(CharacterCreator);
        aIntBar->setObjectName(QStringLiteral("aIntBar"));
        sizePolicy1.setHeightForWidth(aIntBar->sizePolicy().hasHeightForWidth());
        aIntBar->setSizePolicy(sizePolicy1);
        aIntBar->setValue(24);

        horizontalLayout_9->addWidget(aIntBar);


        verticalLayout_8->addLayout(horizontalLayout_9);


        horizontalLayout_5->addLayout(verticalLayout_8);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalSlider_4 = new QSlider(CharacterCreator);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_4);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(CharacterCreator);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), ahealthBar, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), aAtkBar, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), aDefBar, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), aIntBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(CharacterCreator);
    } // setupUi

    void retranslateUi(QDialog *CharacterCreator)
    {
        CharacterCreator->setWindowTitle(QApplication::translate("CharacterCreator", "Dialog", nullptr));
        characterImg->setText(QApplication::translate("CharacterCreator", "TextLabel", nullptr));
        characterName->setText(QApplication::translate("CharacterCreator", "Name", nullptr));
        points->setText(QApplication::translate("CharacterCreator", "50/50 points left", nullptr));
        label_3->setText(QApplication::translate("CharacterCreator", "Health", nullptr));
        label_4->setText(QApplication::translate("CharacterCreator", "Attack", nullptr));
        label_5->setText(QApplication::translate("CharacterCreator", "Defence", nullptr));
        label_6->setText(QApplication::translate("CharacterCreator", "Intelligence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator: public Ui_CharacterCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERCREATOR_H
