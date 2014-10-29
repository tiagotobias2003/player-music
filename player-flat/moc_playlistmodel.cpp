/****************************************************************************
** Meta object code from reading C++ file 'playlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaylistModel_t {
    QByteArrayData data[23];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PlaylistModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PlaylistModel_t qt_meta_stringdata_PlaylistModel = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 8),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 6),
QT_MOC_LITERAL(4, 31, 11),
QT_MOC_LITERAL(5, 43, 5),
QT_MOC_LITERAL(6, 49, 3),
QT_MOC_LITERAL(7, 53, 6),
QT_MOC_LITERAL(8, 60, 5),
QT_MOC_LITERAL(9, 66, 4),
QT_MOC_LITERAL(10, 71, 4),
QT_MOC_LITERAL(11, 76, 8),
QT_MOC_LITERAL(12, 85, 15),
QT_MOC_LITERAL(13, 101, 11),
QT_MOC_LITERAL(14, 113, 7),
QT_MOC_LITERAL(15, 121, 5),
QT_MOC_LITERAL(16, 127, 16),
QT_MOC_LITERAL(17, 144, 5),
QT_MOC_LITERAL(18, 150, 3),
QT_MOC_LITERAL(19, 154, 14),
QT_MOC_LITERAL(20, 169, 16),
QT_MOC_LITERAL(21, 186, 14),
QT_MOC_LITERAL(22, 201, 11)
    },
    "PlaylistModel\0rowCount\0\0parent\0"
    "columnCount\0index\0row\0column\0child\0"
    "data\0role\0playlist\0QMediaPlaylist*\0"
    "setPlaylist\0setData\0value\0beginInsertItems\0"
    "start\0end\0endInsertItems\0beginRemoveItems\0"
    "endRemoveItems\0changeItems\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x0a,
       1,    0,  107,    2, 0x2a,
       4,    1,  108,    2, 0x0a,
       4,    0,  111,    2, 0x2a,
       5,    3,  112,    2, 0x0a,
       5,    2,  119,    2, 0x2a,
       3,    1,  124,    2, 0x0a,
       9,    2,  127,    2, 0x0a,
       9,    1,  132,    2, 0x2a,
      11,    0,  135,    2, 0x0a,
      13,    1,  136,    2, 0x0a,
      14,    3,  139,    2, 0x0a,
      14,    2,  146,    2, 0x2a,
      16,    2,  151,    2, 0x08,
      19,    0,  156,    2, 0x08,
      20,    2,  157,    2, 0x08,
      21,    0,  162,    2, 0x08,
      22,    2,  163,    2, 0x08,

 // slots: parameters
    QMetaType::Int, QMetaType::QModelIndex,    3,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QModelIndex,    3,
    QMetaType::Int,
    QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    6,    7,    3,
    QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::QModelIndex, QMetaType::QModelIndex,    8,
    QMetaType::QVariant, QMetaType::QModelIndex, QMetaType::Int,    5,   10,
    QMetaType::QVariant, QMetaType::QModelIndex,    5,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Bool, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,    5,   15,   10,
    QMetaType::Bool, QMetaType::QModelIndex, QMetaType::QVariant,    5,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,

       0        // eod
};

void PlaylistModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaylistModel *_t = static_cast<PlaylistModel *>(_o);
        switch (_id) {
        case 0: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->columnCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->columnCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QModelIndex _r = _t->index((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 5: { QModelIndex _r = _t->index((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 6: { QModelIndex _r = _t->parent((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QMediaPlaylist* _r = _t->playlist();
            if (_a[0]) *reinterpret_cast< QMediaPlaylist**>(_a[0]) = _r; }  break;
        case 10: _t->setPlaylist((*reinterpret_cast< QMediaPlaylist*(*)>(_a[1]))); break;
        case 11: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->beginInsertItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->endInsertItems(); break;
        case 15: _t->beginRemoveItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->endRemoveItems(); break;
        case 17: _t->changeItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PlaylistModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PlaylistModel.data,
      qt_meta_data_PlaylistModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *PlaylistModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistModel.stringdata))
        return static_cast<void*>(const_cast< PlaylistModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PlaylistModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
