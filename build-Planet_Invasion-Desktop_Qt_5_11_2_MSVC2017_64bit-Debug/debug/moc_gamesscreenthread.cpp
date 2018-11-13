/****************************************************************************
** Meta object code from reading C++ file 'gamesscreenthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Planet_Invasion/gamesscreenthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamesscreenthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GamesScreenThread_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamesScreenThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamesScreenThread_t qt_meta_stringdata_GamesScreenThread = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GamesScreenThread"
QT_MOC_LITERAL(1, 18, 12), // "itemSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "Weapon*"
QT_MOC_LITERAL(4, 40, 13), // "refreshHealth"
QT_MOC_LITERAL(5, 54, 7), // "Player*"
QT_MOC_LITERAL(6, 62, 9), // "usePotion"
QT_MOC_LITERAL(7, 72, 3) // "Hp*"

    },
    "GamesScreenThread\0itemSelected\0\0Weapon*\0"
    "refreshHealth\0Player*\0usePotion\0Hp*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamesScreenThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void GamesScreenThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GamesScreenThread *_t = static_cast<GamesScreenThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< Weapon*(*)>(_a[1]))); break;
        case 1: _t->refreshHealth((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        case 2: _t->usePotion((*reinterpret_cast< Hp*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GamesScreenThread::*)(Weapon * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamesScreenThread::itemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GamesScreenThread::*)(Player * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamesScreenThread::refreshHealth)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GamesScreenThread::*)(Hp * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamesScreenThread::usePotion)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GamesScreenThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GamesScreenThread.data,
      qt_meta_data_GamesScreenThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GamesScreenThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamesScreenThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamesScreenThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int GamesScreenThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GamesScreenThread::itemSelected(Weapon * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GamesScreenThread::refreshHealth(Player * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GamesScreenThread::usePotion(Hp * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
