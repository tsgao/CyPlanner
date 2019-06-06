/****************************************************************************
** Meta object code from reading C++ file 'ApmSoftwareConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ApmSoftwareConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmSoftwareConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApmSoftwareConfig_t {
    QByteArrayData data[20];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApmSoftwareConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApmSoftwareConfig_t qt_meta_stringdata_ApmSoftwareConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApmSoftwareConfig"
QT_MOC_LITERAL(1, 18, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "uas"
QT_MOC_LITERAL(4, 40, 9), // "component"
QT_MOC_LITERAL(5, 50, 14), // "parameterCount"
QT_MOC_LITERAL(6, 65, 11), // "parameterId"
QT_MOC_LITERAL(7, 77, 13), // "parameterName"
QT_MOC_LITERAL(8, 91, 5), // "value"
QT_MOC_LITERAL(9, 97, 14), // "advModeChanged"
QT_MOC_LITERAL(10, 112, 5), // "state"
QT_MOC_LITERAL(11, 118, 21), // "activateStackedWidget"
QT_MOC_LITERAL(12, 140, 12), // "activeUASSet"
QT_MOC_LITERAL(13, 153, 13), // "UASInterface*"
QT_MOC_LITERAL(14, 167, 12), // "uasConnected"
QT_MOC_LITERAL(15, 180, 15), // "uasDisconnected"
QT_MOC_LITERAL(16, 196, 28), // "apmParamNetworkReplyFinished"
QT_MOC_LITERAL(17, 225, 17), // "populateTimerTick"
QT_MOC_LITERAL(18, 243, 9), // "updateUAS"
QT_MOC_LITERAL(19, 253, 10) // "reloadView"

    },
    "ApmSoftwareConfig\0parameterChanged\0\0"
    "uas\0component\0parameterCount\0parameterId\0"
    "parameterName\0value\0advModeChanged\0"
    "state\0activateStackedWidget\0activeUASSet\0"
    "UASInterface*\0uasConnected\0uasDisconnected\0"
    "apmParamNetworkReplyFinished\0"
    "populateTimerTick\0updateUAS\0reloadView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApmSoftwareConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   64,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    0,   87,    2, 0x08 /* Private */,
      18,    0,   88,    2, 0x08 /* Private */,
      19,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ApmSoftwareConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApmSoftwareConfig *_t = static_cast<ApmSoftwareConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        case 1: _t->advModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->activateStackedWidget(); break;
        case 3: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->uasConnected(); break;
        case 5: _t->uasDisconnected(); break;
        case 6: _t->apmParamNetworkReplyFinished(); break;
        case 7: _t->populateTimerTick(); break;
        case 8: _t->updateUAS(); break;
        case 9: _t->reloadView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ApmSoftwareConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ApmSoftwareConfig.data,
      qt_meta_data_ApmSoftwareConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApmSoftwareConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApmSoftwareConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApmSoftwareConfig.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ApmSoftwareConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
