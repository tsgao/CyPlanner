/****************************************************************************
** Meta object code from reading C++ file 'mapripper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/mapripper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapripper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mapcontrol__MapRipper_t {
    QByteArrayData data[15];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapcontrol__MapRipper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapcontrol__MapRipper_t qt_meta_stringdata_mapcontrol__MapRipper = {
    {
QT_MOC_LITERAL(0, 0, 21), // "mapcontrol::MapRipper"
QT_MOC_LITERAL(1, 22, 17), // "percentageChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "perc"
QT_MOC_LITERAL(4, 46, 20), // "numberOfTilesChanged"
QT_MOC_LITERAL(5, 67, 5), // "total"
QT_MOC_LITERAL(6, 73, 6), // "actual"
QT_MOC_LITERAL(7, 80, 15), // "providerChanged"
QT_MOC_LITERAL(8, 96, 4), // "prov"
QT_MOC_LITERAL(9, 101, 4), // "zoom"
QT_MOC_LITERAL(10, 106, 6), // "finish"
QT_MOC_LITERAL(11, 113, 11), // "stopRipping"
QT_MOC_LITERAL(12, 125, 10), // "setAutoRip"
QT_MOC_LITERAL(13, 136, 3), // "val"
QT_MOC_LITERAL(14, 140, 13) // "cancelRipping"

    },
    "mapcontrol::MapRipper\0percentageChanged\0"
    "\0perc\0numberOfTilesChanged\0total\0"
    "actual\0providerChanged\0prov\0zoom\0"
    "finish\0stopRipping\0setAutoRip\0val\0"
    "cancelRipping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapcontrol__MapRipper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,
       7,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      14,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void mapcontrol::MapRipper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapRipper *_t = static_cast<MapRipper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->percentageChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->numberOfTilesChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->providerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->finish(); break;
        case 4: _t->stopRipping(); break;
        case 5: _t->setAutoRip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->cancelRipping(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MapRipper::*_t)(int const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRipper::percentageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MapRipper::*_t)(int const & , int const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRipper::numberOfTilesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MapRipper::*_t)(QString const & , int const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRipper::providerChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject mapcontrol::MapRipper::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_mapcontrol__MapRipper.data,
      qt_meta_data_mapcontrol__MapRipper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mapcontrol::MapRipper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapcontrol::MapRipper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__MapRipper.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int mapcontrol::MapRipper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::MapRipper::percentageChanged(int const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::MapRipper::numberOfTilesChanged(int const & _t1, int const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mapcontrol::MapRipper::providerChanged(QString const & _t1, int const & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
