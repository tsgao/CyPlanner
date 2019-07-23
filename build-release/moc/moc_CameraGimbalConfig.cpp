/****************************************************************************
** Meta object code from reading C++ file 'CameraGimbalConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/CameraGimbalConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraGimbalConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraGimbalConfig_t {
    QByteArrayData data[19];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraGimbalConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraGimbalConfig_t qt_meta_stringdata_CameraGimbalConfig = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CameraGimbalConfig"
QT_MOC_LITERAL(1, 19, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 47, 3), // "uas"
QT_MOC_LITERAL(5, 51, 16), // "parameterChanged"
QT_MOC_LITERAL(6, 68, 9), // "component"
QT_MOC_LITERAL(7, 78, 13), // "parameterName"
QT_MOC_LITERAL(8, 92, 5), // "value"
QT_MOC_LITERAL(9, 98, 10), // "updateTilt"
QT_MOC_LITERAL(10, 109, 10), // "updateRoll"
QT_MOC_LITERAL(11, 120, 9), // "updatePan"
QT_MOC_LITERAL(12, 130, 5), // "index"
QT_MOC_LITERAL(13, 136, 27), // "updateCameraTriggerOutputCh"
QT_MOC_LITERAL(14, 164, 27), // "updateCameraTriggerSettings"
QT_MOC_LITERAL(15, 192, 19), // "updateRetractAngles"
QT_MOC_LITERAL(16, 212, 19), // "updateNeutralAngles"
QT_MOC_LITERAL(17, 232, 19), // "updateControlAngles"
QT_MOC_LITERAL(18, 252, 15) // "updateMountMode"

    },
    "CameraGimbalConfig\0activeUASSet\0\0"
    "UASInterface*\0uas\0parameterChanged\0"
    "component\0parameterName\0value\0updateTilt\0"
    "updateRoll\0updatePan\0index\0"
    "updateCameraTriggerOutputCh\0"
    "updateCameraTriggerSettings\0"
    "updateRetractAngles\0updateNeutralAngles\0"
    "updateControlAngles\0updateMountMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraGimbalConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       5,    4,   87,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      13,    1,  108,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    4,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void CameraGimbalConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraGimbalConfig *_t = static_cast<CameraGimbalConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 2: _t->updateTilt(); break;
        case 3: _t->updateRoll(); break;
        case 4: _t->updatePan(); break;
        case 5: _t->updateTilt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateRoll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updatePan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateCameraTriggerOutputCh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateCameraTriggerSettings(); break;
        case 10: _t->updateRetractAngles(); break;
        case 11: _t->updateNeutralAngles(); break;
        case 12: _t->updateControlAngles(); break;
        case 13: _t->updateMountMode((*reinterpret_cast< int(*)>(_a[1]))); break;
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

const QMetaObject CameraGimbalConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_CameraGimbalConfig.data,
      qt_meta_data_CameraGimbalConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraGimbalConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraGimbalConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraGimbalConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int CameraGimbalConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
