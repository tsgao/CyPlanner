/****************************************************************************
** Meta object code from reading C++ file 'GeoFenceConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/GeoFenceConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoFenceConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoFenceConfig_t {
    QByteArrayData data[18];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoFenceConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoFenceConfig_t qt_meta_stringdata_GeoFenceConfig = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GeoFenceConfig"
QT_MOC_LITERAL(1, 15, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 43, 3), // "uas"
QT_MOC_LITERAL(5, 47, 19), // "enabledChangedState"
QT_MOC_LITERAL(6, 67, 5), // "state"
QT_MOC_LITERAL(7, 73, 16), // "fenceTypeChanged"
QT_MOC_LITERAL(8, 90, 5), // "index"
QT_MOC_LITERAL(9, 96, 18), // "fenceActionChanged"
QT_MOC_LITERAL(10, 115, 18), // "valueChangedMaxAlt"
QT_MOC_LITERAL(11, 134, 18), // "valueChangedRtlAlt"
QT_MOC_LITERAL(12, 153, 18), // "valueChangedRadius"
QT_MOC_LITERAL(13, 172, 23), // "valueChangedFinalRtlAlt"
QT_MOC_LITERAL(14, 196, 16), // "parameterChanged"
QT_MOC_LITERAL(15, 213, 9), // "component"
QT_MOC_LITERAL(16, 223, 13), // "parameterName"
QT_MOC_LITERAL(17, 237, 5) // "value"

    },
    "GeoFenceConfig\0activeUASSet\0\0UASInterface*\0"
    "uas\0enabledChangedState\0state\0"
    "fenceTypeChanged\0index\0fenceActionChanged\0"
    "valueChangedMaxAlt\0valueChangedRtlAlt\0"
    "valueChangedRadius\0valueChangedFinalRtlAlt\0"
    "parameterChanged\0component\0parameterName\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoFenceConfig[] = {

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
       1,    1,   59,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    4,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    4,   15,   16,   17,

       0        // eod
};

void GeoFenceConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeoFenceConfig *_t = static_cast<GeoFenceConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->enabledChangedState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fenceTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fenceActionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->valueChangedMaxAlt(); break;
        case 5: _t->valueChangedRtlAlt(); break;
        case 6: _t->valueChangedRadius(); break;
        case 7: _t->valueChangedFinalRtlAlt(); break;
        case 8: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
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

const QMetaObject GeoFenceConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_GeoFenceConfig.data,
      qt_meta_data_GeoFenceConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeoFenceConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoFenceConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoFenceConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int GeoFenceConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
