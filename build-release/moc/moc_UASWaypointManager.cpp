/****************************************************************************
** Meta object code from reading C++ file 'UASWaypointManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASWaypointManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASWaypointManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASWaypointManager_t {
    QByteArrayData data[44];
    char stringdata0[595];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASWaypointManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASWaypointManager_t qt_meta_stringdata_UASWaypointManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UASWaypointManager"
QT_MOC_LITERAL(1, 19, 27), // "waypointEditableListChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "uasid"
QT_MOC_LITERAL(4, 54, 23), // "waypointEditableChanged"
QT_MOC_LITERAL(5, 78, 9), // "Waypoint*"
QT_MOC_LITERAL(6, 88, 2), // "wp"
QT_MOC_LITERAL(7, 91, 27), // "waypointViewOnlyListChanged"
QT_MOC_LITERAL(8, 119, 23), // "waypointViewOnlyChanged"
QT_MOC_LITERAL(9, 143, 22), // "currentWaypointChanged"
QT_MOC_LITERAL(10, 166, 18), // "updateStatusString"
QT_MOC_LITERAL(11, 185, 23), // "waypointDistanceChanged"
QT_MOC_LITERAL(12, 209, 8), // "distance"
QT_MOC_LITERAL(13, 218, 10), // "loadWPFile"
QT_MOC_LITERAL(14, 229, 19), // "readGlobalWPFromUAS"
QT_MOC_LITERAL(15, 249, 5), // "value"
QT_MOC_LITERAL(16, 255, 7), // "timeout"
QT_MOC_LITERAL(17, 263, 19), // "addWaypointEditable"
QT_MOC_LITERAL(18, 283, 18), // "enforceFirstActive"
QT_MOC_LITERAL(19, 302, 19), // "addWaypointViewOnly"
QT_MOC_LITERAL(20, 322, 14), // "createWaypoint"
QT_MOC_LITERAL(21, 337, 14), // "removeWaypoint"
QT_MOC_LITERAL(22, 352, 3), // "seq"
QT_MOC_LITERAL(23, 356, 12), // "moveWaypoint"
QT_MOC_LITERAL(24, 369, 7), // "cur_seq"
QT_MOC_LITERAL(25, 377, 7), // "new_seq"
QT_MOC_LITERAL(26, 385, 13), // "saveWaypoints"
QT_MOC_LITERAL(27, 399, 8), // "saveFile"
QT_MOC_LITERAL(28, 408, 13), // "loadWaypoints"
QT_MOC_LITERAL(29, 422, 8), // "loadFile"
QT_MOC_LITERAL(30, 431, 22), // "notifyOfChangeEditable"
QT_MOC_LITERAL(31, 454, 22), // "notifyOfChangeViewOnly"
QT_MOC_LITERAL(32, 477, 26), // "handleLocalPositionChanged"
QT_MOC_LITERAL(33, 504, 13), // "UASInterface*"
QT_MOC_LITERAL(34, 518, 3), // "mav"
QT_MOC_LITERAL(35, 522, 1), // "x"
QT_MOC_LITERAL(36, 524, 1), // "y"
QT_MOC_LITERAL(37, 526, 1), // "z"
QT_MOC_LITERAL(38, 528, 4), // "time"
QT_MOC_LITERAL(39, 533, 27), // "handleGlobalPositionChanged"
QT_MOC_LITERAL(40, 561, 3), // "lat"
QT_MOC_LITERAL(41, 565, 3), // "lon"
QT_MOC_LITERAL(42, 569, 3), // "alt"
QT_MOC_LITERAL(43, 573, 21) // "setDefaultRelAltitude"

    },
    "UASWaypointManager\0waypointEditableListChanged\0"
    "\0uasid\0waypointEditableChanged\0Waypoint*\0"
    "wp\0waypointViewOnlyListChanged\0"
    "waypointViewOnlyChanged\0currentWaypointChanged\0"
    "updateStatusString\0waypointDistanceChanged\0"
    "distance\0loadWPFile\0readGlobalWPFromUAS\0"
    "value\0timeout\0addWaypointEditable\0"
    "enforceFirstActive\0addWaypointViewOnly\0"
    "createWaypoint\0removeWaypoint\0seq\0"
    "moveWaypoint\0cur_seq\0new_seq\0saveWaypoints\0"
    "saveFile\0loadWaypoints\0loadFile\0"
    "notifyOfChangeEditable\0notifyOfChangeViewOnly\0"
    "handleLocalPositionChanged\0UASInterface*\0"
    "mav\0x\0y\0z\0time\0handleGlobalPositionChanged\0"
    "lat\0lon\0alt\0setDefaultRelAltitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASWaypointManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x06 /* Public */,
       1,    1,  145,    2, 0x06 /* Public */,
       4,    2,  148,    2, 0x06 /* Public */,
       7,    0,  153,    2, 0x06 /* Public */,
       7,    1,  154,    2, 0x06 /* Public */,
       8,    2,  157,    2, 0x06 /* Public */,
       9,    1,  162,    2, 0x06 /* Public */,
      10,    1,  165,    2, 0x06 /* Public */,
      11,    1,  168,    2, 0x06 /* Public */,
      13,    0,  171,    2, 0x06 /* Public */,
      14,    1,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  175,    2, 0x0a /* Public */,
      17,    2,  176,    2, 0x0a /* Public */,
      17,    1,  181,    2, 0x2a /* Public | MethodCloned */,
      19,    1,  184,    2, 0x0a /* Public */,
      20,    1,  187,    2, 0x0a /* Public */,
      20,    0,  190,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  191,    2, 0x0a /* Public */,
      23,    2,  194,    2, 0x0a /* Public */,
      26,    1,  199,    2, 0x0a /* Public */,
      28,    1,  202,    2, 0x0a /* Public */,
      30,    1,  205,    2, 0x0a /* Public */,
      31,    1,  208,    2, 0x0a /* Public */,
      32,    5,  211,    2, 0x0a /* Public */,
      39,    5,  222,    2, 0x0a /* Public */,
      43,    1,  233,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    3,    6,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,   18,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5, QMetaType::Bool,   18,
    0x80000000 | 5,
    QMetaType::Int, QMetaType::UShort,   22,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,   24,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   34,   35,   36,   37,   38,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   34,   40,   41,   42,   38,
    QMetaType::Void, QMetaType::Double,   42,

       0        // eod
};

void UASWaypointManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASWaypointManager *_t = static_cast<UASWaypointManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waypointEditableListChanged(); break;
        case 1: _t->waypointEditableListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->waypointEditableChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 3: _t->waypointViewOnlyListChanged(); break;
        case 4: _t->waypointViewOnlyListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->waypointViewOnlyChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 6: _t->currentWaypointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->updateStatusString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->waypointDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->loadWPFile(); break;
        case 10: _t->readGlobalWPFromUAS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->timeout(); break;
        case 12: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 14: _t->addWaypointViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 15: { Waypoint* _r = _t->createWaypoint((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = std::move(_r); }  break;
        case 16: { Waypoint* _r = _t->createWaypoint();
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->removeWaypoint((*reinterpret_cast< quint16(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->moveWaypoint((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 19: _t->saveWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->loadWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->notifyOfChangeEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 22: _t->notifyOfChangeViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 23: _t->handleLocalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 24: _t->handleGlobalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 25: _t->setDefaultRelAltitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint* >(); break;
            }
            break;
        case 22:
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
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointEditableListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointEditableListChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int , Waypoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointEditableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyListChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyListChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(int , Waypoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointViewOnlyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::currentWaypointChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::updateStatusString)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::waypointDistanceChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::loadWPFile)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UASWaypointManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASWaypointManager::readGlobalWPFromUAS)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject UASWaypointManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASWaypointManager.data,
      qt_meta_data_UASWaypointManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASWaypointManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASWaypointManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASWaypointManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UASWaypointManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void UASWaypointManager::waypointEditableListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UASWaypointManager::waypointEditableListChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASWaypointManager::waypointEditableChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASWaypointManager::waypointViewOnlyListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UASWaypointManager::waypointViewOnlyListChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASWaypointManager::waypointViewOnlyChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASWaypointManager::currentWaypointChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASWaypointManager::updateStatusString(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASWaypointManager::waypointDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASWaypointManager::loadWPFile()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UASWaypointManager::readGlobalWPFromUAS(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
