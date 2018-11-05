#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T14:23:22
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = Planet_Invasion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    inventoryui.cpp \
    inventory.cpp \
    item.cpp \
    weapon.cpp \
    keyitem.cpp \
    fileparser.cpp \
    clickableqlabel.cpp \
    charactercreator.cpp \
    chapterscreen.cpp \
    player.cpp \
    race.cpp \
    gamescreen.cpp \
    room.cpp \
    chapter2.cpp \
    chapter1.cpp

HEADERS += \
        mainwindow.h \
    inventoryui.h \
    inventory.h \
    item.h \
    weapon.h \
    keyitem.h \
    fileparser.h \
    clickableqlabel.h \
    charactercreator.h \
    chapterscreen.h \
    player.h \
    race.h \
    gamescreen.h \
    room.h \
    chapter2.h \
    chapter1.h

FORMS += \
        mainwindow.ui \
    inventoryui.ui \
    charactercreator.ui \
    chapterscreen.ui \
    gamescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
