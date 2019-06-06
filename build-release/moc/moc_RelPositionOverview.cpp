/****************************************************************************
** Meta object code from reading C++ file 'RelPositionOverview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/RelPositionOverview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RelPositionOverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RelPositionOverview_t {
    QByteArrayData data[33];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RelPositionOverview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RelPositionOverview_t qt_meta_stringdata_RelPositionOverview = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RelPositionOverview"
QT_MOC_LITERAL(1, 20, 15), // "airspeedChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "groundspeedChanged"
QT_MOC_LITERAL(4, 56, 10), // "altChanged"
QT_MOC_LITERAL(5, 67, 12), // "climbChanged"
QT_MOC_LITERAL(6, 80, 14), // "headingChanged"
QT_MOC_LITERAL(7, 95, 15), // "throttleChanged"
QT_MOC_LITERAL(8, 111, 17), // "timeBootMsChanged"
QT_MOC_LITERAL(9, 129, 11), // "rollChanged"
QT_MOC_LITERAL(10, 141, 12), // "pitchChanged"
QT_MOC_LITERAL(11, 154, 10), // "yawChanged"
QT_MOC_LITERAL(12, 165, 16), // "rollspeedChanged"
QT_MOC_LITERAL(13, 182, 17), // "pitchspeedChanged"
QT_MOC_LITERAL(14, 200, 15), // "yawspeedChanged"
QT_MOC_LITERAL(15, 216, 15), // "messageReceived"
QT_MOC_LITERAL(16, 232, 14), // "LinkInterface*"
QT_MOC_LITERAL(17, 247, 4), // "link"
QT_MOC_LITERAL(18, 252, 17), // "mavlink_message_t"
QT_MOC_LITERAL(19, 270, 7), // "message"
QT_MOC_LITERAL(20, 278, 12), // "time_boot_ms"
QT_MOC_LITERAL(21, 291, 4), // "roll"
QT_MOC_LITERAL(22, 296, 5), // "pitch"
QT_MOC_LITERAL(23, 302, 3), // "yaw"
QT_MOC_LITERAL(24, 306, 9), // "rollspeed"
QT_MOC_LITERAL(25, 316, 10), // "pitchspeed"
QT_MOC_LITERAL(26, 327, 8), // "yawspeed"
QT_MOC_LITERAL(27, 336, 8), // "airspeed"
QT_MOC_LITERAL(28, 345, 11), // "groundspeed"
QT_MOC_LITERAL(29, 357, 3), // "alt"
QT_MOC_LITERAL(30, 361, 5), // "climb"
QT_MOC_LITERAL(31, 367, 7), // "heading"
QT_MOC_LITERAL(32, 375, 8) // "throttle"

    },
    "RelPositionOverview\0airspeedChanged\0"
    "\0groundspeedChanged\0altChanged\0"
    "climbChanged\0headingChanged\0throttleChanged\0"
    "timeBootMsChanged\0rollChanged\0"
    "pitchChanged\0yawChanged\0rollspeedChanged\0"
    "pitchspeedChanged\0yawspeedChanged\0"
    "messageReceived\0LinkInterface*\0link\0"
    "mavlink_message_t\0message\0time_boot_ms\0"
    "roll\0pitch\0yaw\0rollspeed\0pitchspeed\0"
    "yawspeed\0airspeed\0groundspeed\0alt\0"
    "climb\0heading\0throttle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RelPositionOverview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      13,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,
       9,    1,  105,    2, 0x06 /* Public */,
      10,    1,  108,    2, 0x06 /* Public */,
      11,    1,  111,    2, 0x06 /* Public */,
      12,    1,  114,    2, 0x06 /* Public */,
      13,    1,  117,    2, 0x06 /* Public */,
      14,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,

 // properties: name, type, flags
      20, QMetaType::UInt, 0x00495003,
      21, QMetaType::Double, 0x00495103,
      22, QMetaType::Double, 0x00495103,
      23, QMetaType::Double, 0x00495103,
      24, QMetaType::Double, 0x00495103,
      25, QMetaType::Double, 0x00495103,
      26, QMetaType::Double, 0x00495103,
      27, QMetaType::Double, 0x00495103,
      28, QMetaType::Double, 0x00495103,
      29, QMetaType::Double, 0x00495103,
      30, QMetaType::Double, 0x00495103,
      31, QMetaType::Int, 0x00495103,
      32, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       6,
       7,
       8,
       9,
      10,
      11,
      12,
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void RelPositionOverview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RelPositionOverview *_t = static_cast<RelPositionOverview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->airspeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->groundspeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->altChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->climbChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->headingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->throttleChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->timeBootMsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->rollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->rollspeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->pitchspeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->yawspeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
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
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::airspeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::groundspeedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::altChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::climbChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::headingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::throttleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::timeBootMsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::rollChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::pitchChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::yawChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::rollspeedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::pitchspeedChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (RelPositionOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RelPositionOverview::yawspeedChanged)) {
                *result = 12;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RelPositionOverview *_t = static_cast<RelPositionOverview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getTimeBootMs(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getRoll(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getPitch(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getYaw(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getRollspeed(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getPitchspeed(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getYawspeed(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getAirspeed(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getGroundspeed(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getAlt(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getClimb(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getHeading(); break;
        case 12: *reinterpret_cast< uint*>(_v) = _t->getThrottle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RelPositionOverview *_t = static_cast<RelPositionOverview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimeBootMs(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setRoll(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setPitch(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setYaw(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setRollspeed(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setPitchspeed(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setYawspeed(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setAirspeed(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setGroundspeed(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setAlt(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setClimb(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setHeading(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setThrottle(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject RelPositionOverview::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RelPositionOverview.data,
      qt_meta_data_RelPositionOverview,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RelPositionOverview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RelPositionOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RelPositionOverview.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RelPositionOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RelPositionOverview::airspeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RelPositionOverview::groundspeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RelPositionOverview::altChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RelPositionOverview::climbChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RelPositionOverview::headingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RelPositionOverview::throttleChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RelPositionOverview::timeBootMsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RelPositionOverview::rollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RelPositionOverview::pitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RelPositionOverview::yawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RelPositionOverview::rollspeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RelPositionOverview::pitchspeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RelPositionOverview::yawspeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
