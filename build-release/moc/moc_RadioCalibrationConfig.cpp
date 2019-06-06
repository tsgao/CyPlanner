/****************************************************************************
** Meta object code from reading C++ file 'RadioCalibrationConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/RadioCalibrationConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioCalibrationConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioCalibrationConfig_t {
    QByteArrayData data[31];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioCalibrationConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioCalibrationConfig_t qt_meta_stringdata_RadioCalibrationConfig = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RadioCalibrationConfig"
QT_MOC_LITERAL(1, 23, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 51, 3), // "uas"
QT_MOC_LITERAL(5, 55, 30), // "remoteControlChannelRawChanged"
QT_MOC_LITERAL(6, 86, 4), // "chan"
QT_MOC_LITERAL(7, 91, 3), // "val"
QT_MOC_LITERAL(8, 95, 16), // "parameterChanged"
QT_MOC_LITERAL(9, 112, 9), // "component"
QT_MOC_LITERAL(10, 122, 13), // "parameterName"
QT_MOC_LITERAL(11, 136, 5), // "value"
QT_MOC_LITERAL(12, 142, 18), // "guiUpdateTimerTick"
QT_MOC_LITERAL(13, 161, 22), // "calibrateButtonClicked"
QT_MOC_LITERAL(14, 184, 12), // "pitchClicked"
QT_MOC_LITERAL(15, 197, 5), // "state"
QT_MOC_LITERAL(16, 203, 11), // "rollClicked"
QT_MOC_LITERAL(17, 215, 10), // "yawClicked"
QT_MOC_LITERAL(18, 226, 15), // "throttleClicked"
QT_MOC_LITERAL(19, 242, 14), // "elevonsChecked"
QT_MOC_LITERAL(20, 257, 15), // "elevonsReversed"
QT_MOC_LITERAL(21, 273, 13), // "elevonsCh1Rev"
QT_MOC_LITERAL(22, 287, 13), // "elevonsCh2Rev"
QT_MOC_LITERAL(23, 301, 12), // "elevonOutput"
QT_MOC_LITERAL(24, 314, 16), // "modeIndexChanged"
QT_MOC_LITERAL(25, 331, 5), // "index"
QT_MOC_LITERAL(26, 337, 14), // "pitchDZChanged"
QT_MOC_LITERAL(27, 352, 13), // "rollDZChanged"
QT_MOC_LITERAL(28, 366, 14), // "throtDZChanged"
QT_MOC_LITERAL(29, 381, 12), // "yawDZChanged"
QT_MOC_LITERAL(30, 394, 20) // "writeDZButtonPressed"

    },
    "RadioCalibrationConfig\0activeUASSet\0"
    "\0UASInterface*\0uas\0remoteControlChannelRawChanged\0"
    "chan\0val\0parameterChanged\0component\0"
    "parameterName\0value\0guiUpdateTimerTick\0"
    "calibrateButtonClicked\0pitchClicked\0"
    "state\0rollClicked\0yawClicked\0"
    "throttleClicked\0elevonsChecked\0"
    "elevonsReversed\0elevonsCh1Rev\0"
    "elevonsCh2Rev\0elevonOutput\0modeIndexChanged\0"
    "index\0pitchDZChanged\0rollDZChanged\0"
    "throtDZChanged\0yawDZChanged\0"
    "writeDZButtonPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioCalibrationConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x08 /* Private */,
       5,    2,  117,    2, 0x08 /* Private */,
       8,    4,  122,    2, 0x08 /* Private */,
      12,    0,  131,    2, 0x08 /* Private */,
      13,    0,  132,    2, 0x08 /* Private */,
      14,    1,  133,    2, 0x08 /* Private */,
      16,    1,  136,    2, 0x08 /* Private */,
      17,    1,  139,    2, 0x08 /* Private */,
      18,    1,  142,    2, 0x08 /* Private */,
      19,    1,  145,    2, 0x08 /* Private */,
      20,    1,  148,    2, 0x08 /* Private */,
      21,    1,  151,    2, 0x08 /* Private */,
      22,    1,  154,    2, 0x08 /* Private */,
      23,    0,  157,    2, 0x08 /* Private */,
      24,    1,  158,    2, 0x08 /* Private */,
      26,    1,  161,    2, 0x08 /* Private */,
      27,    1,  164,    2, 0x08 /* Private */,
      28,    1,  167,    2, 0x08 /* Private */,
      29,    1,  170,    2, 0x08 /* Private */,
      30,    0,  173,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    4,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void RadioCalibrationConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioCalibrationConfig *_t = static_cast<RadioCalibrationConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 3: _t->guiUpdateTimerTick(); break;
        case 4: _t->calibrateButtonClicked(); break;
        case 5: _t->pitchClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rollClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->yawClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->throttleClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->elevonsChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->elevonsReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->elevonsCh1Rev((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->elevonsCh2Rev((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->elevonOutput(); break;
        case 14: _t->modeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->pitchDZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->rollDZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->throtDZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->yawDZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->writeDZButtonPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject RadioCalibrationConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_RadioCalibrationConfig.data,
      qt_meta_data_RadioCalibrationConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioCalibrationConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioCalibrationConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioCalibrationConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int RadioCalibrationConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
