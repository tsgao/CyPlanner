/****************************************************************************
** Meta object code from reading C++ file 'RadioCalibrationData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/RadioCalibrationData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioCalibrationData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioCalibrationData_t {
    QByteArrayData data[11];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioCalibrationData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioCalibrationData_t qt_meta_stringdata_RadioCalibrationData = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RadioCalibrationData"
QT_MOC_LITERAL(1, 21, 10), // "setAileron"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 8), // "uint16_t"
QT_MOC_LITERAL(5, 48, 5), // "value"
QT_MOC_LITERAL(6, 54, 11), // "setElevator"
QT_MOC_LITERAL(7, 66, 9), // "setRudder"
QT_MOC_LITERAL(8, 76, 7), // "setGyro"
QT_MOC_LITERAL(9, 84, 8), // "setPitch"
QT_MOC_LITERAL(10, 93, 11) // "setThrottle"

    },
    "RadioCalibrationData\0setAileron\0\0index\0"
    "uint16_t\0value\0setElevator\0setRudder\0"
    "setGyro\0setPitch\0setThrottle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioCalibrationData[] = {

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
       1,    2,   44,    2, 0x0a /* Public */,
       6,    2,   49,    2, 0x0a /* Public */,
       7,    2,   54,    2, 0x0a /* Public */,
       8,    2,   59,    2, 0x0a /* Public */,
       9,    2,   64,    2, 0x0a /* Public */,
      10,    2,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void RadioCalibrationData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioCalibrationData *_t = static_cast<RadioCalibrationData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAileron((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 1: _t->setElevator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 2: _t->setRudder((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 3: _t->setGyro((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 4: _t->setPitch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 5: _t->setThrottle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject RadioCalibrationData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RadioCalibrationData.data,
      qt_meta_data_RadioCalibrationData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioCalibrationData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioCalibrationData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioCalibrationData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RadioCalibrationData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
