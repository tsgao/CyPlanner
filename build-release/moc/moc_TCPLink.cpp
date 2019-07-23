/****************************************************************************
** Meta object code from reading C++ file 'TCPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/TCPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPLink_t {
    QByteArrayData data[16];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPLink_t qt_meta_stringdata_TCPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TCPLink"
QT_MOC_LITERAL(1, 8, 7), // "setPort"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "port"
QT_MOC_LITERAL(4, 22, 11), // "setAsServer"
QT_MOC_LITERAL(5, 34, 8), // "asServer"
QT_MOC_LITERAL(6, 43, 10), // "writeBytes"
QT_MOC_LITERAL(7, 54, 11), // "const char*"
QT_MOC_LITERAL(8, 66, 4), // "data"
QT_MOC_LITERAL(9, 71, 6), // "length"
QT_MOC_LITERAL(10, 78, 12), // "_socketError"
QT_MOC_LITERAL(11, 91, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 120, 11), // "socketError"
QT_MOC_LITERAL(13, 132, 19), // "_socketDisconnected"
QT_MOC_LITERAL(14, 152, 13), // "newConnection"
QT_MOC_LITERAL(15, 166, 9) // "readBytes"

    },
    "TCPLink\0setPort\0\0port\0setAsServer\0"
    "asServer\0writeBytes\0const char*\0data\0"
    "length\0_socketError\0QAbstractSocket::SocketError\0"
    "socketError\0_socketDisconnected\0"
    "newConnection\0readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    2,   55,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x09 /* Protected */,
      13,    0,   63,    2, 0x09 /* Protected */,
      14,    0,   64,    2, 0x09 /* Protected */,
      15,    0,   65,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPLink *_t = static_cast<TCPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setAsServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->_socketDisconnected(); break;
        case 5: _t->newConnection(); break;
        case 6: _t->readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TCPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_TCPLink.data,
      qt_meta_data_TCPLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int TCPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
