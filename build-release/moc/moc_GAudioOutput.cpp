/****************************************************************************
** Meta object code from reading C++ file 'GAudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GAudioOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GAudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GAudioOutput_t {
    QByteArrayData data[15];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GAudioOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GAudioOutput_t qt_meta_stringdata_GAudioOutput = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GAudioOutput"
QT_MOC_LITERAL(1, 13, 12), // "mutedChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "say"
QT_MOC_LITERAL(4, 31, 4), // "text"
QT_MOC_LITERAL(5, 36, 8), // "severity"
QT_MOC_LITERAL(6, 45, 5), // "alert"
QT_MOC_LITERAL(7, 51, 14), // "startEmergency"
QT_MOC_LITERAL(8, 66, 13), // "stopEmergency"
QT_MOC_LITERAL(9, 80, 17), // "selectFemaleVoice"
QT_MOC_LITERAL(10, 98, 15), // "selectMaleVoice"
QT_MOC_LITERAL(11, 114, 4), // "beep"
QT_MOC_LITERAL(12, 119, 14), // "notifyPositive"
QT_MOC_LITERAL(13, 134, 14), // "notifyNegative"
QT_MOC_LITERAL(14, 149, 4) // "mute"

    },
    "GAudioOutput\0mutedChanged\0\0say\0text\0"
    "severity\0alert\0startEmergency\0"
    "stopEmergency\0selectFemaleVoice\0"
    "selectMaleVoice\0beep\0notifyPositive\0"
    "notifyNegative\0mute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GAudioOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   77,    2, 0x0a /* Public */,
       3,    1,   82,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   85,    2, 0x0a /* Public */,
       7,    0,   88,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    0,   91,    2, 0x0a /* Public */,
      11,    0,   92,    2, 0x0a /* Public */,
      12,    0,   93,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void GAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GAudioOutput *_t = static_cast<GAudioOutput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->alert((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->startEmergency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->stopEmergency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->selectFemaleVoice(); break;
        case 7: _t->selectMaleVoice(); break;
        case 8: _t->beep(); break;
        case 9: _t->notifyPositive(); break;
        case 10: _t->notifyNegative(); break;
        case 11: _t->mute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GAudioOutput::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GAudioOutput::mutedChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GAudioOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GAudioOutput.data,
      qt_meta_data_GAudioOutput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GAudioOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GAudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
