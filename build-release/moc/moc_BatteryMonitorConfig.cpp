/****************************************************************************
** Meta object code from reading C++ file 'BatteryMonitorConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/BatteryMonitorConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BatteryMonitorConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BatteryPreset_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatteryPreset_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatteryPreset_t qt_meta_stringdata_BatteryPreset = {
    {
QT_MOC_LITERAL(0, 0, 13) // "BatteryPreset"

    },
    "BatteryPreset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatteryPreset[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BatteryPreset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BatteryPreset::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BatteryPreset.data,
      qt_meta_data_BatteryPreset,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BatteryPreset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryPreset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryPreset.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BatteryPreset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BatteryMonitorConfig_t {
    QByteArrayData data[23];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BatteryMonitorConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BatteryMonitorConfig_t qt_meta_stringdata_BatteryMonitorConfig = {
    {
QT_MOC_LITERAL(0, 0, 20), // "BatteryMonitorConfig"
QT_MOC_LITERAL(1, 21, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "uas"
QT_MOC_LITERAL(4, 43, 9), // "component"
QT_MOC_LITERAL(5, 53, 13), // "parameterName"
QT_MOC_LITERAL(6, 67, 5), // "value"
QT_MOC_LITERAL(7, 73, 14), // "calcDividerSet"
QT_MOC_LITERAL(8, 88, 16), // "measuredVoltsSet"
QT_MOC_LITERAL(9, 105, 18), // "measuredCurrentSet"
QT_MOC_LITERAL(10, 124, 21), // "measuredVoltsSetBasic"
QT_MOC_LITERAL(11, 146, 23), // "measuredCurrentSetBasic"
QT_MOC_LITERAL(12, 170, 14), // "ampsPerVoltSet"
QT_MOC_LITERAL(13, 185, 18), // "batteryCapacitySet"
QT_MOC_LITERAL(14, 204, 12), // "activeUASSet"
QT_MOC_LITERAL(15, 217, 13), // "UASInterface*"
QT_MOC_LITERAL(16, 231, 14), // "batteryChanged"
QT_MOC_LITERAL(17, 246, 7), // "voltage"
QT_MOC_LITERAL(18, 254, 7), // "current"
QT_MOC_LITERAL(19, 262, 7), // "percent"
QT_MOC_LITERAL(20, 270, 7), // "seconds"
QT_MOC_LITERAL(21, 278, 16), // "setNewParameters"
QT_MOC_LITERAL(22, 295, 6) // "object"

    },
    "BatteryMonitorConfig\0parameterChanged\0"
    "\0uas\0component\0parameterName\0value\0"
    "calcDividerSet\0measuredVoltsSet\0"
    "measuredCurrentSet\0measuredVoltsSetBasic\0"
    "measuredCurrentSetBasic\0ampsPerVoltSet\0"
    "batteryCapacitySet\0activeUASSet\0"
    "UASInterface*\0batteryChanged\0voltage\0"
    "current\0percent\0seconds\0setNewParameters\0"
    "object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BatteryMonitorConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x08 /* Private */,
       7,    0,   78,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x08 /* Private */,
       9,    0,   80,    2, 0x08 /* Private */,
      10,    0,   81,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    5,   88,    2, 0x08 /* Private */,
      21,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    3,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    3,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QObjectStar,   22,

       0        // eod
};

void BatteryMonitorConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BatteryMonitorConfig *_t = static_cast<BatteryMonitorConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->calcDividerSet(); break;
        case 2: _t->measuredVoltsSet(); break;
        case 3: _t->measuredCurrentSet(); break;
        case 4: _t->measuredVoltsSetBasic(); break;
        case 5: _t->measuredCurrentSetBasic(); break;
        case 6: _t->ampsPerVoltSet(); break;
        case 7: _t->batteryCapacitySet(); break;
        case 8: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 10: _t->setNewParameters((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        }
    }
}

const QMetaObject BatteryMonitorConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_BatteryMonitorConfig.data,
      qt_meta_data_BatteryMonitorConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BatteryMonitorConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatteryMonitorConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryMonitorConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int BatteryMonitorConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
