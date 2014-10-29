/****************************************************************************
** Meta object code from reading C++ file 'abstractcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "abstractcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractControl_t {
    QByteArrayData data[14];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AbstractControl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AbstractControl_t qt_meta_stringdata_AbstractControl = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 9),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 4),
QT_MOC_LITERAL(4, 32, 4),
QT_MOC_LITERAL(5, 37, 4),
QT_MOC_LITERAL(6, 42, 14),
QT_MOC_LITERAL(7, 57, 15),
QT_MOC_LITERAL(8, 73, 18),
QT_MOC_LITERAL(9, 92, 13),
QT_MOC_LITERAL(10, 106, 13),
QT_MOC_LITERAL(11, 120, 15),
QT_MOC_LITERAL(12, 136, 16),
QT_MOC_LITERAL(13, 153, 17)
    },
    "AbstractControl\0playPause\0\0next\0prev\0"
    "stop\0volumeSelected\0elapsedSelected\0"
    "onPlayPauseClicked\0onPrevClicked\0"
    "onNextClicked\0onVolumeChanged\0"
    "onElapsedChanged\0onDurationChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,
       3,    0,   75,    2, 0x06,
       4,    0,   76,    2, 0x06,
       5,    0,   77,    2, 0x06,
       6,    1,   78,    2, 0x06,
       7,    1,   81,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    0,   84,    2, 0x0a,
       9,    0,   85,    2, 0x0a,
      10,    0,   86,    2, 0x0a,
      11,    1,   87,    2, 0x0a,
      12,    1,   90,    2, 0x0a,
      13,    1,   93,    2, 0x0a,

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void AbstractControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractControl *_t = static_cast<AbstractControl *>(_o);
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
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::playPause)) {
                *result = 0;
            }
        }
        {
            typedef void (AbstractControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::next)) {
                *result = 1;
            }
        }
        {
            typedef void (AbstractControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::prev)) {
                *result = 2;
            }
        }
        {
            typedef void (AbstractControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::stop)) {
                *result = 3;
            }
        }
        {
            typedef void (AbstractControl::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::volumeSelected)) {
                *result = 4;
            }
        }
        {
            typedef void (AbstractControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractControl::elapsedSelected)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject AbstractControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractControl.data,
      qt_meta_data_AbstractControl,  qt_static_metacall, 0, 0}
};


const QMetaObject *AbstractControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractControl.stringdata))
        return static_cast<void*>(const_cast< AbstractControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AbstractControl::playPause()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AbstractControl::next()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AbstractControl::prev()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void AbstractControl::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void AbstractControl::volumeSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AbstractControl::elapsedSelected(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
