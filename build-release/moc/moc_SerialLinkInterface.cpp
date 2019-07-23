/****************************************************************************
** Meta object code from reading C++ file 'SerialLinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/SerialLinkInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialLinkInterface_t {
    QByteArrayData data[18];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialLinkInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialLinkInterface_t qt_meta_stringdata_SerialLinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SerialLinkInterface"
QT_MOC_LITERAL(1, 20, 11), // "setPortName"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "portName"
QT_MOC_LITERAL(4, 42, 11), // "setBaudRate"
QT_MOC_LITERAL(5, 54, 4), // "rate"
QT_MOC_LITERAL(6, 59, 15), // "setBaudRateType"
QT_MOC_LITERAL(7, 75, 9), // "rateIndex"
QT_MOC_LITERAL(8, 85, 11), // "setFlowType"
QT_MOC_LITERAL(9, 97, 4), // "flow"
QT_MOC_LITERAL(10, 102, 13), // "setParityType"
QT_MOC_LITERAL(11, 116, 6), // "parity"
QT_MOC_LITERAL(12, 123, 15), // "setDataBitsType"
QT_MOC_LITERAL(13, 139, 8), // "dataBits"
QT_MOC_LITERAL(14, 148, 15), // "setStopBitsType"
QT_MOC_LITERAL(15, 164, 8), // "stopBits"
QT_MOC_LITERAL(16, 173, 12), // "loadSettings"
QT_MOC_LITERAL(17, 186, 13) // "writeSettings"

    },
    "SerialLinkInterface\0setPortName\0\0"
    "portName\0setBaudRate\0rate\0setBaudRateType\0"
    "rateIndex\0setFlowType\0flow\0setParityType\0"
    "parity\0setDataBitsType\0dataBits\0"
    "setStopBitsType\0stopBits\0loadSettings\0"
    "writeSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialLinkInterface[] = {

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
       4,    1,   62,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x0a /* Public */,
      12,    1,   74,    2, 0x0a /* Public */,
      14,    1,   77,    2, 0x0a /* Public */,
      16,    0,   80,    2, 0x0a /* Public */,
      17,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Bool, QMetaType::Int,    9,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Bool, QMetaType::Int,   13,
    QMetaType::Bool, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialLinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialLinkInterface *_t = static_cast<SerialLinkInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->setBaudRateType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setFlowType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->setParityType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->setDataBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->setStopBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->loadSettings(); break;
        case 8: _t->writeSettings(); break;
        default: ;
        }
    }
}

const QMetaObject SerialLinkInterface::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_SerialLinkInterface.data,
      qt_meta_data_SerialLinkInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialLinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLinkInterface.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int SerialLinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
