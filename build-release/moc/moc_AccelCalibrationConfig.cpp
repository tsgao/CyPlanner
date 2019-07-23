/****************************************************************************
** Meta object code from reading C++ file 'AccelCalibrationConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AccelCalibrationConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccelCalibrationConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccelCalibrationConfig_t {
    QByteArrayData data[14];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccelCalibrationConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccelCalibrationConfig_t qt_meta_stringdata_AccelCalibrationConfig = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AccelCalibrationConfig"
QT_MOC_LITERAL(1, 23, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 51, 3), // "uas"
QT_MOC_LITERAL(5, 55, 22), // "calibrateButtonClicked"
QT_MOC_LITERAL(6, 78, 22), // "uasTextMessageReceived"
QT_MOC_LITERAL(7, 101, 5), // "uasid"
QT_MOC_LITERAL(8, 107, 11), // "componentid"
QT_MOC_LITERAL(9, 119, 8), // "severity"
QT_MOC_LITERAL(10, 128, 4), // "text"
QT_MOC_LITERAL(11, 133, 12), // "uasConnected"
QT_MOC_LITERAL(12, 146, 15), // "uasDisconnected"
QT_MOC_LITERAL(13, 162, 18) // "countdownTimerTick"

    },
    "AccelCalibrationConfig\0activeUASSet\0"
    "\0UASInterface*\0uas\0calibrateButtonClicked\0"
    "uasTextMessageReceived\0uasid\0componentid\0"
    "severity\0text\0uasConnected\0uasDisconnected\0"
    "countdownTimerTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccelCalibrationConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    4,   48,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,
      12,    0,   58,    2, 0x08 /* Private */,
      13,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AccelCalibrationConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccelCalibrationConfig *_t = static_cast<AccelCalibrationConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->calibrateButtonClicked(); break;
        case 2: _t->uasTextMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->uasConnected(); break;
        case 4: _t->uasDisconnected(); break;
        case 5: _t->countdownTimerTick(); break;
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
        }
    }
}

const QMetaObject AccelCalibrationConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_AccelCalibrationConfig.data,
      qt_meta_data_AccelCalibrationConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccelCalibrationConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccelCalibrationConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccelCalibrationConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int AccelCalibrationConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
