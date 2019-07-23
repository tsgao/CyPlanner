/****************************************************************************
** Meta object code from reading C++ file 'ApmHardwareConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ApmHardwareConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmHardwareConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApmHardwareConfig_t {
    QByteArrayData data[23];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApmHardwareConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApmHardwareConfig_t qt_meta_stringdata_ApmHardwareConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApmHardwareConfig"
QT_MOC_LITERAL(1, 18, 19), // "advancedModeChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "stateupdateFirmwareButtons"
QT_MOC_LITERAL(4, 66, 16), // "parameterChanged"
QT_MOC_LITERAL(5, 83, 3), // "uas"
QT_MOC_LITERAL(6, 87, 9), // "component"
QT_MOC_LITERAL(7, 97, 14), // "parameterCount"
QT_MOC_LITERAL(8, 112, 11), // "parameterId"
QT_MOC_LITERAL(9, 124, 13), // "parameterName"
QT_MOC_LITERAL(10, 138, 5), // "value"
QT_MOC_LITERAL(11, 144, 15), // "optionalClicked"
QT_MOC_LITERAL(12, 160, 16), // "mandatoryClicked"
QT_MOC_LITERAL(13, 177, 18), // "toggleButtonsShown"
QT_MOC_LITERAL(14, 196, 4), // "show"
QT_MOC_LITERAL(15, 201, 14), // "advModeChanged"
QT_MOC_LITERAL(16, 216, 5), // "state"
QT_MOC_LITERAL(17, 222, 12), // "activeUASSet"
QT_MOC_LITERAL(18, 235, 13), // "UASInterface*"
QT_MOC_LITERAL(19, 249, 21), // "activateStackedWidget"
QT_MOC_LITERAL(20, 271, 12), // "uasConnected"
QT_MOC_LITERAL(21, 284, 15), // "uasDisconnected"
QT_MOC_LITERAL(22, 300, 22) // "activateBlankingScreen"

    },
    "ApmHardwareConfig\0advancedModeChanged\0"
    "\0stateupdateFirmwareButtons\0"
    "parameterChanged\0uas\0component\0"
    "parameterCount\0parameterId\0parameterName\0"
    "value\0optionalClicked\0mandatoryClicked\0"
    "toggleButtonsShown\0show\0advModeChanged\0"
    "state\0activeUASSet\0UASInterface*\0"
    "activateStackedWidget\0uasConnected\0"
    "uasDisconnected\0activateBlankingScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApmHardwareConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    6,   72,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x0a /* Public */,
      17,    1,   93,    2, 0x08 /* Private */,
      19,    0,   96,    2, 0x08 /* Private */,
      20,    0,   97,    2, 0x08 /* Private */,
      21,    0,   98,    2, 0x08 /* Private */,
      22,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    5,    6,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, 0x80000000 | 18,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ApmHardwareConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApmHardwareConfig *_t = static_cast<ApmHardwareConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->advancedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        case 2: _t->optionalClicked(); break;
        case 3: _t->mandatoryClicked(); break;
        case 4: _t->toggleButtonsShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->advModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->activateStackedWidget(); break;
        case 8: _t->uasConnected(); break;
        case 9: _t->uasDisconnected(); break;
        case 10: _t->activateBlankingScreen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
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
            typedef void (ApmHardwareConfig::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApmHardwareConfig::advancedModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ApmHardwareConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ApmHardwareConfig.data,
      qt_meta_data_ApmHardwareConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApmHardwareConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApmHardwareConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApmHardwareConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ApmHardwareConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ApmHardwareConfig::advancedModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
