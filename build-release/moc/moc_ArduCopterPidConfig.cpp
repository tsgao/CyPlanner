/****************************************************************************
** Meta object code from reading C++ file 'ArduCopterPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ArduCopterPidConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduCopterPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArduCopterPidConfig_t {
    QByteArrayData data[16];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduCopterPidConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduCopterPidConfig_t qt_meta_stringdata_ArduCopterPidConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ArduCopterPidConfig"
QT_MOC_LITERAL(1, 20, 18), // "writeButtonClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "refreshButtonClicked"
QT_MOC_LITERAL(4, 61, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 78, 3), // "uas"
QT_MOC_LITERAL(6, 82, 9), // "component"
QT_MOC_LITERAL(7, 92, 13), // "parameterName"
QT_MOC_LITERAL(8, 106, 5), // "value"
QT_MOC_LITERAL(9, 112, 19), // "lockCheckBoxClicked"
QT_MOC_LITERAL(10, 132, 7), // "checked"
QT_MOC_LITERAL(11, 140, 19), // "stabilLockedChanged"
QT_MOC_LITERAL(12, 160, 12), // "ratePChanged"
QT_MOC_LITERAL(13, 173, 12), // "rateIChanged"
QT_MOC_LITERAL(14, 186, 12), // "rateDChanged"
QT_MOC_LITERAL(15, 199, 15) // "rateIMAXChanged"

    },
    "ArduCopterPidConfig\0writeButtonClicked\0"
    "\0refreshButtonClicked\0parameterChanged\0"
    "uas\0component\0parameterName\0value\0"
    "lockCheckBoxClicked\0checked\0"
    "stabilLockedChanged\0ratePChanged\0"
    "rateIChanged\0rateDChanged\0rateIMAXChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduCopterPidConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    4,   61,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void ArduCopterPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArduCopterPidConfig *_t = static_cast<ArduCopterPidConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeButtonClicked(); break;
        case 1: _t->refreshButtonClicked(); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 3: _t->lockCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->stabilLockedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->ratePChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->rateIChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->rateDChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->rateIMAXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ArduCopterPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ArduCopterPidConfig.data,
      qt_meta_data_ArduCopterPidConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ArduCopterPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduCopterPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArduCopterPidConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ArduCopterPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
