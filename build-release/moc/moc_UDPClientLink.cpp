/****************************************************************************
** Meta object code from reading C++ file 'UDPClientLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/UDPClientLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPClientLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDPClientLink_t {
    QByteArrayData data[19];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPClientLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPClientLink_t qt_meta_stringdata_UDPClientLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UDPClientLink"
QT_MOC_LITERAL(1, 14, 10), // "setAddress"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "QHostAddress"
QT_MOC_LITERAL(4, 39, 4), // "host"
QT_MOC_LITERAL(5, 44, 7), // "setPort"
QT_MOC_LITERAL(6, 52, 4), // "port"
QT_MOC_LITERAL(7, 57, 9), // "readBytes"
QT_MOC_LITERAL(8, 67, 10), // "writeBytes"
QT_MOC_LITERAL(9, 78, 11), // "const char*"
QT_MOC_LITERAL(10, 90, 4), // "data"
QT_MOC_LITERAL(11, 95, 6), // "length"
QT_MOC_LITERAL(12, 102, 7), // "connect"
QT_MOC_LITERAL(13, 110, 10), // "disconnect"
QT_MOC_LITERAL(14, 121, 12), // "_socketError"
QT_MOC_LITERAL(15, 134, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(16, 163, 11), // "socketError"
QT_MOC_LITERAL(17, 175, 19), // "_socketDisconnected"
QT_MOC_LITERAL(18, 195, 19) // "_sendTriggerMessage"

    },
    "UDPClientLink\0setAddress\0\0QHostAddress\0"
    "host\0setPort\0port\0readBytes\0writeBytes\0"
    "const char*\0data\0length\0connect\0"
    "disconnect\0_socketError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "_socketDisconnected\0_sendTriggerMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPClientLink[] = {

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
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    2,   66,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x0a /* Public */,
      14,    1,   73,    2, 0x09 /* Protected */,
      17,    0,   76,    2, 0x09 /* Protected */,
      18,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::LongLong,   10,   11,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UDPClientLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPClientLink *_t = static_cast<UDPClientLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAddress((*reinterpret_cast< QHostAddress(*)>(_a[1]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->readBytes(); break;
        case 3: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: { bool _r = _t->connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->disconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->_socketDisconnected(); break;
        case 8: _t->_sendTriggerMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject UDPClientLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_UDPClientLink.data,
      qt_meta_data_UDPClientLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UDPClientLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPClientLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPClientLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int UDPClientLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
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
