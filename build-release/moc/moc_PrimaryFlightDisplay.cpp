/****************************************************************************
** Meta object code from reading C++ file 'PrimaryFlightDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/PrimaryFlightDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrimaryFlightDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrimaryFlightDisplay_t {
    QByteArrayData data[31];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryFlightDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryFlightDisplay_t qt_meta_stringdata_PrimaryFlightDisplay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PrimaryFlightDisplay"
QT_MOC_LITERAL(1, 21, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "visible"
QT_MOC_LITERAL(4, 48, 14), // "updateAttitude"
QT_MOC_LITERAL(5, 63, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 77, 3), // "uas"
QT_MOC_LITERAL(7, 81, 4), // "roll"
QT_MOC_LITERAL(8, 86, 5), // "pitch"
QT_MOC_LITERAL(9, 92, 3), // "yaw"
QT_MOC_LITERAL(10, 96, 9), // "timestamp"
QT_MOC_LITERAL(11, 106, 9), // "component"
QT_MOC_LITERAL(12, 116, 12), // "speedChanged"
QT_MOC_LITERAL(13, 129, 11), // "groundspeed"
QT_MOC_LITERAL(14, 141, 8), // "airspeed"
QT_MOC_LITERAL(15, 150, 15), // "altitudeChanged"
QT_MOC_LITERAL(16, 166, 12), // "altitudeAMSL"
QT_MOC_LITERAL(17, 179, 16), // "altitudeRelative"
QT_MOC_LITERAL(18, 196, 9), // "climbRate"
QT_MOC_LITERAL(19, 206, 32), // "updateNavigationControllerErrors"
QT_MOC_LITERAL(20, 239, 13), // "altitudeError"
QT_MOC_LITERAL(21, 253, 10), // "speedError"
QT_MOC_LITERAL(22, 264, 11), // "xtrackError"
QT_MOC_LITERAL(23, 276, 14), // "uasTextMessage"
QT_MOC_LITERAL(24, 291, 5), // "uasid"
QT_MOC_LITERAL(25, 297, 11), // "componentid"
QT_MOC_LITERAL(26, 309, 8), // "severity"
QT_MOC_LITERAL(27, 318, 4), // "text"
QT_MOC_LITERAL(28, 323, 20), // "preArmMessageTimeout"
QT_MOC_LITERAL(29, 344, 9), // "forgetUAS"
QT_MOC_LITERAL(30, 354, 12) // "setActiveUAS"

    },
    "PrimaryFlightDisplay\0visibilityChanged\0"
    "\0visible\0updateAttitude\0UASInterface*\0"
    "uas\0roll\0pitch\0yaw\0timestamp\0component\0"
    "speedChanged\0groundspeed\0airspeed\0"
    "altitudeChanged\0altitudeAMSL\0"
    "altitudeRelative\0climbRate\0"
    "updateNavigationControllerErrors\0"
    "altitudeError\0speedError\0xtrackError\0"
    "uasTextMessage\0uasid\0componentid\0"
    "severity\0text\0preArmMessageTimeout\0"
    "forgetUAS\0setActiveUAS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryFlightDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    5,   67,    2, 0x0a /* Public */,
       4,    6,   78,    2, 0x0a /* Public */,
      12,    4,   91,    2, 0x0a /* Public */,
      15,    5,  100,    2, 0x0a /* Public */,
      19,    4,  111,    2, 0x0a /* Public */,
      23,    4,  120,    2, 0x0a /* Public */,
      28,    0,  129,    2, 0x0a /* Public */,
      29,    1,  130,    2, 0x0a /* Public */,
      30,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   11,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   13,   14,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   16,   17,   18,   10,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,   20,   21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   24,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void PrimaryFlightDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrimaryFlightDisplay *_t = static_cast<PrimaryFlightDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 2: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 3: _t->speedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 4: _t->altitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 5: _t->updateNavigationControllerErrors((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->uasTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->preArmMessageTimeout(); break;
        case 8: _t->forgetUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
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
            typedef void (PrimaryFlightDisplay::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightDisplay::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PrimaryFlightDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrimaryFlightDisplay.data,
      qt_meta_data_PrimaryFlightDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrimaryFlightDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryFlightDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryFlightDisplay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PrimaryFlightDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PrimaryFlightDisplay::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
