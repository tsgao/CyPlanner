/****************************************************************************
** Meta object code from reading C++ file 'FlightModeConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/FlightModeConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlightModeConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightModeConfig_t {
    QByteArrayData data[17];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightModeConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightModeConfig_t qt_meta_stringdata_FlightModeConfig = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FlightModeConfig"
QT_MOC_LITERAL(1, 17, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 45, 3), // "uas"
QT_MOC_LITERAL(5, 49, 17), // "saveButtonClicked"
QT_MOC_LITERAL(6, 67, 30), // "remoteControlChannelRawChanged"
QT_MOC_LITERAL(7, 98, 4), // "chan"
QT_MOC_LITERAL(8, 103, 3), // "val"
QT_MOC_LITERAL(9, 107, 16), // "parameterChanged"
QT_MOC_LITERAL(10, 124, 9), // "component"
QT_MOC_LITERAL(11, 134, 13), // "parameterName"
QT_MOC_LITERAL(12, 148, 5), // "value"
QT_MOC_LITERAL(13, 154, 12), // "resetMaximum"
QT_MOC_LITERAL(14, 167, 15), // "comboBoxChanged"
QT_MOC_LITERAL(15, 183, 5), // "index"
QT_MOC_LITERAL(16, 189, 16) // "enableSaveButton"

    },
    "FlightModeConfig\0activeUASSet\0\0"
    "UASInterface*\0uas\0saveButtonClicked\0"
    "remoteControlChannelRawChanged\0chan\0"
    "val\0parameterChanged\0component\0"
    "parameterName\0value\0resetMaximum\0"
    "comboBoxChanged\0index\0enableSaveButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightModeConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    2,   53,    2, 0x08 /* Private */,
       9,    4,   58,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,
      14,    1,   68,    2, 0x08 /* Private */,
      16,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    4,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

       0        // eod
};

void FlightModeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlightModeConfig *_t = static_cast<FlightModeConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->saveButtonClicked(); break;
        case 2: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 3: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 4: _t->resetMaximum(); break;
        case 5: _t->comboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->enableSaveButton(); break;
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

const QMetaObject FlightModeConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_FlightModeConfig.data,
      qt_meta_data_FlightModeConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FlightModeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightModeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightModeConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int FlightModeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
