/****************************************************************************
** Meta object code from reading C++ file 'waypointitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/waypointitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waypointitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mapcontrol__WayPointItem_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapcontrol__WayPointItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapcontrol__WayPointItem_t qt_meta_stringdata_mapcontrol__WayPointItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "mapcontrol::WayPointItem"
QT_MOC_LITERAL(1, 25, 15), // "WPNumberChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "oldnumber"
QT_MOC_LITERAL(4, 52, 9), // "newnumber"
QT_MOC_LITERAL(5, 62, 13), // "WayPointItem*"
QT_MOC_LITERAL(6, 76, 8), // "waypoint"
QT_MOC_LITERAL(7, 85, 15), // "WPValuesChanged"
QT_MOC_LITERAL(8, 101, 9), // "WPDeleted"
QT_MOC_LITERAL(9, 111, 6), // "number"
QT_MOC_LITERAL(10, 118, 12), // "WPRenumbered"
QT_MOC_LITERAL(11, 131, 10) // "WPInserted"

    },
    "mapcontrol::WayPointItem\0WPNumberChanged\0"
    "\0oldnumber\0newnumber\0WayPointItem*\0"
    "waypoint\0WPValuesChanged\0WPDeleted\0"
    "number\0WPRenumbered\0WPInserted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapcontrol__WayPointItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       7,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   49,    2, 0x0a /* Public */,
      10,    3,   52,    2, 0x0a /* Public */,
      11,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    9,    6,

       0        // eod
};

void mapcontrol::WayPointItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WayPointItem *_t = static_cast<WayPointItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->WPNumberChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< WayPointItem*(*)>(_a[3]))); break;
        case 1: _t->WPValuesChanged((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 2: _t->WPDeleted((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->WPRenumbered((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< WayPointItem*(*)>(_a[3]))); break;
        case 4: _t->WPInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< WayPointItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WayPointItem::*_t)(int const & , int const & , WayPointItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayPointItem::WPNumberChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WayPointItem::*_t)(WayPointItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayPointItem::WPValuesChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject mapcontrol::WayPointItem::staticMetaObject = {
    { &GraphicsItem::staticMetaObject, qt_meta_stringdata_mapcontrol__WayPointItem.data,
      qt_meta_data_mapcontrol__WayPointItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mapcontrol::WayPointItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapcontrol::WayPointItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__WayPointItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return GraphicsItem::qt_metacast(_clname);
}

int mapcontrol::WayPointItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphicsItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::WayPointItem::WPNumberChanged(int const & _t1, int const & _t2, WayPointItem * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::WayPointItem::WPValuesChanged(WayPointItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
