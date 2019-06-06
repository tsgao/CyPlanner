/****************************************************************************
** Meta object code from reading C++ file 'PxQuadMAV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/PxQuadMAV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PxQuadMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PxQuadMAV_t {
    QByteArrayData data[23];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PxQuadMAV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PxQuadMAV_t qt_meta_stringdata_PxQuadMAV = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PxQuadMAV"
QT_MOC_LITERAL(1, 10, 16), // "watchdogReceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "systemId"
QT_MOC_LITERAL(4, 37, 10), // "watchdogId"
QT_MOC_LITERAL(5, 48, 12), // "processCount"
QT_MOC_LITERAL(6, 61, 15), // "processReceived"
QT_MOC_LITERAL(7, 77, 9), // "processId"
QT_MOC_LITERAL(8, 87, 4), // "name"
QT_MOC_LITERAL(9, 92, 9), // "arguments"
QT_MOC_LITERAL(10, 102, 7), // "timeout"
QT_MOC_LITERAL(11, 110, 14), // "processChanged"
QT_MOC_LITERAL(12, 125, 5), // "state"
QT_MOC_LITERAL(13, 131, 5), // "muted"
QT_MOC_LITERAL(14, 137, 7), // "crashed"
QT_MOC_LITERAL(15, 145, 3), // "pid"
QT_MOC_LITERAL(16, 149, 14), // "receiveMessage"
QT_MOC_LITERAL(17, 164, 14), // "LinkInterface*"
QT_MOC_LITERAL(18, 179, 4), // "link"
QT_MOC_LITERAL(19, 184, 17), // "mavlink_message_t"
QT_MOC_LITERAL(20, 202, 7), // "message"
QT_MOC_LITERAL(21, 210, 18), // "sendProcessCommand"
QT_MOC_LITERAL(22, 229, 7) // "command"

    },
    "PxQuadMAV\0watchdogReceived\0\0systemId\0"
    "watchdogId\0processCount\0processReceived\0"
    "processId\0name\0arguments\0timeout\0"
    "processChanged\0state\0muted\0crashed\0"
    "pid\0receiveMessage\0LinkInterface*\0"
    "link\0mavlink_message_t\0message\0"
    "sendProcessCommand\0command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PxQuadMAV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    6,   46,    2, 0x06 /* Public */,
      11,    7,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,   74,    2, 0x0a /* Public */,
      21,    3,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,    7,   12,   13,   14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UInt,    4,    7,   22,

       0        // eod
};

void PxQuadMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PxQuadMAV *_t = static_cast<PxQuadMAV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->watchdogReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->processReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 2: _t->processChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 3: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 4: _t->sendProcessCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (PxQuadMAV::*_t)(int , int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PxQuadMAV::watchdogReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PxQuadMAV::*_t)(int , int , int , QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PxQuadMAV::processReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PxQuadMAV::*_t)(int , int , int , int , bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PxQuadMAV::processChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PxQuadMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_PxQuadMAV.data,
      qt_meta_data_PxQuadMAV,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PxQuadMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PxQuadMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PxQuadMAV.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qgroundcontrol/1.0"))
        return static_cast< UASInterface*>(this);
    return UAS::qt_metacast(_clname);
}

int PxQuadMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PxQuadMAV::watchdogReceived(int _t1, int _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PxQuadMAV::processReceived(int _t1, int _t2, int _t3, QString _t4, QString _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PxQuadMAV::processChanged(int _t1, int _t2, int _t3, int _t4, bool _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
