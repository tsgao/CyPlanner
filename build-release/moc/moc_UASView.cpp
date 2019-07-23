/****************************************************************************
** Meta object code from reading C++ file 'UASView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASView_t {
    QByteArrayData data[64];
    char stringdata0[632];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASView_t qt_meta_stringdata_UASView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UASView"
QT_MOC_LITERAL(1, 8, 10), // "uasInFocus"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 34, 3), // "uas"
QT_MOC_LITERAL(5, 38, 11), // "uasOutFocus"
QT_MOC_LITERAL(6, 50, 10), // "updateName"
QT_MOC_LITERAL(7, 61, 4), // "name"
QT_MOC_LITERAL(8, 66, 16), // "receiveHeartbeat"
QT_MOC_LITERAL(9, 83, 12), // "updateThrust"
QT_MOC_LITERAL(10, 96, 6), // "thrust"
QT_MOC_LITERAL(11, 103, 13), // "updateBattery"
QT_MOC_LITERAL(12, 117, 7), // "voltage"
QT_MOC_LITERAL(13, 125, 7), // "current"
QT_MOC_LITERAL(14, 133, 7), // "percent"
QT_MOC_LITERAL(15, 141, 7), // "seconds"
QT_MOC_LITERAL(16, 149, 19), // "updateLocalPosition"
QT_MOC_LITERAL(17, 169, 1), // "x"
QT_MOC_LITERAL(18, 171, 1), // "y"
QT_MOC_LITERAL(19, 173, 1), // "z"
QT_MOC_LITERAL(20, 175, 4), // "usec"
QT_MOC_LITERAL(21, 180, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(22, 201, 3), // "lon"
QT_MOC_LITERAL(23, 205, 3), // "lat"
QT_MOC_LITERAL(24, 209, 3), // "alt"
QT_MOC_LITERAL(25, 213, 11), // "updateSpeed"
QT_MOC_LITERAL(26, 225, 11), // "updateState"
QT_MOC_LITERAL(27, 237, 8), // "uasState"
QT_MOC_LITERAL(28, 246, 16), // "stateDescription"
QT_MOC_LITERAL(29, 263, 10), // "updateMode"
QT_MOC_LITERAL(30, 274, 5), // "sysId"
QT_MOC_LITERAL(31, 280, 6), // "status"
QT_MOC_LITERAL(32, 287, 11), // "description"
QT_MOC_LITERAL(33, 299, 10), // "updateLoad"
QT_MOC_LITERAL(34, 310, 4), // "load"
QT_MOC_LITERAL(35, 315, 9), // "showHILUi"
QT_MOC_LITERAL(36, 325, 7), // "refresh"
QT_MOC_LITERAL(37, 333, 11), // "setWaypoint"
QT_MOC_LITERAL(38, 345, 5), // "uasId"
QT_MOC_LITERAL(39, 351, 2), // "id"
QT_MOC_LITERAL(40, 354, 3), // "yaw"
QT_MOC_LITERAL(41, 358, 12), // "autocontinue"
QT_MOC_LITERAL(42, 371, 22), // "currentWaypointUpdated"
QT_MOC_LITERAL(43, 394, 8), // "waypoint"
QT_MOC_LITERAL(44, 403, 14), // "selectWaypoint"
QT_MOC_LITERAL(45, 418, 13), // "setSystemType"
QT_MOC_LITERAL(46, 432, 10), // "systemType"
QT_MOC_LITERAL(47, 443, 14), // "setUASasActive"
QT_MOC_LITERAL(48, 458, 15), // "updateActiveUAS"
QT_MOC_LITERAL(49, 474, 6), // "active"
QT_MOC_LITERAL(50, 481, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(51, 498, 7), // "timeout"
QT_MOC_LITERAL(52, 506, 2), // "ms"
QT_MOC_LITERAL(53, 509, 18), // "setBackgroundColor"
QT_MOC_LITERAL(54, 528, 6), // "rename"
QT_MOC_LITERAL(55, 535, 14), // "selectAirframe"
QT_MOC_LITERAL(56, 550, 15), // "setBatterySpecs"
QT_MOC_LITERAL(57, 566, 14), // "showStatusText"
QT_MOC_LITERAL(58, 581, 5), // "uasid"
QT_MOC_LITERAL(59, 587, 11), // "componentid"
QT_MOC_LITERAL(60, 599, 8), // "severity"
QT_MOC_LITERAL(61, 608, 4), // "text"
QT_MOC_LITERAL(62, 613, 13), // "updateNavMode"
QT_MOC_LITERAL(63, 627, 4) // "mode"

    },
    "UASView\0uasInFocus\0\0UASInterface*\0uas\0"
    "uasOutFocus\0updateName\0name\0"
    "receiveHeartbeat\0updateThrust\0thrust\0"
    "updateBattery\0voltage\0current\0percent\0"
    "seconds\0updateLocalPosition\0x\0y\0z\0"
    "usec\0updateGlobalPosition\0lon\0lat\0alt\0"
    "updateSpeed\0updateState\0uasState\0"
    "stateDescription\0updateMode\0sysId\0"
    "status\0description\0updateLoad\0load\0"
    "showHILUi\0refresh\0setWaypoint\0uasId\0"
    "id\0yaw\0autocontinue\0currentWaypointUpdated\0"
    "waypoint\0selectWaypoint\0setSystemType\0"
    "systemType\0setUASasActive\0updateActiveUAS\0"
    "active\0heartbeatTimeout\0timeout\0ms\0"
    "setBackgroundColor\0rename\0selectAirframe\0"
    "setBatterySpecs\0showStatusText\0uasid\0"
    "componentid\0severity\0text\0updateNavMode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       5,    1,  152,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  155,    2, 0x0a /* Public */,
       8,    1,  158,    2, 0x0a /* Public */,
       9,    2,  161,    2, 0x0a /* Public */,
      11,    5,  166,    2, 0x0a /* Public */,
      16,    5,  177,    2, 0x0a /* Public */,
      21,    5,  188,    2, 0x0a /* Public */,
      25,    5,  199,    2, 0x0a /* Public */,
      26,    3,  210,    2, 0x0a /* Public */,
      29,    3,  217,    2, 0x0a /* Public */,
      33,    2,  224,    2, 0x0a /* Public */,
      35,    0,  229,    2, 0x0a /* Public */,
      36,    0,  230,    2, 0x0a /* Public */,
      37,    8,  231,    2, 0x0a /* Public */,
      42,    1,  248,    2, 0x0a /* Public */,
      44,    2,  251,    2, 0x0a /* Public */,
      45,    2,  256,    2, 0x0a /* Public */,
      47,    1,  261,    2, 0x0a /* Public */,
      48,    2,  264,    2, 0x0a /* Public */,
      50,    2,  269,    2, 0x0a /* Public */,
      53,    0,  274,    2, 0x0a /* Public */,
      54,    0,  275,    2, 0x0a /* Public */,
      55,    0,  276,    2, 0x0a /* Public */,
      56,    0,  277,    2, 0x0a /* Public */,
      57,    4,  278,    2, 0x0a /* Public */,
      62,    3,  287,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    4,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   17,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   22,   23,   24,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   17,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    2,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   38,   39,   17,   18,   19,   40,   41,   13,
    QMetaType::Void, QMetaType::UShort,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   38,   39,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,   46,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   49,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   51,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   58,   59,   60,   61,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   58,   63,   61,

       0        // eod
};

void UASView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASView *_t = static_cast<UASView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uasInFocus((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->uasOutFocus((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 7: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 8: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->showHILUi(); break;
        case 13: _t->refresh(); break;
        case 14: _t->setWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 15: _t->currentWaypointUpdated((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setSystemType((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 18: _t->setUASasActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->updateActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 21: _t->setBackgroundColor(); break;
        case 22: _t->rename(); break;
        case 23: _t->selectAirframe(); break;
        case 24: _t->setBatterySpecs(); break;
        case 25: _t->showStatusText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 26: _t->updateNavMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 1:
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UASView::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASView::uasInFocus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASView::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASView::uasOutFocus)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UASView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASView.data,
      qt_meta_data_UASView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void UASView::uasInFocus(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASView::uasOutFocus(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
