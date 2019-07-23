/****************************************************************************
** Meta object code from reading C++ file 'AP2DataPlotThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/AP2DataPlotThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AP2DataPlotThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AP2DataPlotThread_t {
    QByteArrayData data[11];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AP2DataPlotThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AP2DataPlotThread_t qt_meta_stringdata_AP2DataPlotThread = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AP2DataPlotThread"
QT_MOC_LITERAL(1, 18, 9), // "startLoad"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "loadProgress"
QT_MOC_LITERAL(4, 42, 3), // "pos"
QT_MOC_LITERAL(5, 46, 4), // "size"
QT_MOC_LITERAL(6, 51, 4), // "done"
QT_MOC_LITERAL(7, 56, 17), // "AP2DataPlotStatus"
QT_MOC_LITERAL(8, 74, 5), // "state"
QT_MOC_LITERAL(9, 80, 5), // "error"
QT_MOC_LITERAL(10, 86, 8) // "errorstr"

    },
    "AP2DataPlotThread\0startLoad\0\0loadProgress\0"
    "pos\0size\0done\0AP2DataPlotStatus\0state\0"
    "error\0errorstr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AP2DataPlotThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       9,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void AP2DataPlotThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AP2DataPlotThread *_t = static_cast<AP2DataPlotThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startLoad(); break;
        case 1: _t->loadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->done((*reinterpret_cast< AP2DataPlotStatus(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AP2DataPlotThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotThread::startLoad)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AP2DataPlotThread::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotThread::loadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AP2DataPlotThread::*_t)(AP2DataPlotStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotThread::done)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AP2DataPlotThread::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotThread::error)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AP2DataPlotThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AP2DataPlotThread.data,
      qt_meta_data_AP2DataPlotThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AP2DataPlotThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AP2DataPlotThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AP2DataPlotThread.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IParserCallback"))
        return static_cast< IParserCallback*>(this);
    return QThread::qt_metacast(_clname);
}

int AP2DataPlotThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AP2DataPlotThread::startLoad()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AP2DataPlotThread::loadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AP2DataPlotThread::done(AP2DataPlotStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AP2DataPlotThread::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
