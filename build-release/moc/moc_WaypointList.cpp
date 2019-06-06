/****************************************************************************
** Meta object code from reading C++ file 'WaypointList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/WaypointList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaypointList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaypointList_t {
    QByteArrayData data[52];
    char stringdata0[697];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaypointList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaypointList_t qt_meta_stringdata_WaypointList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WaypointList"
QT_MOC_LITERAL(1, 13, 16), // "clearPathclicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "createWaypointAtMap"
QT_MOC_LITERAL(4, 51, 10), // "coordinate"
QT_MOC_LITERAL(5, 62, 14), // "updatePosition"
QT_MOC_LITERAL(6, 77, 13), // "UASInterface*"
QT_MOC_LITERAL(7, 91, 1), // "x"
QT_MOC_LITERAL(8, 93, 1), // "y"
QT_MOC_LITERAL(9, 95, 1), // "z"
QT_MOC_LITERAL(10, 97, 4), // "usec"
QT_MOC_LITERAL(11, 102, 14), // "updateAttitude"
QT_MOC_LITERAL(12, 117, 4), // "roll"
QT_MOC_LITERAL(13, 122, 5), // "pitch"
QT_MOC_LITERAL(14, 128, 3), // "yaw"
QT_MOC_LITERAL(15, 132, 6), // "setUAS"
QT_MOC_LITERAL(16, 139, 3), // "uas"
QT_MOC_LITERAL(17, 143, 13), // "saveWaypoints"
QT_MOC_LITERAL(18, 157, 27), // "saveWaypointsDialogAccepted"
QT_MOC_LITERAL(19, 185, 13), // "loadWaypoints"
QT_MOC_LITERAL(20, 199, 27), // "loadWaypointsDialogAccepted"
QT_MOC_LITERAL(21, 227, 8), // "transmit"
QT_MOC_LITERAL(22, 236, 4), // "read"
QT_MOC_LITERAL(23, 241, 7), // "refresh"
QT_MOC_LITERAL(24, 249, 11), // "addEditable"
QT_MOC_LITERAL(25, 261, 17), // "onCurrentPosition"
QT_MOC_LITERAL(26, 279, 26), // "addCurrentPositionWaypoint"
QT_MOC_LITERAL(27, 306, 17), // "updateStatusLabel"
QT_MOC_LITERAL(28, 324, 6), // "string"
QT_MOC_LITERAL(29, 331, 21), // "changeCurrentWaypoint"
QT_MOC_LITERAL(30, 353, 3), // "seq"
QT_MOC_LITERAL(31, 357, 30), // "currentWaypointEditableChanged"
QT_MOC_LITERAL(32, 388, 30), // "currentWaypointViewOnlyChanged"
QT_MOC_LITERAL(33, 419, 22), // "updateWaypointEditable"
QT_MOC_LITERAL(34, 442, 9), // "Waypoint*"
QT_MOC_LITERAL(35, 452, 2), // "wp"
QT_MOC_LITERAL(36, 455, 22), // "updateWaypointViewOnly"
QT_MOC_LITERAL(37, 478, 27), // "waypointEditableListChanged"
QT_MOC_LITERAL(38, 506, 27), // "waypointViewOnlyListChanged"
QT_MOC_LITERAL(39, 534, 13), // "clearWPWidget"
QT_MOC_LITERAL(40, 548, 6), // "moveUp"
QT_MOC_LITERAL(41, 555, 8), // "moveDown"
QT_MOC_LITERAL(42, 564, 7), // "moveTop"
QT_MOC_LITERAL(43, 572, 10), // "moveBottom"
QT_MOC_LITERAL(44, 583, 14), // "removeWaypoint"
QT_MOC_LITERAL(45, 598, 16), // "parameterChanged"
QT_MOC_LITERAL(46, 615, 9), // "component"
QT_MOC_LITERAL(47, 625, 13), // "parameterName"
QT_MOC_LITERAL(48, 639, 5), // "value"
QT_MOC_LITERAL(49, 645, 15), // "wpRadiusChanged"
QT_MOC_LITERAL(50, 661, 6), // "radius"
QT_MOC_LITERAL(51, 668, 28) // "on_clearWPListButton_clicked"

    },
    "WaypointList\0clearPathclicked\0\0"
    "createWaypointAtMap\0coordinate\0"
    "updatePosition\0UASInterface*\0x\0y\0z\0"
    "usec\0updateAttitude\0roll\0pitch\0yaw\0"
    "setUAS\0uas\0saveWaypoints\0"
    "saveWaypointsDialogAccepted\0loadWaypoints\0"
    "loadWaypointsDialogAccepted\0transmit\0"
    "read\0refresh\0addEditable\0onCurrentPosition\0"
    "addCurrentPositionWaypoint\0updateStatusLabel\0"
    "string\0changeCurrentWaypoint\0seq\0"
    "currentWaypointEditableChanged\0"
    "currentWaypointViewOnlyChanged\0"
    "updateWaypointEditable\0Waypoint*\0wp\0"
    "updateWaypointViewOnly\0"
    "waypointEditableListChanged\0"
    "waypointViewOnlyListChanged\0clearWPWidget\0"
    "moveUp\0moveDown\0moveTop\0moveBottom\0"
    "removeWaypoint\0parameterChanged\0"
    "component\0parameterName\0value\0"
    "wpRadiusChanged\0radius\0"
    "on_clearWPListButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaypointList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    1,  175,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,  178,    2, 0x0a /* Public */,
      11,    5,  189,    2, 0x0a /* Public */,
      15,    1,  200,    2, 0x0a /* Public */,
      17,    0,  203,    2, 0x0a /* Public */,
      18,    0,  204,    2, 0x0a /* Public */,
      19,    0,  205,    2, 0x0a /* Public */,
      20,    0,  206,    2, 0x0a /* Public */,
      21,    0,  207,    2, 0x0a /* Public */,
      22,    0,  208,    2, 0x0a /* Public */,
      23,    0,  209,    2, 0x0a /* Public */,
      24,    0,  210,    2, 0x0a /* Public */,
      24,    1,  211,    2, 0x0a /* Public */,
      26,    0,  214,    2, 0x0a /* Public */,
      27,    1,  215,    2, 0x0a /* Public */,
      29,    1,  218,    2, 0x0a /* Public */,
      31,    1,  221,    2, 0x0a /* Public */,
      32,    1,  224,    2, 0x0a /* Public */,
      33,    2,  227,    2, 0x0a /* Public */,
      36,    2,  232,    2, 0x0a /* Public */,
      37,    0,  237,    2, 0x0a /* Public */,
      38,    0,  238,    2, 0x0a /* Public */,
      39,    0,  239,    2, 0x0a /* Public */,
      40,    1,  240,    2, 0x0a /* Public */,
      41,    1,  243,    2, 0x0a /* Public */,
      42,    1,  246,    2, 0x0a /* Public */,
      43,    1,  249,    2, 0x0a /* Public */,
      44,    1,  252,    2, 0x0a /* Public */,
      45,    4,  255,    2, 0x0a /* Public */,
      49,    1,  264,    2, 0x0a /* Public */,
      51,    0,  267,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   12,   13,   14,   10,
    QMetaType::Void, 0x80000000 | 6,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::UShort,   30,
    QMetaType::Void, QMetaType::UShort,   30,
    QMetaType::Void, QMetaType::UShort,   30,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34,   16,   35,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34,   16,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   16,   46,   47,   48,
    QMetaType::Void, QMetaType::Double,   50,
    QMetaType::Void,

       0        // eod
};

