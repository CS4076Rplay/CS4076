#-------------------------------------------------
#
# Project created by QtCreator 2018-11-01T14:23:22
#
#-------------------------------------------------

QT       += core gui multimedia
greaterThan(QT_MAJOR_VERSION, 4):QT +=widgets

TARGET = Planet_Invasion
TEMPLATE = app
INCLUDEPATH += .

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
CONFIG += resources_big
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
    intro.cpp \
    chapter.cpp \
    chapter1.cpp \
    chapter2.cpp \
    room.cpp \
    story.cpp \
    s_chapter.cpp \
    enemy.cpp \
    battle.cpp \
    hp.cpp \
    gamesscreenthread.cpp \
    chapter3.cpp \
    finalchapter.cpp \
    map.cpp \
    credits.cpp



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
    intro.h \
    chapter.h \
    chapter1.h \
    chapter2.h \
    room.h \
    story.h \
    s_chapter.h \
    enemy.h \
    battle.h \
    hp.h \
    gamesscreenthread.h \
    chapter3.h \
    finalchapter.h \
    map.h \
    credits.h


FORMS += \
        mainwindow.ui \
    inventoryui.ui \
    charactercreator.ui \
    chapterscreen.ui \
    gamescreen.ui \
    intro.ui \
    finalchapter.ui \
    map.ui \
    credits.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
