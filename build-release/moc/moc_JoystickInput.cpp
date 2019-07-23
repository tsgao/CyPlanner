/****************************************************************************
** Meta object code from reading C++ file 'JoystickInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/input/JoystickInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoystickInput_t {
    QByteArrayData data[35];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickInput_t qt_meta_stringdata_JoystickInput = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JoystickInput"
QT_MOC_LITERAL(1, 14, 16), // "joystickSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "joystickChanged"
QT_MOC_LITERAL(4, 48, 4), // "roll"
QT_MOC_LITERAL(5, 53, 5), // "pitch"
QT_MOC_LITERAL(6, 59, 3), // "yaw"
QT_MOC_LITERAL(7, 63, 6), // "thrust"
QT_MOC_LITERAL(8, 70, 4), // "xHat"
QT_MOC_LITERAL(9, 75, 4), // "yHat"
QT_MOC_LITERAL(10, 80, 7), // "buttons"
QT_MOC_LITERAL(11, 88, 13), // "thrustChanged"
QT_MOC_LITERAL(12, 102, 8), // "xChanged"
QT_MOC_LITERAL(13, 111, 1), // "x"
QT_MOC_LITERAL(14, 113, 8), // "yChanged"
QT_MOC_LITERAL(15, 122, 1), // "y"
QT_MOC_LITERAL(16, 124, 10), // "yawChanged"
QT_MOC_LITERAL(17, 135, 13), // "buttonPressed"
QT_MOC_LITERAL(18, 149, 3), // "key"
QT_MOC_LITERAL(19, 153, 19), // "hatDirectionChanged"
QT_MOC_LITERAL(20, 173, 12), // "setActiveUAS"
QT_MOC_LITERAL(21, 186, 13), // "UASInterface*"
QT_MOC_LITERAL(22, 200, 3), // "uas"
QT_MOC_LITERAL(23, 204, 20), // "setMappingThrustAxis"
QT_MOC_LITERAL(24, 225, 7), // "mapping"
QT_MOC_LITERAL(25, 233, 15), // "setMappingXAxis"
QT_MOC_LITERAL(26, 249, 15), // "setMappingYAxis"
QT_MOC_LITERAL(27, 265, 17), // "setMappingYawAxis"
QT_MOC_LITERAL(28, 283, 17), // "setThrustReversed"
QT_MOC_LITERAL(29, 301, 8), // "reversed"
QT_MOC_LITERAL(30, 310, 12), // "setXReversed"
QT_MOC_LITERAL(31, 323, 12), // "setYReversed"
QT_MOC_LITERAL(32, 336, 14), // "setYawReversed"
QT_MOC_LITERAL(33, 351, 20), // "setMappingAutoButton"
QT_MOC_LITERAL(34, 372, 25) // "setMappingStabilizeButton"

    },
    "JoystickInput\0joystickSelected\0\0"
    "joystickChanged\0roll\0pitch\0yaw\0thrust\0"
    "xHat\0yHat\0buttons\0thrustChanged\0"
    "xChanged\0x\0yChanged\0y\0yawChanged\0"
    "buttonPressed\0key\0hatDirectionChanged\0"
    "setActiveUAS\0UASInterface*\0uas\0"
    "setMappingThrustAxis\0mapping\0"
    "setMappingXAxis\0setMappingYAxis\0"
    "setMappingYawAxis\0setThrustReversed\0"
    "reversed\0setXReversed\0setYReversed\0"
    "setYawReversed\0setMappingAutoButton\0"
    "setMappingStabilizeButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       3,    7,  112,    2, 0x06 /* Public */,
      11,    1,  127,    2, 0x06 /* Public */,
      12,    1,  130,    2, 0x06 /* Public */,
      14,    1,  133,    2, 0x06 /* Public */,
      16,    1,  136,    2, 0x06 /* Public */,
      17,    1,  139,    2, 0x06 /* Public */,
      19,    2,  142,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,  147,    2, 0x0a /* Public */,
      23,    1,  150,    2, 0x0a /* Public */,
      25,    1,  153,    2, 0x0a /* Public */,
      26,    1,  156,    2, 0x0a /* Public */,
      27,    1,  159,    2, 0x0a /* Public */,
      28,    1,  162,    2, 0x0a /* Public */,
      30,    1,  165,    2, 0x0a /* Public */,
      31,    1,  168,    2, 0x0a /* Public */,
      32,    1,  171,    2, 0x0a /* Public */,
      33,    1,  174,    2, 0x0a /* Public */,
      34,    1,  177,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,

       0        // eod
};

void JoystickInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickInput *_t = static_cast<JoystickInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joystickSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->joystickChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 2: _t->thrustChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->xChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->yChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->hatDirectionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->setMappingThrustAxis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setMappingXAxis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setMappingYAxis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setMappingYawAxis((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setThrustReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setXReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setYReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setYawReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setMappingAutoButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setMappingStabilizeButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
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
            typedef void (JoystickInput::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::joystickSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(double , double , double , double , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::joystickChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::thrustChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::xChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::yChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::yawChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::buttonPressed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (JoystickInput::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickInput::hatDirectionChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject JoystickInput::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_JoystickInput.data,
      qt_meta_data_JoystickInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JoystickInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickInput.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int JoystickInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void JoystickInput::joystickSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickInput::joystickChanged(double _t1, double _t2, double _t3, double _t4, int _t5, int _t6, int _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickInput::thrustChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickInput::xChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoystickInput::yChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoystickInput::yawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoystickInput::buttonPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoystickInput::hatDirectionChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
