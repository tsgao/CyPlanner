/****************************************************************************
** Meta object code from reading C++ file 'SlugsMAV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/SlugsMAV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlugsMAV_t {
    QByteArrayData data[15];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlugsMAV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlugsMAV_t qt_meta_stringdata_SlugsMAV = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SlugsMAV"
QT_MOC_LITERAL(1, 9, 11), // "slugsRawImu"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "uasId"
QT_MOC_LITERAL(4, 28, 17), // "mavlink_raw_imu_t"
QT_MOC_LITERAL(5, 46, 7), // "rawData"
QT_MOC_LITERAL(6, 54, 14), // "slugsGPSCogSog"
QT_MOC_LITERAL(7, 69, 3), // "cog"
QT_MOC_LITERAL(8, 73, 3), // "sog"
QT_MOC_LITERAL(9, 77, 14), // "receiveMessage"
QT_MOC_LITERAL(10, 92, 14), // "LinkInterface*"
QT_MOC_LITERAL(11, 107, 4), // "link"
QT_MOC_LITERAL(12, 112, 17), // "mavlink_message_t"
QT_MOC_LITERAL(13, 130, 7), // "message"
QT_MOC_LITERAL(14, 138, 11) // "emitSignals"

    },
    "SlugsMAV\0slugsRawImu\0\0uasId\0"
    "mavlink_raw_imu_t\0rawData\0slugsGPSCogSog\0"
    "cog\0sog\0receiveMessage\0LinkInterface*\0"
    "link\0mavlink_message_t\0message\0"
    "emitSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlugsMAV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   46,    2, 0x0a /* Public */,
      14,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void,

       0        // eod
};

void SlugsMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlugsMAV *_t = static_cast<SlugsMAV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slugsRawImu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const mavlink_raw_imu_t(*)>(_a[2]))); break;
        case 1: _t->slugsGPSCogSog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 3: _t->emitSignals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SlugsMAV::*_t)(int , const mavlink_raw_imu_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlugsMAV::slugsRawImu)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SlugsMAV::*_t)(int , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlugsMAV::slugsGPSCogSog)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SlugsMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_SlugsMAV.data,
      qt_meta_data_SlugsMAV,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlugsMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlugsMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsMAV.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qgroundcontrol/1.0"))
        return static_cast< UASInterface*>(this);
    return UAS::qt_metacast(_clname);
}

int SlugsMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SlugsMAV::slugsRawImu(int _t1, const mavlink_raw_imu_t & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SlugsMAV::slugsGPSCogSog(int _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
