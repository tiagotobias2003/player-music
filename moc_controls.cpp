/****************************************************************************
** Meta object code from reading C++ file 'controls.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "controls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Controls_t {
    QByteArrayData data[18];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Controls_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Controls_t qt_meta_stringdata_Controls = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 9),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 4),
QT_MOC_LITERAL(4, 25, 4),
QT_MOC_LITERAL(5, 30, 4),
QT_MOC_LITERAL(6, 35, 14),
QT_MOC_LITERAL(7, 50, 15),
QT_MOC_LITERAL(8, 66, 18),
QT_MOC_LITERAL(9, 85, 13),
QT_MOC_LITERAL(10, 99, 13),
QT_MOC_LITERAL(11, 113, 15),
QT_MOC_LITERAL(12, 129, 5),
QT_MOC_LITERAL(13, 135, 16),
QT_MOC_LITERAL(14, 152, 17),
QT_MOC_LITERAL(15, 170, 20),
QT_MOC_LITERAL(16, 191, 5),
QT_MOC_LITERAL(17, 197, 16)
    },
    "Controls\0playPause\0\0next\0prev\0stop\0"
    "volumeSelected\0elapsedSelected\0"
    "onPlayPauseClicked\0onPrevClicked\0"
    "onNextClicked\0onVolumeChanged\0value\0"
    "onElapsedChanged\0onDurationChanged\0"
    "onPlayerStateChanged\0state\0onSliderReleased\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controls[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06,
       3,    0,   85,    2, 0x06,
       4,    0,   86,    2, 0x06,
       5,    0,   87,    2, 0x06,
       6,    1,   88,    2, 0x06,
       7,    1,   91,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    0,   94,    2, 0x0a,
       9,    0,   95,    2, 0x0a,
      10,    0,   96,    2, 0x0a,
      11,    1,   97,    2, 0x0a,
      13,    1,  100,    2, 0x0a,
      14,    1,  103,    2, 0x0a,
      15,    1,  106,    2, 0x0a,
      17,    0,  109,    2, 0x09,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,

       0        // eod
};

void Controls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Controls *_t = static_cast<Controls *>(_o);
        switch (_id) {
        case 0: _t->playPause(); break;
        case 1: _t->next(); break;
        case 2: _t->prev(); break;
        case 3: _t->stop(); break;
        case 4: _t->volumeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->elapsedSelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->onPlayPauseClicked(); break;
        case 7: _t->onPrevClicked(); break;
        case 8: _t->onNextClicked(); break;
        case 9: _t->onVolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onElapsedChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->onPlayerStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onSliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Controls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::playPause)) {
                *result = 0;
            }
        }
        {
            typedef void (Controls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::next)) {
                *result = 1;
            }
        }
        {
            typedef void (Controls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::prev)) {
                *result = 2;
            }
        }
        {
            typedef void (Controls::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::stop)) {
                *result = 3;
            }
        }
        {
            typedef void (Controls::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::volumeSelected)) {
                *result = 4;
            }
        }
        {
            typedef void (Controls::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Controls::elapsedSelected)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Controls::staticMetaObject = {
    { &AbstractControl::staticMetaObject, qt_meta_stringdata_Controls.data,
      qt_meta_data_Controls,  qt_static_metacall, 0, 0}
};


const QMetaObject *Controls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Controls.stringdata))
        return static_cast<void*>(const_cast< Controls*>(this));
    return AbstractControl::qt_metacast(_clname);
}

int Controls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Controls::playPause()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Controls::next()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Controls::prev()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Controls::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Controls::volumeSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Controls::elapsedSelected(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
