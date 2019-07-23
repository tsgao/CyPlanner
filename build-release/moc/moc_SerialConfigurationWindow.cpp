/****************************************************************************
** Meta object code from reading C++ file 'SerialConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SerialConfigurationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialConfigurationWindow_t {
    QByteArrayData data[25];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConfigurationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConfigurationWindow_t qt_meta_stringdata_SerialConfigurationWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "SerialConfigurationWindow"
QT_MOC_LITERAL(1, 26, 22), // "configureCommunication"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "enableFlowControl"
QT_MOC_LITERAL(4, 68, 4), // "flow"
QT_MOC_LITERAL(5, 73, 13), // "setParityNone"
QT_MOC_LITERAL(6, 87, 6), // "accept"
QT_MOC_LITERAL(7, 94, 12), // "setParityOdd"
QT_MOC_LITERAL(8, 107, 13), // "setParityEven"
QT_MOC_LITERAL(9, 121, 11), // "setPortName"
QT_MOC_LITERAL(10, 133, 4), // "port"
QT_MOC_LITERAL(11, 138, 11), // "setLinkName"
QT_MOC_LITERAL(12, 150, 4), // "name"
QT_MOC_LITERAL(13, 155, 11), // "setDataBits"
QT_MOC_LITERAL(14, 167, 4), // "bits"
QT_MOC_LITERAL(15, 172, 11), // "setStopBits"
QT_MOC_LITERAL(16, 184, 13), // "setupPortList"
QT_MOC_LITERAL(17, 198, 19), // "setAdvancedSettings"
QT_MOC_LITERAL(18, 218, 7), // "visible"
QT_MOC_LITERAL(19, 226, 22), // "connectionStateChanged"
QT_MOC_LITERAL(20, 249, 9), // "connected"
QT_MOC_LITERAL(21, 259, 11), // "linkChanged"
QT_MOC_LITERAL(22, 271, 6), // "linkid"
QT_MOC_LITERAL(23, 278, 17), // "setBaudRateString"
QT_MOC_LITERAL(24, 296, 4) // "baud"

    },
    "SerialConfigurationWindow\0"
    "configureCommunication\0\0enableFlowControl\0"
    "flow\0setParityNone\0accept\0setParityOdd\0"
    "setParityEven\0setPortName\0port\0"
    "setLinkName\0name\0setDataBits\0bits\0"
    "setStopBits\0setupPortList\0setAdvancedSettings\0"
    "visible\0connectionStateChanged\0connected\0"
    "linkChanged\0linkid\0setBaudRateString\0"
    "baud"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConfigurationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x0a /* Public */,
       5,    1,   88,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       8,    1,   94,    2, 0x0a /* Public */,
       9,    1,   97,    2, 0x0a /* Public */,
      11,    1,  100,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,
      15,    1,  106,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    1,  110,    2, 0x0a /* Public */,
      19,    1,  113,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      23,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void SerialConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConfigurationWindow *_t = static_cast<SerialConfigurationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configureCommunication(); break;
        case 1: _t->enableFlowControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setParityNone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setParityOdd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setParityEven((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPortName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setLinkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setDataBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setStopBits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setupPortList(); break;
        case 10: _t->setAdvancedSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->connectionStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->linkChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setBaudRateString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SerialConfigurationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialConfigurationWindow.data,
      qt_meta_data_SerialConfigurationWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConfigurationWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SerialConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
