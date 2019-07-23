/****************************************************************************
** Meta object code from reading C++ file 'BasicPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/BasicPidConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BasicPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasicPidConfig_t {
    QByteArrayData data[12];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasicPidConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasicPidConfig_t qt_meta_stringdata_BasicPidConfig = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BasicPidConfig"
QT_MOC_LITERAL(1, 15, 16), // "rPRCValueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "name"
QT_MOC_LITERAL(4, 38, 5), // "value"
QT_MOC_LITERAL(5, 44, 14), // "tAValueChanged"
QT_MOC_LITERAL(6, 59, 14), // "tHValueChanged"
QT_MOC_LITERAL(7, 74, 18), // "rcFeelValueChanged"
QT_MOC_LITERAL(8, 93, 16), // "parameterChanged"
QT_MOC_LITERAL(9, 110, 3), // "uas"
QT_MOC_LITERAL(10, 114, 9), // "component"
QT_MOC_LITERAL(11, 124, 13) // "parameterName"

    },
    "BasicPidConfig\0rPRCValueChanged\0\0name\0"
    "value\0tAValueChanged\0tHValueChanged\0"
    "rcFeelValueChanged\0parameterChanged\0"
    "uas\0component\0parameterName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasicPidConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    2,   44,    2, 0x08 /* Private */,
       6,    2,   49,    2, 0x08 /* Private */,
       7,    2,   54,    2, 0x08 /* Private */,
       8,    4,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    9,   10,   11,    4,

       0        // eod
};

void BasicPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BasicPidConfig *_t = static_cast<BasicPidConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rPRCValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->tAValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->tHValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->rcFeelValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject BasicPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_BasicPidConfig.data,
      qt_meta_data_BasicPidConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BasicPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasicPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasicPidConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int BasicPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
