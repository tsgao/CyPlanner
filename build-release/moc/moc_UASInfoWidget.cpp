/****************************************************************************
** Meta object code from reading C++ file 'UASInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASInfoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASInfoWidget_t {
    QByteArrayData data[28];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASInfoWidget_t qt_meta_stringdata_UASInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UASInfoWidget"
QT_MOC_LITERAL(1, 14, 6), // "addUAS"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 36, 3), // "uas"
QT_MOC_LITERAL(5, 40, 12), // "setActiveUAS"
QT_MOC_LITERAL(6, 53, 13), // "updateBattery"
QT_MOC_LITERAL(7, 67, 7), // "voltage"
QT_MOC_LITERAL(8, 75, 7), // "current"
QT_MOC_LITERAL(9, 83, 7), // "percent"
QT_MOC_LITERAL(10, 91, 7), // "seconds"
QT_MOC_LITERAL(11, 99, 13), // "updateCPULoad"
QT_MOC_LITERAL(12, 113, 4), // "load"
QT_MOC_LITERAL(13, 118, 17), // "updateReceiveLoss"
QT_MOC_LITERAL(14, 136, 5), // "uasId"
QT_MOC_LITERAL(15, 142, 11), // "receiveLoss"
QT_MOC_LITERAL(16, 154, 14), // "updateSendLoss"
QT_MOC_LITERAL(17, 169, 8), // "sendLoss"
QT_MOC_LITERAL(18, 178, 16), // "updateErrorCount"
QT_MOC_LITERAL(19, 195, 5), // "uasid"
QT_MOC_LITERAL(20, 201, 9), // "component"
QT_MOC_LITERAL(21, 211, 6), // "device"
QT_MOC_LITERAL(22, 218, 5), // "count"
QT_MOC_LITERAL(23, 224, 10), // "setVoltage"
QT_MOC_LITERAL(24, 235, 14), // "setChargeLevel"
QT_MOC_LITERAL(25, 250, 11), // "chargeLevel"
QT_MOC_LITERAL(26, 262, 16), // "setTimeRemaining"
QT_MOC_LITERAL(27, 279, 7) // "refresh"

    },
    "UASInfoWidget\0addUAS\0\0UASInterface*\0"
    "uas\0setActiveUAS\0updateBattery\0voltage\0"
    "current\0percent\0seconds\0updateCPULoad\0"
    "load\0updateReceiveLoss\0uasId\0receiveLoss\0"
    "updateSendLoss\0sendLoss\0updateErrorCount\0"
    "uasid\0component\0device\0count\0setVoltage\0"
    "setChargeLevel\0chargeLevel\0setTimeRemaining\0"
    "refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASInfoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       6,    5,   75,    2, 0x0a /* Public */,
      11,    2,   86,    2, 0x0a /* Public */,
      13,    2,   91,    2, 0x0a /* Public */,
      16,    2,   96,    2, 0x0a /* Public */,
      18,    4,  101,    2, 0x0a /* Public */,
      23,    2,  110,    2, 0x0a /* Public */,
      24,    2,  115,    2, 0x0a /* Public */,
      26,    2,  120,    2, 0x0a /* Public */,
      27,    0,  125,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    4,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   14,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   19,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   25,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   10,
    QMetaType::Void,

       0        // eod
};

void UASInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASInfoWidget *_t = static_cast<UASInfoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->updateCPULoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->updateReceiveLoss((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->updateSendLoss((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->updateErrorCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->setVoltage((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setChargeLevel((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setTimeRemaining((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->refresh(); break;
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
        case 7:
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
    }
}

const QMetaObject UASInfoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASInfoWidget.data,
      qt_meta_data_UASInfoWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASInfoWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
