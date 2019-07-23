/****************************************************************************
** Meta object code from reading C++ file 'ArduPilotMegaMAV.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/ArduPilotMegaMAV.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduPilotMegaMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArduPilotMegaMAV_t {
    QByteArrayData data[22];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduPilotMegaMAV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduPilotMegaMAV_t qt_meta_stringdata_ArduPilotMegaMAV = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ArduPilotMegaMAV"
QT_MOC_LITERAL(1, 17, 15), // "versionDetected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "versionString"
QT_MOC_LITERAL(4, 48, 14), // "receiveMessage"
QT_MOC_LITERAL(5, 63, 14), // "LinkInterface*"
QT_MOC_LITERAL(6, 78, 4), // "link"
QT_MOC_LITERAL(7, 83, 17), // "mavlink_message_t"
QT_MOC_LITERAL(8, 101, 7), // "message"
QT_MOC_LITERAL(9, 109, 21), // "RequestAllDataStreams"
QT_MOC_LITERAL(10, 131, 9), // "armSystem"
QT_MOC_LITERAL(11, 141, 12), // "disarmSystem"
QT_MOC_LITERAL(12, 154, 19), // "textMessageReceived"
QT_MOC_LITERAL(13, 174, 5), // "uasid"
QT_MOC_LITERAL(14, 180, 11), // "componentid"
QT_MOC_LITERAL(15, 192, 8), // "severity"
QT_MOC_LITERAL(16, 201, 4), // "text"
QT_MOC_LITERAL(17, 206, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(18, 223, 7), // "timeout"
QT_MOC_LITERAL(19, 231, 2), // "ms"
QT_MOC_LITERAL(20, 234, 12), // "uasConnected"
QT_MOC_LITERAL(21, 247, 15) // "uasDisconnected"

    },
    "ArduPilotMegaMAV\0versionDetected\0\0"
    "versionString\0receiveMessage\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "message\0RequestAllDataStreams\0armSystem\0"
    "disarmSystem\0textMessageReceived\0uasid\0"
    "componentid\0severity\0text\0heartbeatTimeout\0"
    "timeout\0ms\0uasConnected\0uasDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduPilotMegaMAV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   62,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    4,   70,    2, 0x0a /* Public */,
      17,    2,   79,    2, 0x0a /* Public */,
      20,    0,   84,    2, 0x08 /* Private */,
      21,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,   18,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ArduPilotMegaMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArduPilotMegaMAV *_t = static_cast<ArduPilotMegaMAV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->versionDetected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 2: _t->RequestAllDataStreams(); break;
        case 3: _t->armSystem(); break;
        case 4: _t->disarmSystem(); break;
        case 5: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 6: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: _t->uasConnected(); break;
        case 8: _t->uasDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (ArduPilotMegaMAV::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduPilotMegaMAV::versionDetected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ArduPilotMegaMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_ArduPilotMegaMAV.data,
      qt_meta_data_ArduPilotMegaMAV,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ArduPilotMegaMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduPilotMegaMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArduPilotMegaMAV.stringdata0))
        return static_cast<void*>(this);
    return UAS::qt_metacast(_clname);
}

int ArduPilotMegaMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ArduPilotMegaMAV::versionDetected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
