/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkSimulationLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkSimulationLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkSimulationLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MAVLinkSimulationLink_t {
    QByteArrayData data[21];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkSimulationLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkSimulationLink_t qt_meta_stringdata_MAVLinkSimulationLink = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MAVLinkSimulationLink"
QT_MOC_LITERAL(1, 22, 12), // "valueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "uasId"
QT_MOC_LITERAL(4, 42, 5), // "curve"
QT_MOC_LITERAL(5, 48, 5), // "value"
QT_MOC_LITERAL(6, 54, 4), // "usec"
QT_MOC_LITERAL(7, 59, 15), // "messageReceived"
QT_MOC_LITERAL(8, 75, 17), // "mavlink_message_t"
QT_MOC_LITERAL(9, 93, 7), // "message"
QT_MOC_LITERAL(10, 101, 10), // "writeBytes"
QT_MOC_LITERAL(11, 112, 11), // "const char*"
QT_MOC_LITERAL(12, 124, 4), // "data"
QT_MOC_LITERAL(13, 129, 4), // "size"
QT_MOC_LITERAL(14, 134, 9), // "readBytes"
QT_MOC_LITERAL(15, 144, 8), // "mainloop"
QT_MOC_LITERAL(16, 153, 11), // "connectLink"
QT_MOC_LITERAL(17, 165, 7), // "connect"
QT_MOC_LITERAL(18, 173, 18), // "sendMAVLinkMessage"
QT_MOC_LITERAL(19, 192, 24), // "const mavlink_message_t*"
QT_MOC_LITERAL(20, 217, 3) // "msg"

    },
    "MAVLinkSimulationLink\0valueChanged\0\0"
    "uasId\0curve\0value\0usec\0messageReceived\0"
    "mavlink_message_t\0message\0writeBytes\0"
    "const char*\0data\0size\0readBytes\0"
    "mainloop\0connectLink\0connect\0"
    "sendMAVLinkMessage\0const mavlink_message_t*\0"
    "msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkSimulationLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   66,    2, 0x0a /* Public */,
      14,    0,   71,    2, 0x0a /* Public */,
      15,    0,   72,    2, 0x0a /* Public */,
      16,    1,   73,    2, 0x0a /* Public */,
      16,    0,   76,    2, 0x0a /* Public */,
      18,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Double, QMetaType::ULongLong,    3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::LongLong,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void MAVLinkSimulationLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkSimulationLink *_t = static_cast<MAVLinkSimulationLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 2: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->readBytes(); break;
        case 4: _t->mainloop(); break;
        case 5: { bool _r = _t->connectLink((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->connectLink(); break;
        case 7: _t->sendMAVLinkMessage((*reinterpret_cast< const mavlink_message_t*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MAVLinkSimulationLink::*_t)(int , QString , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkSimulationLink::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MAVLinkSimulationLink::*_t)(const mavlink_message_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkSimulationLink::messageReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MAVLinkSimulationLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_MAVLinkSimulationLink.data,
      qt_meta_data_MAVLinkSimulationLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MAVLinkSimulationLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkSimulationLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkSimulationLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int MAVLinkSimulationLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MAVLinkSimulationLink::valueChanged(int _t1, QString _t2, double _t3, quint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkSimulationLink::messageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
