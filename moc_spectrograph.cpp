/****************************************************************************
** Meta object code from reading C++ file 'spectrograph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spectrograph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrograph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Spectrograph_t {
    QByteArrayData data[24];
    char stringdata[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Spectrograph_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Spectrograph_t qt_meta_stringdata_Spectrograph = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 10),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 1),
QT_MOC_LITERAL(5, 40, 11),
QT_MOC_LITERAL(6, 52, 16),
QT_MOC_LITERAL(7, 69, 9),
QT_MOC_LITERAL(8, 79, 10),
QT_MOC_LITERAL(9, 90, 12),
QT_MOC_LITERAL(10, 103, 11),
QT_MOC_LITERAL(11, 115, 13),
QT_MOC_LITERAL(12, 129, 10),
QT_MOC_LITERAL(13, 140, 4),
QT_MOC_LITERAL(14, 145, 5),
QT_MOC_LITERAL(15, 151, 16),
QT_MOC_LITERAL(16, 168, 18),
QT_MOC_LITERAL(17, 187, 19),
QT_MOC_LITERAL(18, 207, 19),
QT_MOC_LITERAL(19, 227, 19),
QT_MOC_LITERAL(20, 247, 19),
QT_MOC_LITERAL(21, 267, 19),
QT_MOC_LITERAL(22, 287, 13),
QT_MOC_LITERAL(23, 301, 18)
    },
    "Spectrograph\0paintEvent\0\0QPaintEvent*\0"
    "e\0loadSamples\0QVector<double>&\0_spectrum\0"
    "timerEvent\0QTimerEvent*\0resizeEvent\0"
    "QResizeEvent*\0loadLevels\0left\0right\0"
    "contextMenuEvent\0QContextMenuEvent*\0"
    "changeSpectrograph1\0changeSpectrograph2\0"
    "changeSpectrograph3\0changeSpectrograph4\0"
    "changeSpectrograph5\0selectBgColor\0"
    "selectElementColor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spectrograph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a,
       5,    1,   82,    2, 0x0a,
       8,    1,   85,    2, 0x0a,
      10,    1,   88,    2, 0x0a,
      12,    2,   91,    2, 0x0a,
      15,    1,   96,    2, 0x0a,
      17,    0,   99,    2, 0x0a,
      18,    0,  100,    2, 0x0a,
      19,    0,  101,    2, 0x0a,
      20,    0,  102,    2, 0x0a,
      21,    0,  103,    2, 0x0a,
      22,    0,  104,    2, 0x0a,
      23,    0,  105,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   13,   14,
    QMetaType::Void, 0x80000000 | 16,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Spectrograph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Spectrograph *_t = static_cast<Spectrograph *>(_o);
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->loadSamples((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 2: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 3: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 4: _t->loadLevels((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 6: _t->changeSpectrograph1(); break;
        case 7: _t->changeSpectrograph2(); break;
        case 8: _t->changeSpectrograph3(); break;
        case 9: _t->changeSpectrograph4(); break;
        case 10: _t->changeSpectrograph5(); break;
        case 11: _t->selectBgColor(); break;
        case 12: _t->selectElementColor(); break;
        default: ;
        }
    }
}

const QMetaObject Spectrograph::staticMetaObject = {
    { &AbstractSpectrograph::staticMetaObject, qt_meta_stringdata_Spectrograph.data,
      qt_meta_data_Spectrograph,  qt_static_metacall, 0, 0}
};


const QMetaObject *Spectrograph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spectrograph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Spectrograph.stringdata))
        return static_cast<void*>(const_cast< Spectrograph*>(this));
    return AbstractSpectrograph::qt_metacast(_clname);
}

int Spectrograph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSpectrograph::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
