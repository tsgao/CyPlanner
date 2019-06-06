/****************************************************************************
** Meta object code from reading C++ file 'AirspeedConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AirspeedConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirspeedConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirspeedConfig_t {
    QByteArrayData data[15];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirspeedConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirspeedConfig_t qt_meta_stringdata_AirspeedConfig = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AirspeedConfig"
QT_MOC_LITERAL(1, 15, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "uas"
QT_MOC_LITERAL(4, 37, 9), // "component"
QT_MOC_LITERAL(5, 47, 13), // "parameterName"
QT_MOC_LITERAL(6, 61, 5), // "value"
QT_MOC_LITERAL(7, 67, 18), // "useCheckBoxClicked"
QT_MOC_LITERAL(8, 86, 7), // "checked"
QT_MOC_LITERAL(9, 94, 21), // "enableCheckBoxClicked"
QT_MOC_LITERAL(10, 116, 29), // "hardwareSelectComboBoxChanged"
QT_MOC_LITERAL(11, 146, 5), // "index"
QT_MOC_LITERAL(12, 152, 27), // "sensorSelectComboBoxChanged"
QT_MOC_LITERAL(13, 180, 24), // "pinSelectComboBoxChanged"
QT_MOC_LITERAL(14, 205, 22) // "pinSpinBoxValueChanged"

    },
    "AirspeedConfig\0parameterChanged\0\0uas\0"
    "component\0parameterName\0value\0"
    "useCheckBoxClicked\0checked\0"
    "enableCheckBoxClicked\0"
    "hardwareSelectComboBoxChanged\0index\0"
    "sensorSelectComboBoxChanged\0"
    "pinSelectComboBoxChanged\0"
    "pinSpinBoxValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirspeedConfig[] = {

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
       1,    4,   49,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,
      13,    1,   70,    2, 0x08 /* Private */,
      14,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void AirspeedConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AirspeedConfig *_t = static_cast<AirspeedConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->useCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->hardwareSelectComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sensorSelectComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pinSelectComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->pinSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AirspeedConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_AirspeedConfig.data,
      qt_meta_data_AirspeedConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AirspeedConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirspeedConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int AirspeedConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
