/****************************************************************************
** Meta object code from reading C++ file 'TerminalConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/TerminalConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerminalConsole_t {
    QByteArrayData data[23];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerminalConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerminalConsole_t qt_meta_stringdata_TerminalConsole = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TerminalConsole"
QT_MOC_LITERAL(1, 16, 14), // "openSerialPort"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "SerialSettings"
QT_MOC_LITERAL(4, 47, 8), // "settings"
QT_MOC_LITERAL(5, 56, 15), // "closeSerialPort"
QT_MOC_LITERAL(6, 72, 9), // "writeData"
QT_MOC_LITERAL(7, 82, 4), // "data"
QT_MOC_LITERAL(8, 87, 8), // "readData"
QT_MOC_LITERAL(9, 96, 16), // "sendResetCommand"
QT_MOC_LITERAL(10, 113, 17), // "logsButtonClicked"
QT_MOC_LITERAL(11, 131, 15), // "logConsoleShown"
QT_MOC_LITERAL(12, 147, 16), // "logConsoleHidden"
QT_MOC_LITERAL(13, 164, 23), // "logConsoleStatusMessage"
QT_MOC_LITERAL(14, 188, 23), // "logConsoleActivityStart"
QT_MOC_LITERAL(15, 212, 22), // "logConsoleActivityStop"
QT_MOC_LITERAL(16, 235, 11), // "handleError"
QT_MOC_LITERAL(17, 247, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(18, 276, 5), // "error"
QT_MOC_LITERAL(19, 282, 11), // "setBaudRate"
QT_MOC_LITERAL(20, 294, 5), // "index"
QT_MOC_LITERAL(21, 300, 7), // "setLink"
QT_MOC_LITERAL(22, 308, 19) // "populateSerialPorts"

    },
    "TerminalConsole\0openSerialPort\0\0"
    "SerialSettings\0settings\0closeSerialPort\0"
    "writeData\0data\0readData\0sendResetCommand\0"
    "logsButtonClicked\0logConsoleShown\0"
    "logConsoleHidden\0logConsoleStatusMessage\0"
    "logConsoleActivityStart\0logConsoleActivityStop\0"
    "handleError\0QSerialPort::SerialPortError\0"
    "error\0setBaudRate\0index\0setLink\0"
    "populateSerialPorts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerminalConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       1,    1,   95,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    1,   99,    2, 0x0a /* Public */,
       8,    0,  102,    2, 0x0a /* Public */,
       9,    0,  103,    2, 0x0a /* Public */,
      10,    0,  104,    2, 0x0a /* Public */,
      11,    0,  105,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x0a /* Public */,
      14,    0,  110,    2, 0x0a /* Public */,
      15,    0,  111,    2, 0x0a /* Public */,
      16,    1,  112,    2, 0x0a /* Public */,
      19,    1,  115,    2, 0x08 /* Private */,
      21,    1,  118,    2, 0x08 /* Private */,
      22,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,

       0        // eod
};

void TerminalConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TerminalConsole *_t = static_cast<TerminalConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openSerialPort(); break;
        case 1: _t->openSerialPort((*reinterpret_cast< const SerialSettings(*)>(_a[1]))); break;
        case 2: _t->closeSerialPort(); break;
        case 3: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->sendResetCommand(); break;
        case 6: _t->logsButtonClicked(); break;
        case 7: _t->logConsoleShown(); break;
        case 8: _t->logConsoleHidden(); break;
        case 9: _t->logConsoleStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->logConsoleActivityStart(); break;
        case 11: _t->logConsoleActivityStop(); break;
        case 12: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 13: _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setLink((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->populateSerialPorts(); break;
        default: ;
        }
    }
}

const QMetaObject TerminalConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TerminalConsole.data,
      qt_meta_data_TerminalConsole,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TerminalConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TerminalConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
