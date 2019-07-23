/****************************************************************************
** Meta object code from reading C++ file 'ProtocolInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/ProtocolInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProtocolInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProtocolInterface_t {
    QByteArrayData data[11];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProtocolInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProtocolInterface_t qt_meta_stringdata_ProtocolInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ProtocolInterface"
QT_MOC_LITERAL(1, 18, 18), // "receiveLossChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "uasId"
QT_MOC_LITERAL(4, 44, 4), // "loss"
QT_MOC_LITERAL(5, 49, 12), // "receiveBytes"
QT_MOC_LITERAL(6, 62, 14), // "LinkInterface*"
QT_MOC_LITERAL(7, 77, 4), // "link"
QT_MOC_LITERAL(8, 82, 1), // "b"
QT_MOC_LITERAL(9, 84, 17), // "linkStatusChanged"
QT_MOC_LITERAL(10, 102, 9) // "connected"

    },
    "ProtocolInterface\0receiveLossChanged\0"
    "\0uasId\0loss\0receiveBytes\0LinkInterface*\0"
    "link\0b\0linkStatusChanged\0connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProtocolInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   34,    2, 0x0a /* Public */,
       9,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QByteArray,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void ProtocolInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProtocolInterface *_t = static_cast<ProtocolInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveLossChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->linkStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
            typedef void (ProtocolInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProtocolInterface::receiveLossChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ProtocolInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ProtocolInterface.data,
      qt_meta_data_ProtocolInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProtocolInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProtocolInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProtocolInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProtocolInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ProtocolInterface::receiveLossChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
