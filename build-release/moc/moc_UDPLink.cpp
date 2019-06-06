/****************************************************************************
** Meta object code from reading C++ file 'UDPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/UDPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDPLink_t {
    QByteArrayData data[16];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPLink_t qt_meta_stringdata_UDPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UDPLink"
QT_MOC_LITERAL(1, 8, 10), // "setAddress"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "QHostAddress"
QT_MOC_LITERAL(4, 33, 4), // "host"
QT_MOC_LITERAL(5, 38, 7), // "setPort"
QT_MOC_LITERAL(6, 46, 4), // "port"
QT_MOC_LITERAL(7, 51, 7), // "addHost"
QT_MOC_LITERAL(8, 59, 10), // "removeHost"
QT_MOC_LITERAL(9, 70, 9), // "readBytes"
QT_MOC_LITERAL(10, 80, 10), // "writeBytes"
QT_MOC_LITERAL(11, 91, 11), // "const char*"
QT_MOC_LITERAL(12, 103, 4), // "data"
QT_MOC_LITERAL(13, 108, 6), // "length"
QT_MOC_LITERAL(14, 115, 7), // "connect"
QT_MOC_LITERAL(15, 123, 10) // "disconnect"

    },
    "UDPLink\0setAddress\0\0QHostAddress\0host\0"
    "setPort\0port\0addHost\0removeHost\0"
    "readBytes\0writeBytes\0const char*\0data\0"
    "length\0connect\0disconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    2,   67,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::LongLong,   12,   13,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPLink *_t = static_cast<UDPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAddress((*reinterpret_cast< QHostAddress(*)>(_a[1]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readBytes(); break;
        case 5: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: { bool _r = _t->connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->disconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject UDPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_UDPLink.data,
      qt_meta_data_UDPLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
