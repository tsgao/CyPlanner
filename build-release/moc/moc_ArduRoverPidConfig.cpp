/****************************************************************************
** Meta object code from reading C++ file 'ArduRoverPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ArduRoverPidConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduRoverPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArduRoverPidConfig_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduRoverPidConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduRoverPidConfig_t qt_meta_stringdata_ArduRoverPidConfig = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ArduRoverPidConfig"
QT_MOC_LITERAL(1, 19, 18), // "writeButtonClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "refreshButtonClicked"
QT_MOC_LITERAL(4, 60, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 77, 3), // "uas"
QT_MOC_LITERAL(6, 81, 9), // "component"
QT_MOC_LITERAL(7, 91, 13), // "parameterName"
QT_MOC_LITERAL(8, 105, 5) // "value"

    },
    "ArduRoverPidConfig\0writeButtonClicked\0"
    "\0refreshButtonClicked\0parameterChanged\0"
    "uas\0component\0parameterName\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduRoverPidConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    4,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    5,    6,    7,    8,

       0        // eod
};

void ArduRoverPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArduRoverPidConfig *_t = static_cast<ArduRoverPidConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeButtonClicked(); break;
        case 1: _t->refreshButtonClicked(); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject ArduRoverPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ArduRoverPidConfig.data,
      qt_meta_data_ArduRoverPidConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ArduRoverPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduRoverPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArduRoverPidConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ArduRoverPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
