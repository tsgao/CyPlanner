/****************************************************************************
** Meta object code from reading C++ file 'serialconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/serialconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialConnection_t {
    QByteArrayData data[36];
    char stringdata0[422];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConnection_t qt_meta_stringdata_SerialConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SerialConnection"
QT_MOC_LITERAL(1, 17, 16), // "timeoutTriggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 50, 7), // "connect"
QT_MOC_LITERAL(5, 58, 10), // "disconnect"
QT_MOC_LITERAL(6, 69, 10), // "writeBytes"
QT_MOC_LITERAL(7, 80, 11), // "const char*"
QT_MOC_LITERAL(8, 92, 3), // "buf"
QT_MOC_LITERAL(9, 96, 4), // "size"
QT_MOC_LITERAL(10, 101, 9), // "readBytes"
QT_MOC_LITERAL(11, 111, 11), // "setPortName"
QT_MOC_LITERAL(12, 123, 8), // "portName"
QT_MOC_LITERAL(13, 132, 11), // "setBaudRate"
QT_MOC_LITERAL(14, 144, 4), // "rate"
QT_MOC_LITERAL(15, 149, 15), // "setBaudRateType"
QT_MOC_LITERAL(16, 165, 9), // "rateIndex"
QT_MOC_LITERAL(17, 175, 11), // "setFlowType"
QT_MOC_LITERAL(18, 187, 4), // "flow"
QT_MOC_LITERAL(19, 192, 13), // "setParityType"
QT_MOC_LITERAL(20, 206, 6), // "parity"
QT_MOC_LITERAL(21, 213, 15), // "setDataBitsType"
QT_MOC_LITERAL(22, 229, 8), // "dataBits"
QT_MOC_LITERAL(23, 238, 15), // "setStopBitsType"
QT_MOC_LITERAL(24, 254, 8), // "stopBits"
QT_MOC_LITERAL(25, 263, 12), // "loadSettings"
QT_MOC_LITERAL(26, 276, 13), // "writeSettings"
QT_MOC_LITERAL(27, 290, 9), // "readyRead"
QT_MOC_LITERAL(28, 300, 17), // "setBaudRateString"
QT_MOC_LITERAL(29, 318, 4), // "baud"
QT_MOC_LITERAL(30, 323, 16), // "timeoutTimerTick"
QT_MOC_LITERAL(31, 340, 19), // "connectionDestroyed"
QT_MOC_LITERAL(32, 360, 6), // "object"
QT_MOC_LITERAL(33, 367, 9), // "portError"
QT_MOC_LITERAL(34, 377, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(35, 406, 15) // "serialPortError"

    },
    "SerialConnection\0timeoutTriggered\0\0"
    "LinkInterface*\0connect\0disconnect\0"
    "writeBytes\0const char*\0buf\0size\0"
    "readBytes\0setPortName\0portName\0"
    "setBaudRate\0rate\0setBaudRateType\0"
    "rateIndex\0setFlowType\0flow\0setParityType\0"
    "parity\0setDataBitsType\0dataBits\0"
    "setStopBitsType\0stopBits\0loadSettings\0"
    "writeSettings\0readyRead\0setBaudRateString\0"
    "baud\0timeoutTimerTick\0connectionDestroyed\0"
    "object\0portError\0QSerialPort::SerialPortError\0"
    "serialPortError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  112,    2, 0x0a /* Public */,
       5,    0,  113,    2, 0x0a /* Public */,
       6,    2,  114,    2, 0x0a /* Public */,
      10,    0,  119,    2, 0x0a /* Public */,
      11,    1,  120,    2, 0x0a /* Public */,
      13,    1,  123,    2, 0x0a /* Public */,
      15,    1,  126,    2, 0x0a /* Public */,
      17,    1,  129,    2, 0x0a /* Public */,
      19,    1,  132,    2, 0x0a /* Public */,
      21,    1,  135,    2, 0x0a /* Public */,
      23,    1,  138,    2, 0x0a /* Public */,
      25,    0,  141,    2, 0x0a /* Public */,
      26,    0,  142,    2, 0x0a /* Public */,
      27,    0,  143,    2, 0x0a /* Public */,
      28,    1,  144,    2, 0x0a /* Public */,
      30,    0,  147,    2, 0x08 /* Private */,
      31,    1,  148,    2, 0x08 /* Private */,
      33,    1,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7, QMetaType::LongLong,    8,    9,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Bool, QMetaType::Int,   14,
    QMetaType::Bool, QMetaType::Int,   16,
    QMetaType::Bool, QMetaType::Int,   18,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool, QMetaType::Int,   22,
    QMetaType::Bool, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   32,
    QMetaType::Void, 0x80000000 | 34,   35,

       0        // eod
};

void SerialConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConnection *_t = static_cast<SerialConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeoutTriggered((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->disconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->readBytes(); break;
        case 5: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->setBaudRateType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->setFlowType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setParityType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setDataBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->setStopBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->loadSettings(); break;
        case 13: _t->writeSettings(); break;
        case 14: _t->readyRead(); break;
        case 15: { bool _r = _t->setBaudRateString((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->timeoutTimerTick(); break;
        case 17: _t->connectionDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 18: _t->portError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (SerialConnection::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConnection::timeoutTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SerialConnection::staticMetaObject = {
    { &SerialLinkInterface::staticMetaObject, qt_meta_stringdata_SerialConnection.data,
      qt_meta_data_SerialConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConnection.stringdata0))
        return static_cast<void*>(this);
    return SerialLinkInterface::qt_metacast(_clname);
}

int SerialConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SerialLinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void SerialConnection::timeoutTriggered(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
