/****************************************************************************
** Meta object code from reading C++ file 'chapterscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/mitta/Desktop/Planet_Invasion/chapterscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chapterscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChapterScreen_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChapterScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChapterScreen_t qt_meta_stringdata_ChapterScreen = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ChapterScreen"
QT_MOC_LITERAL(1, 14, 10), // "mainwindow"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "handlebutton"
QT_MOC_LITERAL(4, 39, 6), // "string"
QT_MOC_LITERAL(5, 46, 14), // "on_ch1_clicked"
QT_MOC_LITERAL(6, 61, 14), // "on_ch2_clicked"
QT_MOC_LITERAL(7, 76, 14) // "on_ch3_clicked"

    },
    "ChapterScreen\0mainwindow\0\0handlebutton\0"
    "string\0on_ch1_clicked\0on_ch2_clicked\0"
    "on_ch3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChapterScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChapterScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChapterScreen *_t = static_cast<ChapterScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainwindow(); break;
        case 1: _t->handlebutton((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->on_ch1_clicked(); break;
        case 3: _t->on_ch2_clicked(); break;
        case 4: _t->on_ch3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChapterScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChapterScreen::mainwindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChapterScreen::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChapterScreen.data,
      qt_meta_data_ChapterScreen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChapterScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChapterScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChapterScreen.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChapterScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ChapterScreen::mainwindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