void WaypointList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WaypointList *_t = static_cast<WaypointList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearPathclicked(); break;
        case 1: _t->createWaypointAtMap((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: _t->updatePosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 3: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->saveWaypoints(); break;
        case 6: _t->saveWaypointsDialogAccepted(); break;
        case 7: _t->loadWaypoints(); break;
        case 8: _t->loadWaypointsDialogAccepted(); break;
        case 9: _t->transmit(); break;
        case 10: _t->read(); break;
        case 11: _t->refresh(); break;
        case 12: _t->addEditable(); break;
        case 13: _t->addEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->addCurrentPositionWaypoint(); break;
        case 15: _t->updateStatusLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->changeCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 17: _t->currentWaypointEditableChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 18: _t->currentWaypointViewOnlyChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 19: _t->updateWaypointEditable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 20: _t->updateWaypointViewOnly((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 21: _t->waypointEditableListChanged(); break;
        case 22: _t->waypointViewOnlyListChanged(); break;
        case 23: _t->clearWPWidget(); break;
        case 24: _t->moveUp((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 25: _t->moveDown((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 26: _t->moveTop((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 27: _t->moveBottom((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 28: _t->removeWaypoint((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 29: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 30: _t->wpRadiusChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->on_clearWPListButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WaypointList::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WaypointList::clearPathclicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WaypointList::*_t)(const QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WaypointList::createWaypointAtMap)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WaypointList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaypointList.data,
      qt_meta_data_WaypointList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WaypointList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaypointList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WaypointList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void WaypointList::clearPathclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WaypointList::createWaypointAtMap(const QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
