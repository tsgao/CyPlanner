/****************************************************************************
** Meta object code from reading C++ file 'uasview3.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uasview3.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uasview3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASView3_t {
    QByteArrayData data[71];
    char stringdata0[712];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASView3_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASView3_t qt_meta_stringdata_UASView3 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UASView3"
QT_MOC_LITERAL(1, 9, 10), // "uasInFocus"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 35, 3), // "uas"
QT_MOC_LITERAL(5, 39, 11), // "uasOutFocus"
QT_MOC_LITERAL(6, 51, 10), // "updateName"
QT_MOC_LITERAL(7, 62, 4), // "name"
QT_MOC_LITERAL(8, 67, 16), // "receiveHeartbeat"
QT_MOC_LITERAL(9, 84, 12), // "updateThrust"
QT_MOC_LITERAL(10, 97, 6), // "thrust"
QT_MOC_LITERAL(11, 104, 13), // "updateBattery"
QT_MOC_LITERAL(12, 118, 7), // "voltage"
QT_MOC_LITERAL(13, 126, 7), // "current"
QT_MOC_LITERAL(14, 134, 7), // "percent"
QT_MOC_LITERAL(15, 142, 7), // "seconds"
QT_MOC_LITERAL(16, 150, 19), // "updateLocalPosition"
QT_MOC_LITERAL(17, 170, 1), // "x"
QT_MOC_LITERAL(18, 172, 1), // "y"
QT_MOC_LITERAL(19, 174, 1), // "z"
QT_MOC_LITERAL(20, 176, 4), // "usec"
QT_MOC_LITERAL(21, 181, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(22, 202, 3), // "lon"
QT_MOC_LITERAL(23, 206, 3), // "lat"
QT_MOC_LITERAL(24, 210, 3), // "alt"
QT_MOC_LITERAL(25, 214, 11), // "updateSpeed"
QT_MOC_LITERAL(26, 226, 11), // "updateState"
QT_MOC_LITERAL(27, 238, 8), // "uasState"
QT_MOC_LITERAL(28, 247, 16), // "stateDescription"
QT_MOC_LITERAL(29, 264, 10), // "updateMode"
QT_MOC_LITERAL(30, 275, 5), // "sysId"
QT_MOC_LITERAL(31, 281, 6), // "status"
QT_MOC_LITERAL(32, 288, 11), // "description"
QT_MOC_LITERAL(33, 300, 10), // "updateLoad"
QT_MOC_LITERAL(34, 311, 4), // "load"
QT_MOC_LITERAL(35, 316, 9), // "showHILUi"
QT_MOC_LITERAL(36, 326, 7), // "refresh"
QT_MOC_LITERAL(37, 334, 11), // "setWaypoint"
QT_MOC_LITERAL(38, 346, 5), // "uasId"
QT_MOC_LITERAL(39, 352, 2), // "id"
QT_MOC_LITERAL(40, 355, 3), // "yaw"
QT_MOC_LITERAL(41, 359, 12), // "autocontinue"
QT_MOC_LITERAL(42, 372, 22), // "currentWaypointUpdated"
QT_MOC_LITERAL(43, 395, 8), // "waypoint"
QT_MOC_LITERAL(44, 404, 14), // "selectWaypoint"
QT_MOC_LITERAL(45, 419, 13), // "setSystemType"
QT_MOC_LITERAL(46, 433, 10), // "systemType"
QT_MOC_LITERAL(47, 444, 14), // "setUASasActive"
QT_MOC_LITERAL(48, 459, 15), // "updateActiveUAS"
QT_MOC_LITERAL(49, 475, 6), // "active"
QT_MOC_LITERAL(50, 482, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(51, 499, 7), // "timeout"
QT_MOC_LITERAL(52, 507, 2), // "ms"
QT_MOC_LITERAL(53, 510, 18), // "setBackgroundColor"
QT_MOC_LITERAL(54, 529, 6), // "rename"
QT_MOC_LITERAL(55, 536, 14), // "selectAirframe"
QT_MOC_LITERAL(56, 551, 15), // "setBatterySpecs"
QT_MOC_LITERAL(57, 567, 14), // "showStatusText"
QT_MOC_LITERAL(58, 582, 5), // "uasid"
QT_MOC_LITERAL(59, 588, 11), // "componentid"
QT_MOC_LITERAL(60, 600, 8), // "severity"
QT_MOC_LITERAL(61, 609, 4), // "text"
QT_MOC_LITERAL(62, 614, 13), // "updateNavMode"
QT_MOC_LITERAL(63, 628, 4), // "mode"
QT_MOC_LITERAL(64, 633, 12), // "activeUASSet"
QT_MOC_LITERAL(65, 646, 12), // "valueChanged"
QT_MOC_LITERAL(66, 659, 4), // "unit"
QT_MOC_LITERAL(67, 664, 5), // "value"
QT_MOC_LITERAL(68, 670, 4), // "msec"
QT_MOC_LITERAL(69, 675, 20), // "updateTableTimerTick"
QT_MOC_LITERAL(70, 696, 15) // "updateTimerTick"

    },
    "UASView3\0uasInFocus\0\0UASInterface*\0"
    "uas\0uasOutFocus\0updateName\0name\0"
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
    "mode\0activeUASSet\0valueChanged\0unit\0"
    "value\0msec\0updateTableTimerTick\0"
    "updateTimerTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASView3[] = {

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
       1,    1,  174,    2, 0x06 /* Public */,
       5,    1,  177,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  180,    2, 0x0a /* Public */,
       8,    1,  183,    2, 0x0a /* Public */,
       9,    2,  186,    2, 0x0a /* Public */,
      11,    5,  191,    2, 0x0a /* Public */,
      16,    5,  202,    2, 0x0a /* Public */,
      21,    5,  213,    2, 0x0a /* Public */,
      25,    5,  224,    2, 0x0a /* Public */,
      26,    3,  235,    2, 0x0a /* Public */,
      29,    3,  242,    2, 0x0a /* Public */,
      33,    2,  249,    2, 0x0a /* Public */,
      35,    0,  254,    2, 0x0a /* Public */,
      36,    0,  255,    2, 0x0a /* Public */,
      37,    8,  256,    2, 0x0a /* Public */,
      42,    1,  273,    2, 0x0a /* Public */,
      44,    2,  276,    2, 0x0a /* Public */,
      45,    2,  281,    2, 0x0a /* Public */,
      47,    1,  286,    2, 0x0a /* Public */,
      48,    2,  289,    2, 0x0a /* Public */,
      50,    2,  294,    2, 0x0a /* Public */,
      53,    0,  299,    2, 0x0a /* Public */,
      54,    0,  300,    2, 0x0a /* Public */,
      55,    0,  301,    2, 0x0a /* Public */,
      56,    0,  302,    2, 0x0a /* Public */,
      57,    4,  303,    2, 0x0a /* Public */,
      62,    3,  312,    2, 0x0a /* Public */,
      64,    1,  319,    2, 0x08 /* Private */,
      65,    5,  322,    2, 0x08 /* Private */,
      65,    5,  333,    2, 0x08 /* Private */,
      69,    0,  344,    2, 0x08 /* Private */,
      70,    0,  345,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::ULongLong,   38,    7,   66,   67,   68,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   38,    7,   66,   67,   68,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UASView3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASView3 *_t = static_cast<UASView3 *>(_o);
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
        case 27: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 28: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 29: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 30: _t->updateTableTimerTick(); break;
        case 31: _t->updateTimerTick(); break;
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
        case 27:
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
            typedef void (UASView3::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASView3::uasInFocus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASView3::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASView3::uasOutFocus)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UASView3::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASView3.data,
      qt_meta_data_UASView3,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASView3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASView3::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASView3.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASView3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UASView3::uasInFocus(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASView3::uasOutFocus(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
