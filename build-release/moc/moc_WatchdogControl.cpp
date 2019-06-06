/****************************************************************************
** Meta object code from reading C++ file 'WatchdogControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/watchdog/WatchdogControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WatchdogControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchdogControl_t {
    QByteArrayData data[21];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchdogControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchdogControl_t qt_meta_stringdata_WatchdogControl = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WatchdogControl"
QT_MOC_LITERAL(1, 16, 18), // "sendProcessCommand"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "watchdogId"
QT_MOC_LITERAL(4, 47, 9), // "processId"
QT_MOC_LITERAL(5, 57, 7), // "command"
QT_MOC_LITERAL(6, 65, 14), // "updateWatchdog"
QT_MOC_LITERAL(7, 80, 8), // "systemId"
QT_MOC_LITERAL(8, 89, 12), // "processCount"
QT_MOC_LITERAL(9, 102, 10), // "addProcess"
QT_MOC_LITERAL(10, 113, 4), // "name"
QT_MOC_LITERAL(11, 118, 9), // "arguments"
QT_MOC_LITERAL(12, 128, 7), // "timeout"
QT_MOC_LITERAL(13, 136, 13), // "updateProcess"
QT_MOC_LITERAL(14, 150, 5), // "state"
QT_MOC_LITERAL(15, 156, 5), // "muted"
QT_MOC_LITERAL(16, 162, 7), // "crashed"
QT_MOC_LITERAL(17, 170, 3), // "pid"
QT_MOC_LITERAL(18, 174, 6), // "setUAS"
QT_MOC_LITERAL(19, 181, 13), // "UASInterface*"
QT_MOC_LITERAL(20, 195, 3) // "uas"

    },
    "WatchdogControl\0sendProcessCommand\0\0"
    "watchdogId\0processId\0command\0"
    "updateWatchdog\0systemId\0processCount\0"
    "addProcess\0name\0arguments\0timeout\0"
    "updateProcess\0state\0muted\0crashed\0pid\0"
    "setUAS\0UASInterface*\0uas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchdogControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   46,    2, 0x0a /* Public */,
       9,    6,   53,    2, 0x0a /* Public */,
      13,    7,   66,    2, 0x0a /* Public */,
      18,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UInt,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UInt,    7,    3,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    3,    4,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    7,    3,    4,   14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void WatchdogControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatchdogControl *_t = static_cast<WatchdogControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendProcessCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->updateWatchdog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->addProcess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->updateProcess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 4: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WatchdogControl::*_t)(int , int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchdogControl::sendProcessCommand)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WatchdogControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WatchdogControl.data,
      qt_meta_data_WatchdogControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WatchdogControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchdogControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchdogControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WatchdogControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WatchdogControl::sendProcessCommand(int _t1, int _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
