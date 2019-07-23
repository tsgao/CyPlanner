/****************************************************************************
** Meta object code from reading C++ file 'MissionElevationDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MissionElevationDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionElevationDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionElevationDisplay_t {
    QByteArrayData data[22];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionElevationDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionElevationDisplay_t qt_meta_stringdata_MissionElevationDisplay = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MissionElevationDisplay"
QT_MOC_LITERAL(1, 24, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 52, 3), // "uas"
QT_MOC_LITERAL(5, 56, 14), // "updateWaypoint"
QT_MOC_LITERAL(6, 71, 5), // "uasId"
QT_MOC_LITERAL(7, 77, 9), // "Waypoint*"
QT_MOC_LITERAL(8, 87, 8), // "waypoint"
QT_MOC_LITERAL(9, 96, 22), // "currentWaypointChanged"
QT_MOC_LITERAL(10, 119, 10), // "waypointId"
QT_MOC_LITERAL(11, 130, 13), // "updateDisplay"
QT_MOC_LITERAL(12, 144, 19), // "updateElevationData"
QT_MOC_LITERAL(13, 164, 20), // "updateElevationGraph"
QT_MOC_LITERAL(14, 185, 16), // "QList<Waypoint*>"
QT_MOC_LITERAL(15, 202, 12), // "waypointList"
QT_MOC_LITERAL(16, 215, 17), // "averageResolution"
QT_MOC_LITERAL(17, 233, 16), // "setHomeAltOffset"
QT_MOC_LITERAL(18, 250, 16), // "useHomeAltOffset"
QT_MOC_LITERAL(19, 267, 5), // "state"
QT_MOC_LITERAL(20, 273, 11), // "showInfoBox"
QT_MOC_LITERAL(21, 285, 18) // "sampleValueChanged"

    },
    "MissionElevationDisplay\0activeUASSet\0"
    "\0UASInterface*\0uas\0updateWaypoint\0"
    "uasId\0Waypoint*\0waypoint\0"
    "currentWaypointChanged\0waypointId\0"
    "updateDisplay\0updateElevationData\0"
    "updateElevationGraph\0QList<Waypoint*>\0"
    "waypointList\0averageResolution\0"
    "setHomeAltOffset\0useHomeAltOffset\0"
    "state\0showInfoBox\0sampleValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionElevationDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       5,    2,   67,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    2,   77,    2, 0x08 /* Private */,
      17,    0,   82,    2, 0x08 /* Private */,
      18,    1,   83,    2, 0x08 /* Private */,
      20,    0,   86,    2, 0x08 /* Private */,
      21,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::UShort,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Double,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MissionElevationDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionElevationDisplay *_t = static_cast<MissionElevationDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->updateWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 2: _t->currentWaypointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->updateDisplay(); break;
        case 4: _t->updateElevationData(); break;
        case 5: _t->updateElevationGraph((*reinterpret_cast< QList<Waypoint*>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->setHomeAltOffset(); break;
        case 7: _t->useHomeAltOffset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showInfoBox(); break;
        case 9: _t->sampleValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObject MissionElevationDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MissionElevationDisplay.data,
      qt_meta_data_MissionElevationDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionElevationDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionElevationDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionElevationDisplay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MissionElevationDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
