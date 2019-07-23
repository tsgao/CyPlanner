/****************************************************************************
** Meta object code from reading C++ file 'arduinoflash.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/arduinoflash.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arduinoflash.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArduinoFlash_t {
    QByteArrayData data[18];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArduinoFlash_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArduinoFlash_t qt_meta_stringdata_ArduinoFlash = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ArduinoFlash"
QT_MOC_LITERAL(1, 13, 13), // "flashProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "pos"
QT_MOC_LITERAL(4, 32, 5), // "total"
QT_MOC_LITERAL(5, 38, 13), // "flashComplete"
QT_MOC_LITERAL(6, 52, 11), // "flashFailed"
QT_MOC_LITERAL(7, 64, 14), // "verifyProgress"
QT_MOC_LITERAL(8, 79, 14), // "verifyComplete"
QT_MOC_LITERAL(9, 94, 12), // "verifyFailed"
QT_MOC_LITERAL(10, 107, 19), // "firmwareUploadError"
QT_MOC_LITERAL(11, 127, 5), // "error"
QT_MOC_LITERAL(12, 133, 21), // "firmwareUploadStarted"
QT_MOC_LITERAL(13, 155, 22), // "firmwareUploadComplete"
QT_MOC_LITERAL(14, 178, 12), // "statusUpdate"
QT_MOC_LITERAL(15, 191, 6), // "status"
QT_MOC_LITERAL(16, 198, 11), // "debugUpdate"
QT_MOC_LITERAL(17, 210, 5) // "debug"

    },
    "ArduinoFlash\0flashProgress\0\0pos\0total\0"
    "flashComplete\0flashFailed\0verifyProgress\0"
    "verifyComplete\0verifyFailed\0"
    "firmwareUploadError\0error\0"
    "firmwareUploadStarted\0firmwareUploadComplete\0"
    "statusUpdate\0status\0debugUpdate\0debug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArduinoFlash[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    0,   74,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    2,   76,    2, 0x06 /* Public */,
       8,    0,   81,    2, 0x06 /* Public */,
       9,    0,   82,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      12,    0,   86,    2, 0x06 /* Public */,
      13,    0,   87,    2, 0x06 /* Public */,
      14,    1,   88,    2, 0x06 /* Public */,
      16,    1,   91,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void ArduinoFlash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArduinoFlash *_t = static_cast<ArduinoFlash *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flashProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->flashComplete(); break;
        case 2: _t->flashFailed(); break;
        case 3: _t->verifyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->verifyComplete(); break;
        case 5: _t->verifyFailed(); break;
        case 6: _t->firmwareUploadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->firmwareUploadStarted(); break;
        case 8: _t->firmwareUploadComplete(); break;
        case 9: _t->statusUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->debugUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ArduinoFlash::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::flashProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::flashComplete)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::flashFailed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::verifyProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::verifyComplete)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::verifyFailed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::firmwareUploadError)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::firmwareUploadStarted)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::firmwareUploadComplete)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::statusUpdate)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ArduinoFlash::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArduinoFlash::debugUpdate)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject ArduinoFlash::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ArduinoFlash.data,
      qt_meta_data_ArduinoFlash,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ArduinoFlash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduinoFlash::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArduinoFlash.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ArduinoFlash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ArduinoFlash::flashProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArduinoFlash::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ArduinoFlash::flashFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ArduinoFlash::verifyProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ArduinoFlash::verifyComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ArduinoFlash::verifyFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ArduinoFlash::firmwareUploadError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ArduinoFlash::firmwareUploadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ArduinoFlash::firmwareUploadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ArduinoFlash::statusUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ArduinoFlash::debugUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
