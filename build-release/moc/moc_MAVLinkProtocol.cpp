/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MAVLinkProtocol_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkProtocol_t qt_meta_stringdata_MAVLinkProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MAVLinkProtocol"
QT_MOC_LITERAL(1, 16, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "title"
QT_MOC_LITERAL(4, 45, 7), // "message"
QT_MOC_LITERAL(5, 53, 18), // "receiveLossChanged"
QT_MOC_LITERAL(6, 72, 2), // "id"
QT_MOC_LITERAL(7, 75, 5), // "value"
QT_MOC_LITERAL(8, 81, 15), // "messageReceived"
QT_MOC_LITERAL(9, 97, 14), // "LinkInterface*"
QT_MOC_LITERAL(10, 112, 4), // "link"
QT_MOC_LITERAL(11, 117, 17), // "mavlink_message_t"
QT_MOC_LITERAL(12, 135, 12), // "receiveBytes"
QT_MOC_LITERAL(13, 148, 9) // "dataBytes"

    },
    "MAVLinkProtocol\0protocolStatusMessage\0"
    "\0title\0message\0receiveLossChanged\0id\0"
    "value\0messageReceived\0LinkInterface*\0"
    "link\0mavlink_message_t\0receiveBytes\0"
    "dataBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,
       8,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QByteArray,   10,   13,

       0        // eod
};

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkProtocol *_t = static_cast<MAVLinkProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->receiveLossChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 3: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
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
            typedef void (MAVLinkProtocol::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::protocolStatusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::receiveLossChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::messageReceived)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MAVLinkProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MAVLinkProtocol.data,
      qt_meta_data_MAVLinkProtocol,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkProtocol.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::receiveLossChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
