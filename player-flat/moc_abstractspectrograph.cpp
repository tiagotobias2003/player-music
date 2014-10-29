/****************************************************************************
** Meta object code from reading C++ file 'abstractspectrograph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "abstractspectrograph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractspectrograph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractSpectrograph_t {
    QByteArrayData data[5];
    char stringdata[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AbstractSpectrograph_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AbstractSpectrograph_t qt_meta_stringdata_AbstractSpectrograph = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 11),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 16),
QT_MOC_LITERAL(4, 51, 10)
    },
    "AbstractSpectrograph\0loadSamples\0\0"
    "QVector<double>&\0loadLevels\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractSpectrograph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a,
       4,    2,   27,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,

       0        // eod
};

void AbstractSpectrograph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractSpectrograph *_t = static_cast<AbstractSpectrograph *>(_o);
        switch (_id) {
        case 0: _t->loadSamples((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 1: _t->loadLevels((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject AbstractSpectrograph::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractSpectrograph.data,
      qt_meta_data_AbstractSpectrograph,  qt_static_metacall, 0, 0}
};


const QMetaObject *AbstractSpectrograph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractSpectrograph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractSpectrograph.stringdata))
        return static_cast<void*>(const_cast< AbstractSpectrograph*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractSpectrograph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
