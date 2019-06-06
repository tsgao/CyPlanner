/****************************************************************************
** Meta object code from reading C++ file 'LogConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/LogConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogConsole_t {
    QByteArrayData data[20];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogConsole_t qt_meta_stringdata_LogConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LogConsole"
QT_MOC_LITERAL(1, 11, 13), // "statusMessage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "activityStart"
QT_MOC_LITERAL(4, 40, 12), // "activityStop"
QT_MOC_LITERAL(5, 53, 16), // "selectAllClicked"
QT_MOC_LITERAL(6, 70, 17), // "selectNoneClicked"
QT_MOC_LITERAL(7, 88, 11), // "stopClicked"
QT_MOC_LITERAL(8, 100, 19), // "pullSelectedClicked"
QT_MOC_LITERAL(9, 120, 16), // "eraseLogsClicked"
QT_MOC_LITERAL(10, 137, 14), // "refreshClicked"
QT_MOC_LITERAL(11, 152, 20), // "listItemCheckChanged"
QT_MOC_LITERAL(12, 173, 8), // "readData"
QT_MOC_LITERAL(13, 182, 9), // "dumpError"
QT_MOC_LITERAL(14, 192, 13), // "dumpFileStart"
QT_MOC_LITERAL(15, 206, 14), // "dumpFileFinish"
QT_MOC_LITERAL(16, 221, 17), // "dumpFileBytesRead"
QT_MOC_LITERAL(17, 239, 17), // "dumpFileStatusMsg"
QT_MOC_LITERAL(18, 257, 13), // "workerStopped"
QT_MOC_LITERAL(19, 271, 15) // "workerCancelled"

    },
    "LogConsole\0statusMessage\0\0activityStart\0"
    "activityStop\0selectAllClicked\0"
    "selectNoneClicked\0stopClicked\0"
    "pullSelectedClicked\0eraseLogsClicked\0"
    "refreshClicked\0listItemCheckChanged\0"
    "readData\0dumpError\0dumpFileStart\0"
    "dumpFileFinish\0dumpFileBytesRead\0"
    "dumpFileStatusMsg\0workerStopped\0"
    "workerCancelled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    0,  107,    2, 0x06 /* Public */,
       4,    0,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  109,    2, 0x08 /* Private */,
       6,    0,  110,    2, 0x08 /* Private */,
       7,    0,  111,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    1,  117,    2, 0x08 /* Private */,
      14,    1,  120,    2, 0x08 /* Private */,
      15,    1,  123,    2, 0x08 /* Private */,
      16,    1,  126,    2, 0x08 /* Private */,
      17,    1,  129,    2, 0x08 /* Private */,
      18,    0,  132,    2, 0x08 /* Private */,
      19,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogConsole *_t = static_cast<LogConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->activityStart(); break;
        case 2: _t->activityStop(); break;
        case 3: _t->selectAllClicked(); break;
        case 4: _t->selectNoneClicked(); break;
        case 5: _t->stopClicked(); break;
        case 6: _t->pullSelectedClicked(); break;
        case 7: _t->eraseLogsClicked(); break;
        case 8: _t->refreshClicked(); break;
        case 9: _t->listItemCheckChanged(); break;
        case 10: _t->readData(); break;
        case 11: _t->dumpError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->dumpFileStart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->dumpFileFinish((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->dumpFileBytesRead((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 15: _t->dumpFileStatusMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->workerStopped(); break;
        case 17: _t->workerCancelled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LogConsole::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogConsole::statusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LogConsole::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogConsole::activityStart)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LogConsole::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogConsole::activityStop)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LogConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogConsole.data,
      qt_meta_data_LogConsole,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void LogConsole::statusMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogConsole::activityStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogConsole::activityStop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[12];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 9), // "startFile"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "finishFile"
QT_MOC_LITERAL(4, 29, 9), // "bytesRead"
QT_MOC_LITERAL(5, 39, 9), // "statusMsg"
QT_MOC_LITERAL(6, 49, 9), // "finishAll"
QT_MOC_LITERAL(7, 59, 5), // "error"
QT_MOC_LITERAL(8, 65, 9), // "cancelled"
QT_MOC_LITERAL(9, 75, 7), // "process"
QT_MOC_LITERAL(10, 83, 8), // "readData"
QT_MOC_LITERAL(11, 92, 13) // "readyNextFile"

    },
    "Worker\0startFile\0\0finishFile\0bytesRead\0"
    "statusMsg\0finishAll\0error\0cancelled\0"
    "process\0readData\0readyNextFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       6,    0,   76,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Worker *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->finishFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->bytesRead((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 3: _t->statusMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->finishAll(); break;
        case 5: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->cancelled(); break;
        case 7: _t->process(); break;
        case 8: _t->readData(); break;
        case 9: _t->readyNextFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Worker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::startFile)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Worker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::finishFile)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Worker::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::bytesRead)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Worker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::statusMsg)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Worker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::finishAll)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Worker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Worker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::cancelled)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject Worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Worker.data,
      qt_meta_data_Worker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Worker::startFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Worker::finishFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Worker::bytesRead(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Worker::statusMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Worker::finishAll()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Worker::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Worker::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
