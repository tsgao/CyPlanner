/****************************************************************************
** Meta object code from reading C++ file 'OpticalFlowConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/OpticalFlowConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpticalFlowConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpticalFlowConfig_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpticalFlowConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpticalFlowConfig_t qt_meta_stringdata_OpticalFlowConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OpticalFlowConfig"
QT_MOC_LITERAL(1, 18, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "uas"
QT_MOC_LITERAL(4, 40, 9), // "component"
QT_MOC_LITERAL(5, 50, 13), // "parameterName"
QT_MOC_LITERAL(6, 64, 5), // "value"
QT_MOC_LITERAL(7, 70, 21), // "enableCheckBoxClicked"
QT_MOC_LITERAL(8, 92, 7) // "checked"

    },
    "OpticalFlowConfig\0parameterChanged\0\0"
    "uas\0component\0parameterName\0value\0"
    "enableCheckBoxClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpticalFlowConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x08 /* Private */,
       7,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void OpticalFlowConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpticalFlowConfig *_t = static_cast<OpticalFlowConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->enableCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OpticalFlowConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_OpticalFlowConfig.data,
      qt_meta_data_OpticalFlowConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpticalFlowConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpticalFlowConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpticalFlowConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int OpticalFlowConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE