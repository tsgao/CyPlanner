/****************************************************************************
** Meta object code from reading C++ file 'AdvancedParamConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AdvancedParamConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdvancedParamConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdvancedParamConfig_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdvancedParamConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdvancedParamConfig_t qt_meta_stringdata_AdvancedParamConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AdvancedParamConfig"
QT_MOC_LITERAL(1, 20, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "uas"
QT_MOC_LITERAL(4, 42, 9), // "component"
QT_MOC_LITERAL(5, 52, 13), // "parameterName"
QT_MOC_LITERAL(6, 66, 5), // "value"
QT_MOC_LITERAL(7, 72, 18), // "doubleValueChanged"
QT_MOC_LITERAL(8, 91, 5), // "param"
QT_MOC_LITERAL(9, 97, 15), // "intValueChanged"
QT_MOC_LITERAL(10, 113, 21), // "onSearchFilterChanged"
QT_MOC_LITERAL(11, 135, 16) // "searchFilterText"

    },
    "AdvancedParamConfig\0parameterChanged\0"
    "\0uas\0component\0parameterName\0value\0"
    "doubleValueChanged\0param\0intValueChanged\0"
    "onSearchFilterChanged\0searchFilterText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvancedParamConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x0a /* Public */,
       7,    2,   43,    2, 0x08 /* Private */,
       9,    2,   48,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    8,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    6,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void AdvancedParamConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdvancedParamConfig *_t = static_cast<AdvancedParamConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->doubleValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->intValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onSearchFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AdvancedParamConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_AdvancedParamConfig.data,
      qt_meta_data_AdvancedParamConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdvancedParamConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvancedParamConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedParamConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int AdvancedParamConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
