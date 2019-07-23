/****************************************************************************
** Meta object code from reading C++ file 'RangeFinderConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/RangeFinderConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RangeFinderConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RangeFinderConfig_t {
    QByteArrayData data[16];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RangeFinderConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RangeFinderConfig_t qt_meta_stringdata_RangeFinderConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RangeFinderConfig"
QT_MOC_LITERAL(1, 18, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "uas"
QT_MOC_LITERAL(4, 40, 9), // "component"
QT_MOC_LITERAL(5, 50, 13), // "parameterName"
QT_MOC_LITERAL(6, 64, 5), // "value"
QT_MOC_LITERAL(7, 70, 22), // "rangeFinderTypeChanged"
QT_MOC_LITERAL(8, 93, 5), // "index"
QT_MOC_LITERAL(9, 99, 17), // "gainSliderChanged"
QT_MOC_LITERAL(10, 117, 20), // "sendParameterUpdates"
QT_MOC_LITERAL(11, 138, 12), // "activeUASSet"
QT_MOC_LITERAL(12, 151, 13), // "UASInterface*"
QT_MOC_LITERAL(13, 165, 17), // "rangeFinderUpdate"
QT_MOC_LITERAL(14, 183, 8), // "distance"
QT_MOC_LITERAL(15, 192, 7) // "voltage"

    },
    "RangeFinderConfig\0parameterChanged\0\0"
    "uas\0component\0parameterName\0value\0"
    "rangeFinderTypeChanged\0index\0"
    "gainSliderChanged\0sendParameterUpdates\0"
    "activeUASSet\0UASInterface*\0rangeFinderUpdate\0"
    "distance\0voltage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RangeFinderConfig[] = {

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
       1,    4,   44,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      13,    3,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    3,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Double, QMetaType::Double,    3,   14,   15,

       0        // eod
};

void RangeFinderConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RangeFinderConfig *_t = static_cast<RangeFinderConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->rangeFinderTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->gainSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendParameterUpdates(); break;
        case 4: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->rangeFinderUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject RangeFinderConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_RangeFinderConfig.data,
      qt_meta_data_RangeFinderConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RangeFinderConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RangeFinderConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RangeFinderConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int RangeFinderConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
