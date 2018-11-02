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
    QComboBox *comboBox;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *characterNameLabel;
    QLabel *AntributePointLabel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QProgressBar *healthBar;
    QSlider *healthSlide;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QProgressBar *strBar;
    QSlider *strSlide;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QProgressBar *defBar;
    QSlider *defSlide;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QProgressBar *spdBar;
    QSlider *spdSlide;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QProgressBar *intelBar;
    QSlider *intelSlide;

    void setupUi(QDialog *CharacterCreator)
    {
        if (CharacterCreator->objectName().isEmpty())
            CharacterCreator->setObjectName(QStringLiteral("CharacterCreator"));
        CharacterCreator->resize(780, 553);
        horizontalLayout = new QHBoxLayout(CharacterCreator);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        characterImg = new QLabel(CharacterCreator);
        characterImg->setObjectName(QStringLiteral("characterImg"));

        verticalLayout->addWidget(characterImg);

        comboBox = new QComboBox(CharacterCreator);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        label = new QLabel(CharacterCreator);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        characterNameLabel = new QLabel(CharacterCreator);
        characterNameLabel->setObjectName(QStringLiteral("characterNameLabel"));

        verticalLayout_2->addWidget(characterNameLabel);

        AntributePointLabel = new QLabel(CharacterCreator);
        AntributePointLabel->setObjectName(QStringLiteral("AntributePointLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AntributePointLabel->sizePolicy().hasHeightForWidth());
        AntributePointLabel->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(AntributePointLabel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(CharacterCreator);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        healthBar = new QProgressBar(CharacterCreator);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(healthBar->sizePolicy().hasHeightForWidth());
        healthBar->setSizePolicy(sizePolicy2);
        healthBar->setValue(0);

        horizontalLayout_7->addWidget(healthBar);


        verticalLayout_6->addLayout(horizontalLayout_7);

        healthSlide = new QSlider(CharacterCreator);
        healthSlide->setObjectName(QStringLiteral("healthSlide"));
        sizePolicy2.setHeightForWidth(healthSlide->sizePolicy().hasHeightForWidth());
        healthSlide->setSizePolicy(sizePolicy2);
        healthSlide->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(healthSlide);


        verticalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(CharacterCreator);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        strBar = new QProgressBar(CharacterCreator);
        strBar->setObjectName(QStringLiteral("strBar"));
        sizePolicy2.setHeightForWidth(strBar->sizePolicy().hasHeightForWidth());
        strBar->setSizePolicy(sizePolicy2);
        strBar->setValue(0);

        horizontalLayout_6->addWidget(strBar);


        verticalLayout_7->addLayout(horizontalLayout_6);

        strSlide = new QSlider(CharacterCreator);
        strSlide->setObjectName(QStringLiteral("strSlide"));
        sizePolicy2.setHeightForWidth(strSlide->sizePolicy().hasHeightForWidth());
        strSlide->setSizePolicy(sizePolicy2);
        strSlide->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(strSlide);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(CharacterCreator);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        defBar = new QProgressBar(CharacterCreator);
        defBar->setObjectName(QStringLiteral("defBar"));
        sizePolicy2.setHeightForWidth(defBar->sizePolicy().hasHeightForWidth());
        defBar->setSizePolicy(sizePolicy2);
        defBar->setValue(0);

        horizontalLayout_8->addWidget(defBar);


        verticalLayout_5->addLayout(horizontalLayout_8);

        defSlide = new QSlider(CharacterCreator);
        defSlide->setObjectName(QStringLiteral("defSlide"));
        sizePolicy2.setHeightForWidth(defSlide->sizePolicy().hasHeightForWidth());
        defSlide->setSizePolicy(sizePolicy2);
        defSlide->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(defSlide);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(CharacterCreator);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        spdBar = new QProgressBar(CharacterCreator);
        spdBar->setObjectName(QStringLiteral("spdBar"));
        sizePolicy2.setHeightForWidth(spdBar->sizePolicy().hasHeightForWidth());
        spdBar->setSizePolicy(sizePolicy2);
        spdBar->setValue(0);

        horizontalLayout_5->addWidget(spdBar);


        verticalLayout_4->addLayout(horizontalLayout_5);

        spdSlide = new QSlider(CharacterCreator);
        spdSlide->setObjectName(QStringLiteral("spdSlide"));
        sizePolicy2.setHeightForWidth(spdSlide->sizePolicy().hasHeightForWidth());
        spdSlide->setSizePolicy(sizePolicy2);
        spdSlide->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(spdSlide);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(CharacterCreator);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        intelBar = new QProgressBar(CharacterCreator);
        intelBar->setObjectName(QStringLiteral("intelBar"));
        sizePolicy2.setHeightForWidth(intelBar->sizePolicy().hasHeightForWidth());
        intelBar->setSizePolicy(sizePolicy2);
        intelBar->setValue(0);

        horizontalLayout_4->addWidget(intelBar);


        verticalLayout_3->addLayout(horizontalLayout_4);

        intelSlide = new QSlider(CharacterCreator);
        intelSlide->setObjectName(QStringLiteral("intelSlide"));
        sizePolicy2.setHeightForWidth(intelSlide->sizePolicy().hasHeightForWidth());
        intelSlide->setSizePolicy(sizePolicy2);
        intelSlide->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(intelSlide);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(CharacterCreator);
        QObject::connect(healthSlide, SIGNAL(valueChanged(int)), healthBar, SLOT(setValue(int)));
        QObject::connect(strSlide, SIGNAL(valueChanged(int)), strBar, SLOT(setValue(int)));
        QObject::connect(defSlide, SIGNAL(valueChanged(int)), defBar, SLOT(setValue(int)));
        QObject::connect(spdSlide, SIGNAL(valueChanged(int)), spdBar, SLOT(setValue(int)));
        QObject::connect(intelSlide, SIGNAL(valueChanged(int)), intelBar, SLOT(setValue(int)));
        QObject::connect(comboBox, SIGNAL(currentTextChanged(QString)), label, SLOT(setText(QString)));
        QObject::connect(comboBox, SIGNAL(currentTextChanged(QString)), characterImg, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(CharacterCreator);
    } // setupUi

    void retranslateUi(QDialog *CharacterCreator)
    {
        CharacterCreator->setWindowTitle(QApplication::translate("CharacterCreator", "Dialog", nullptr));
        characterImg->setText(QApplication::translate("CharacterCreator", "TextLabel", nullptr));
        comboBox->setItemText(0, QApplication::translate("CharacterCreator", "SHADOWALKER", nullptr));
        comboBox->setItemText(1, QApplication::translate("CharacterCreator", "MOONMAGE", nullptr));
        comboBox->setItemText(2, QApplication::translate("CharacterCreator", "BRUTE", nullptr));
        comboBox->setItemText(3, QApplication::translate("CharacterCreator", "AI", nullptr));

        label->setText(QApplication::translate("CharacterCreator", "TextLabel", nullptr));
        characterNameLabel->setText(QApplication::translate("CharacterCreator", "Name", nullptr));
        AntributePointLabel->setText(QApplication::translate("CharacterCreator", "50/50 points ", nullptr));
        label_7->setText(QApplication::translate("CharacterCreator", "HEALTH", nullptr));
        label_6->setText(QApplication::translate("CharacterCreator", "STRENGTH", nullptr));
        label_8->setText(QApplication::translate("CharacterCreator", "DEFENSE", nullptr));
        label_5->setText(QApplication::translate("CharacterCreator", "SPEED", nullptr));
        label_4->setText(QApplication::translate("CharacterCreator", "INTELLIGENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharacterCreator: public Ui_CharacterCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERCREATOR_H
