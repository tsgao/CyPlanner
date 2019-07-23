/****************************************************************************
** Meta object code from reading C++ file 'CompassMotorCalibrationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/CompassMotorCalibrationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompassMotorCalibrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CompassMotorCalibrationDialog_t {
    QByteArrayData data[17];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CompassMotorCalibrationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CompassMotorCalibrationDialog_t qt_meta_stringdata_CompassMotorCalibrationDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "CompassMotorCalibrationDialog"
QT_MOC_LITERAL(1, 30, 12), // "activeUASSet"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 58, 3), // "uas"
QT_MOC_LITERAL(5, 62, 21), // "compassMotCalibration"
QT_MOC_LITERAL(6, 84, 28), // "mavlink_compassmot_status_t*"
QT_MOC_LITERAL(7, 113, 17), // "compassmot_status"
QT_MOC_LITERAL(8, 131, 19), // "textMessageReceived"
QT_MOC_LITERAL(9, 151, 5), // "uasid"
QT_MOC_LITERAL(10, 157, 11), // "componentid"
QT_MOC_LITERAL(11, 169, 8), // "severity"
QT_MOC_LITERAL(12, 178, 4), // "text"
QT_MOC_LITERAL(13, 183, 16), // "startCalibration"
QT_MOC_LITERAL(14, 200, 15), // "stopCalibration"
QT_MOC_LITERAL(15, 216, 15), // "okButtonClicked"
QT_MOC_LITERAL(16, 232, 17) // "cancelCalibration"

    },
    "CompassMotorCalibrationDialog\0"
    "activeUASSet\0\0UASInterface*\0uas\0"
    "compassMotCalibration\0"
    "mavlink_compassmot_status_t*\0"
    "compassmot_status\0textMessageReceived\0"
    "uasid\0componentid\0severity\0text\0"
    "startCalibration\0stopCalibration\0"
    "okButtonClicked\0cancelCalibration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CompassMotorCalibrationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    4,   55,    2, 0x0a /* Public */,
      13,    0,   64,    2, 0x0a /* Public */,
      14,    0,   65,    2, 0x0a /* Public */,
      15,    0,   66,    2, 0x0a /* Public */,
      16,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CompassMotorCalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CompassMotorCalibrationDialog *_t = static_cast<CompassMotorCalibrationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->compassMotCalibration((*reinterpret_cast< mavlink_compassmot_status_t*(*)>(_a[1]))); break;
        case 2: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->startCalibration(); break;
        case 4: _t->stopCalibration(); break;
        case 5: _t->okButtonClicked(); break;
        case 6: _t->cancelCalibration(); break;
        default: ;
        }
    }
}

const QMetaObject CompassMotorCalibrationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CompassMotorCalibrationDialog.data,
      qt_meta_data_CompassMotorCalibrationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CompassMotorCalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompassMotorCalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CompassMotorCalibrationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CompassMotorCalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
