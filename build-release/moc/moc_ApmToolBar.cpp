/****************************************************************************
** Meta object code from reading C++ file 'ApmToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/ApmToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMToolBar_t {
    QByteArrayData data[53];
    char stringdata0[777];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMToolBar_t qt_meta_stringdata_APMToolBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "APMToolBar"
QT_MOC_LITERAL(1, 11, 17), // "triggerFlightView"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "triggerFlightPlanView"
QT_MOC_LITERAL(4, 52, 23), // "triggerInitialSetupView"
QT_MOC_LITERAL(5, 76, 23), // "triggerConfigTuningView"
QT_MOC_LITERAL(6, 100, 21), // "triggerSimulationView"
QT_MOC_LITERAL(7, 122, 15), // "triggerPlotView"
QT_MOC_LITERAL(8, 138, 17), // "triggerDonateView"
QT_MOC_LITERAL(9, 156, 26), // "triggerMultiFlightPlanView"
QT_MOC_LITERAL(10, 183, 12), // "MAVConnected"
QT_MOC_LITERAL(11, 196, 9), // "connected"
QT_MOC_LITERAL(12, 206, 16), // "selectFlightView"
QT_MOC_LITERAL(13, 223, 20), // "selectFlightPlanView"
QT_MOC_LITERAL(14, 244, 25), // "selectMultiFlightPlanView"
QT_MOC_LITERAL(15, 270, 22), // "selectInitialSetupView"
QT_MOC_LITERAL(16, 293, 22), // "selectConfigTuningView"
QT_MOC_LITERAL(17, 316, 20), // "selectSimulationView"
QT_MOC_LITERAL(18, 337, 16), // "selectDonateView"
QT_MOC_LITERAL(19, 354, 14), // "selectPlotView"
QT_MOC_LITERAL(20, 369, 17), // "checkAdvancedMode"
QT_MOC_LITERAL(21, 387, 7), // "checked"
QT_MOC_LITERAL(22, 395, 10), // "connectMAV"
QT_MOC_LITERAL(23, 406, 20), // "showConnectionDialog"
QT_MOC_LITERAL(24, 427, 13), // "setConnection"
QT_MOC_LITERAL(25, 441, 10), // "connection"
QT_MOC_LITERAL(26, 452, 12), // "activeUasSet"
QT_MOC_LITERAL(27, 465, 13), // "UASInterface*"
QT_MOC_LITERAL(28, 479, 3), // "uas"
QT_MOC_LITERAL(29, 483, 13), // "armingChanged"
QT_MOC_LITERAL(30, 497, 5), // "sysId"
QT_MOC_LITERAL(31, 503, 11), // "armingState"
QT_MOC_LITERAL(32, 515, 5), // "armed"
QT_MOC_LITERAL(33, 521, 17), // "updateLinkDisplay"
QT_MOC_LITERAL(34, 539, 6), // "linkid"
QT_MOC_LITERAL(35, 546, 14), // "newLinkCreated"
QT_MOC_LITERAL(36, 561, 14), // "navModeChanged"
QT_MOC_LITERAL(37, 576, 5), // "uasid"
QT_MOC_LITERAL(38, 582, 4), // "mode"
QT_MOC_LITERAL(39, 587, 4), // "text"
QT_MOC_LITERAL(40, 592, 9), // "heartbeat"
QT_MOC_LITERAL(41, 602, 13), // "stopHeartbeat"
QT_MOC_LITERAL(42, 616, 14), // "startAnimation"
QT_MOC_LITERAL(43, 631, 13), // "stopAnimation"
QT_MOC_LITERAL(44, 645, 20), // "disableConnectWidget"
QT_MOC_LITERAL(45, 666, 7), // "disable"
QT_MOC_LITERAL(46, 674, 28), // "overrideDisableConnectWidget"
QT_MOC_LITERAL(47, 703, 16), // "parameterChanged"
QT_MOC_LITERAL(48, 720, 9), // "component"
QT_MOC_LITERAL(49, 730, 14), // "parameterCount"
QT_MOC_LITERAL(50, 745, 11), // "parameterId"
QT_MOC_LITERAL(51, 757, 13), // "parameterName"
QT_MOC_LITERAL(52, 771, 5) // "value"

    },
    "APMToolBar\0triggerFlightView\0\0"
    "triggerFlightPlanView\0triggerInitialSetupView\0"
    "triggerConfigTuningView\0triggerSimulationView\0"
    "triggerPlotView\0triggerDonateView\0"
    "triggerMultiFlightPlanView\0MAVConnected\0"
    "connected\0selectFlightView\0"
    "selectFlightPlanView\0selectMultiFlightPlanView\0"
    "selectInitialSetupView\0selectConfigTuningView\0"
    "selectSimulationView\0selectDonateView\0"
    "selectPlotView\0checkAdvancedMode\0"
    "checked\0connectMAV\0showConnectionDialog\0"
    "setConnection\0connection\0activeUasSet\0"
    "UASInterface*\0uas\0armingChanged\0sysId\0"
    "armingState\0armed\0updateLinkDisplay\0"
    "linkid\0newLinkCreated\0navModeChanged\0"
    "uasid\0mode\0text\0heartbeat\0stopHeartbeat\0"
    "startAnimation\0stopAnimation\0"
    "disableConnectWidget\0disable\0"
    "overrideDisableConnectWidget\0"
    "parameterChanged\0component\0parameterCount\0"
    "parameterId\0parameterName\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  184,    2, 0x06 /* Public */,
       3,    0,  185,    2, 0x06 /* Public */,
       4,    0,  186,    2, 0x06 /* Public */,
       5,    0,  187,    2, 0x06 /* Public */,
       6,    0,  188,    2, 0x06 /* Public */,
       7,    0,  189,    2, 0x06 /* Public */,
       8,    0,  190,    2, 0x06 /* Public */,
       9,    0,  191,    2, 0x06 /* Public */,
      10,    1,  192,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  195,    2, 0x0a /* Public */,
      13,    0,  196,    2, 0x0a /* Public */,
      14,    0,  197,    2, 0x0a /* Public */,
      15,    0,  198,    2, 0x0a /* Public */,
      16,    0,  199,    2, 0x0a /* Public */,
      17,    0,  200,    2, 0x0a /* Public */,
      18,    0,  201,    2, 0x0a /* Public */,
      19,    0,  202,    2, 0x0a /* Public */,
      20,    1,  203,    2, 0x0a /* Public */,
      22,    0,  206,    2, 0x0a /* Public */,
      23,    0,  207,    2, 0x0a /* Public */,
      24,    1,  208,    2, 0x0a /* Public */,
      26,    1,  211,    2, 0x0a /* Public */,
      29,    2,  214,    2, 0x0a /* Public */,
      29,    1,  219,    2, 0x0a /* Public */,
      33,    1,  222,    2, 0x0a /* Public */,
      35,    1,  225,    2, 0x0a /* Public */,
      36,    3,  228,    2, 0x0a /* Public */,
      40,    1,  235,    2, 0x0a /* Public */,
      41,    0,  238,    2, 0x0a /* Public */,
      42,    0,  239,    2, 0x0a /* Public */,
      43,    0,  240,    2, 0x0a /* Public */,
      44,    1,  241,    2, 0x0a /* Public */,
      46,    1,  244,    2, 0x0a /* Public */,
      47,    6,  247,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,   31,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   37,   38,   39,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   28,   48,   49,   50,   51,   52,

       0        // eod
};

void APMToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APMToolBar *_t = static_cast<APMToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggerFlightView(); break;
        case 1: _t->triggerFlightPlanView(); break;
        case 2: _t->triggerInitialSetupView(); break;
        case 3: _t->triggerConfigTuningView(); break;
        case 4: _t->triggerSimulationView(); break;
        case 5: _t->triggerPlotView(); break;
        case 6: _t->triggerDonateView(); break;
        case 7: _t->triggerMultiFlightPlanView(); break;
        case 8: _t->MAVConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->selectFlightView(); break;
        case 10: _t->selectFlightPlanView(); break;
        case 11: _t->selectMultiFlightPlanView(); break;
        case 12: _t->selectInitialSetupView(); break;
        case 13: _t->selectConfigTuningView(); break;
        case 14: _t->selectSimulationView(); break;
        case 15: _t->selectDonateView(); break;
        case 16: _t->selectPlotView(); break;
        case 17: _t->checkAdvancedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->connectMAV(); break;
        case 19: _t->showConnectionDialog(); break;
        case 20: _t->setConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 22: _t->armingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->updateLinkDisplay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->newLinkCreated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->navModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 27: _t->heartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 28: _t->stopHeartbeat(); break;
        case 29: _t->startAnimation(); break;
        case 30: _t->stopAnimation(); break;
        case 31: _t->disableConnectWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->overrideDisableConnectWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
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
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerFlightView)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerFlightPlanView)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerInitialSetupView)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerConfigTuningView)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerSimulationView)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerPlotView)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerDonateView)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::triggerMultiFlightPlanView)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (APMToolBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMToolBar::MAVConnected)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject APMToolBar::staticMetaObject = {
    { &QQuickView::staticMetaObject, qt_meta_stringdata_APMToolBar.data,
      qt_meta_data_APMToolBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMToolBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int APMToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void APMToolBar::triggerFlightView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMToolBar::triggerFlightPlanView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void APMToolBar::triggerInitialSetupView()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void APMToolBar::triggerConfigTuningView()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void APMToolBar::triggerSimulationView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void APMToolBar::triggerPlotView()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void APMToolBar::triggerDonateView()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void APMToolBar::triggerMultiFlightPlanView()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void APMToolBar::MAVConnected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
