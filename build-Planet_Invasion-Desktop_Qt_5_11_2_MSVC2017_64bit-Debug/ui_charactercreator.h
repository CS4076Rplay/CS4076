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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharacterCreator
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QLabel *characterImg;
    QLabel *char_type;
    QComboBox *raceSelector;
    QLabel *charDesc;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *unameSpace;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QPushButton *pushButton;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QProgressBar *healthBar;
    QFrame *line_3;
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
    QFrame *line;

    void setupUi(QDialog *CharacterCreator)
    {
        if (CharacterCreator->objectName().isEmpty())
            CharacterCreator->setObjectName(QStringLiteral("CharacterCreator"));
        CharacterCreator->resize(780, 553);
        horizontalLayout = new QHBoxLayout(CharacterCreator);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(CharacterCreator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("background:rgb(255, 255, 255);\n"
"background-color:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69))"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 599, 531));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 28pt \"Franklin Gothic Demi\";\n"
""));

        verticalLayout->addWidget(label_3);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("background:transparent\n"
""));
        characterImg = new QLabel(groupBox_3);
        characterImg->setObjectName(QStringLiteral("characterImg"));
        characterImg->setGeometry(QRect(100, 30, 191, 191));
        sizePolicy.setHeightForWidth(characterImg->sizePolicy().hasHeightForWidth());
        characterImg->setSizePolicy(sizePolicy);
        characterImg->setStyleSheet(QStringLiteral("background:transparent;"));
        characterImg->setPixmap(QPixmap(QString::fromUtf8(":/Images/Characters/Shadowalker.png")));
        char_type = new QLabel(groupBox_3);
        char_type->setObjectName(QStringLiteral("char_type"));
        char_type->setGeometry(QRect(-40, -30, 511, 281));
        char_type->setStyleSheet(QLatin1String("filter:blur(100px);\n"
""));
        char_type->setPixmap(QPixmap(QString::fromUtf8(":/Images/Characters/sw_ic.png")));
        char_type->raise();
        characterImg->raise();

        verticalLayout->addWidget(groupBox_3);

        raceSelector = new QComboBox(widget);
        raceSelector->addItem(QString());
        raceSelector->addItem(QString());
        raceSelector->addItem(QString());
        raceSelector->addItem(QString());
        raceSelector->setObjectName(QStringLiteral("raceSelector"));

        verticalLayout->addWidget(raceSelector);

        charDesc = new QLabel(widget);
        charDesc->setObjectName(QStringLiteral("charDesc"));
        sizePolicy.setHeightForWidth(charDesc->sizePolicy().hasHeightForWidth());
        charDesc->setSizePolicy(sizePolicy);
        charDesc->setStyleSheet(QLatin1String("background:transparent;\n"
"font: italic 10pt \"Lucida Sans\";\n"
"padding: 20px;\n"
"color:rgb(0, 0, 0)"));
        charDesc->setFrameShape(QFrame::StyledPanel);
        charDesc->setFrameShadow(QFrame::Plain);
        charDesc->setLineWidth(2);
        charDesc->setWordWrap(true);

        verticalLayout->addWidget(charDesc);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CharacterCreator);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(121, 73, 37, 255), stop:1 rgba(69, 40, 0, 255))"));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 0, 361, 531));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 15, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_9->addWidget(label);

        unameSpace = new QLineEdit(widget1);
        unameSpace->setObjectName(QStringLiteral("unameSpace"));
        sizePolicy.setHeightForWidth(unameSpace->sizePolicy().hasHeightForWidth());
        unameSpace->setSizePolicy(sizePolicy);
        unameSpace->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout_9->addWidget(unameSpace);


        verticalLayout_2->addLayout(horizontalLayout_9);

        line_2 = new QFrame(widget1);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_10->addWidget(label_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QLatin1String("background:transparent;\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(49, 89, 1, 255), stop:1 rgba(46, 181, 0, 255));\n"
"color:rgb(255, 255, 255)"));

        horizontalLayout_10->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_10);

        line_4 = new QFrame(widget1);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_7->addWidget(label_7);

        healthBar = new QProgressBar(widget1);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(healthBar->sizePolicy().hasHeightForWidth());
        healthBar->setSizePolicy(sizePolicy2);
        healthBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));
        healthBar->setValue(100);

        horizontalLayout_7->addWidget(healthBar);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout_6);

        line_3 = new QFrame(widget1);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_6->addWidget(label_6);

        strBar = new QProgressBar(widget1);
        strBar->setObjectName(QStringLiteral("strBar"));
        sizePolicy2.setHeightForWidth(strBar->sizePolicy().hasHeightForWidth());
        strBar->setSizePolicy(sizePolicy2);
        strBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));
        strBar->setValue(30);

        horizontalLayout_6->addWidget(strBar);


        verticalLayout_7->addLayout(horizontalLayout_6);

        strSlide = new QSlider(widget1);
        strSlide->setObjectName(QStringLiteral("strSlide"));
        strSlide->setEnabled(false);
        sizePolicy2.setHeightForWidth(strSlide->sizePolicy().hasHeightForWidth());
        strSlide->setSizePolicy(sizePolicy2);
        strSlide->setMinimum(30);
        strSlide->setValue(30);
        strSlide->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(strSlide);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_8->addWidget(label_8);

        defBar = new QProgressBar(widget1);
        defBar->setObjectName(QStringLiteral("defBar"));
        sizePolicy2.setHeightForWidth(defBar->sizePolicy().hasHeightForWidth());
        defBar->setSizePolicy(sizePolicy2);
        defBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));
        defBar->setValue(30);

        horizontalLayout_8->addWidget(defBar);


        verticalLayout_5->addLayout(horizontalLayout_8);

        defSlide = new QSlider(widget1);
        defSlide->setObjectName(QStringLiteral("defSlide"));
        defSlide->setEnabled(false);
        sizePolicy2.setHeightForWidth(defSlide->sizePolicy().hasHeightForWidth());
        defSlide->setSizePolicy(sizePolicy2);
        defSlide->setMinimum(30);
        defSlide->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(defSlide);


        verticalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_5->addWidget(label_5);

        spdBar = new QProgressBar(widget1);
        spdBar->setObjectName(QStringLiteral("spdBar"));
        sizePolicy2.setHeightForWidth(spdBar->sizePolicy().hasHeightForWidth());
        spdBar->setSizePolicy(sizePolicy2);
        spdBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));
        spdBar->setValue(30);

        horizontalLayout_5->addWidget(spdBar);


        verticalLayout_4->addLayout(horizontalLayout_5);

        spdSlide = new QSlider(widget1);
        spdSlide->setObjectName(QStringLiteral("spdSlide"));
        spdSlide->setEnabled(false);
        sizePolicy2.setHeightForWidth(spdSlide->sizePolicy().hasHeightForWidth());
        spdSlide->setSizePolicy(sizePolicy2);
        spdSlide->setMinimum(30);
        spdSlide->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(spdSlide);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color: rgb(255, 249, 217)"));

        horizontalLayout_4->addWidget(label_4);

        intelBar = new QProgressBar(widget1);
        intelBar->setObjectName(QStringLiteral("intelBar"));
        sizePolicy2.setHeightForWidth(intelBar->sizePolicy().hasHeightForWidth());
        intelBar->setSizePolicy(sizePolicy2);
        intelBar->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 10pt \"Modern No. 20\";\n"
