/****************************************************************************
** Meta object code from reading C++ file 'CopterPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/CopterPidConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CopterPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CopterPidConfig_t {
    QByteArrayData data[16];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CopterPidConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CopterPidConfig_t qt_meta_stringdata_CopterPidConfig = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CopterPidConfig"
QT_MOC_LITERAL(1, 16, 18), // "writeButtonClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 20), // "refreshButtonClicked"
QT_MOC_LITERAL(4, 57, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 74, 3), // "uas"
QT_MOC_LITERAL(6, 78, 9), // "component"
QT_MOC_LITERAL(7, 88, 13), // "parameterName"
QT_MOC_LITERAL(8, 102, 5), // "value"
QT_MOC_LITERAL(9, 108, 19), // "lockCheckBoxClicked"
QT_MOC_LITERAL(10, 128, 7), // "checked"
QT_MOC_LITERAL(11, 136, 19), // "stabilLockedChanged"
QT_MOC_LITERAL(12, 156, 12), // "ratePChanged"
QT_MOC_LITERAL(13, 169, 12), // "rateIChanged"
QT_MOC_LITERAL(14, 182, 12), // "rateDChanged"
QT_MOC_LITERAL(15, 195, 15) // "rateIMAXChanged"

    },
    "CopterPidConfig\0writeButtonClicked\0\0"
    "refreshButtonClicked\0parameterChanged\0"
    "uas\0component\0parameterName\0value\0"
    "lockCheckBoxClicked\0checked\0"
    "stabilLockedChanged\0ratePChanged\0"
    "rateIChanged\0rateDChanged\0rateIMAXChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CopterPidConfig[] = {

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

void CopterPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CopterPidConfig *_t = static_cast<CopterPidConfig *>(_o);
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

const QMetaObject CopterPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_CopterPidConfig.data,
      qt_meta_data_CopterPidConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CopterPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopterPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CopterPidConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int CopterPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