"color:rgb(255, 255, 255)"));
        intelBar->setValue(30);

        horizontalLayout_4->addWidget(intelBar);


        verticalLayout_3->addLayout(horizontalLayout_4);

        intelSlide = new QSlider(widget1);
        intelSlide->setObjectName(QStringLiteral("intelSlide"));
        intelSlide->setEnabled(false);
        sizePolicy2.setHeightForWidth(intelSlide->sizePolicy().hasHeightForWidth());
        intelSlide->setSizePolicy(sizePolicy2);
        intelSlide->setMinimum(30);
        intelSlide->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(intelSlide);


        verticalLayout_2->addLayout(verticalLayout_3);

        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, -20, 3, 531));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(CharacterCreator);
        QObject::connect(intelSlide, SIGNAL(valueChanged(int)), intelBar, SLOT(setValue(int)));
        QObject::connect(spdSlide, SIGNAL(valueChanged(int)), spdBar, SLOT(setValue(int)));
        QObject::connect(defSlide, SIGNAL(valueChanged(int)), defBar, SLOT(setValue(int)));
        QObject::connect(strSlide, SIGNAL(valueChanged(int)), strBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(CharacterCreator);
    } // setupUi

    void retranslateUi(QDialog *CharacterCreator)
    {
        CharacterCreator->setWindowTitle(QApplication::translate("CharacterCreator", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("CharacterCreator", "CHOOSE A RACE", nullptr));
        groupBox_3->setTitle(QString());
        characterImg->setText(QString());
        char_type->setText(QString());
        raceSelector->setItemText(0, QApplication::translate("CharacterCreator", "SHADOWALKER", nullptr));
        raceSelector->setItemText(1, QApplication::translate("CharacterCreator", "MOONMAGE", nullptr));
        raceSelector->setItemText(2, QApplication::translate("CharacterCreator", "KNIGHT", nullptr));
        raceSelector->setItemText(3, QApplication::translate("CharacterCreator", "AI", nullptr));

        charDesc->setText(QApplication::translate("CharacterCreator", "Shadowalker are A Race of Amazonian Warriors Trained in The Art Of Stealth, They Use Thier Speed And Intelligence to capture or Kill their Target, It is said that Shadowalker have a unique skill of Invisibilty when they hold their breath", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("CharacterCreator", "Name:", nullptr));
        unameSpace->setInputMask(QString());
        unameSpace->setPlaceholderText(QApplication::translate("CharacterCreator", "Enter A Name", nullptr));
        label_2->setText(QApplication::translate("CharacterCreator", "Antributes:", nullptr));
        pushButton->setText(QApplication::translate("CharacterCreator", "SAVE", nullptr));
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
