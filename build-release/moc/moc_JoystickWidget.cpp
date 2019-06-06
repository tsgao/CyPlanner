/****************************************************************************
** Meta object code from reading C++ file 'JoystickWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoystickWidget_t {
    QByteArrayData data[30];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickWidget_t qt_meta_stringdata_JoystickWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "JoystickWidget"
QT_MOC_LITERAL(1, 15, 14), // "updateJoystick"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "roll"
QT_MOC_LITERAL(4, 36, 5), // "pitch"
QT_MOC_LITERAL(5, 42, 3), // "yaw"
QT_MOC_LITERAL(6, 46, 6), // "thrust"
QT_MOC_LITERAL(7, 53, 4), // "xHat"
QT_MOC_LITERAL(8, 58, 4), // "yHat"
QT_MOC_LITERAL(9, 63, 7), // "buttons"
QT_MOC_LITERAL(10, 71, 11), // "setThrottle"
QT_MOC_LITERAL(11, 83, 4), // "setX"
QT_MOC_LITERAL(12, 88, 1), // "x"
QT_MOC_LITERAL(13, 90, 4), // "setY"
QT_MOC_LITERAL(14, 95, 1), // "y"
QT_MOC_LITERAL(15, 97, 4), // "setZ"
QT_MOC_LITERAL(16, 102, 1), // "z"
QT_MOC_LITERAL(17, 104, 6), // "setHat"
QT_MOC_LITERAL(18, 111, 9), // "clearKeys"
QT_MOC_LITERAL(19, 121, 18), // "buttonStateChanged"
QT_MOC_LITERAL(20, 140, 3), // "key"
QT_MOC_LITERAL(21, 144, 7), // "pressed"
QT_MOC_LITERAL(22, 152, 12), // "updateStatus"
QT_MOC_LITERAL(23, 165, 6), // "status"
QT_MOC_LITERAL(24, 172, 16), // "joystickSelected"
QT_MOC_LITERAL(25, 189, 15), // "joystickEnabled"
QT_MOC_LITERAL(26, 205, 12), // "activeUASSet"
QT_MOC_LITERAL(27, 218, 13), // "UASInterface*"
QT_MOC_LITERAL(28, 232, 12), // "storeMapping"
QT_MOC_LITERAL(29, 245, 14) // "restoreMapping"

    },
    "JoystickWidget\0updateJoystick\0\0roll\0"
    "pitch\0yaw\0thrust\0xHat\0yHat\0buttons\0"
    "setThrottle\0setX\0x\0setY\0y\0setZ\0z\0"
    "setHat\0clearKeys\0buttonStateChanged\0"
    "key\0pressed\0updateStatus\0status\0"
    "joystickSelected\0joystickEnabled\0"
    "activeUASSet\0UASInterface*\0storeMapping\0"
    "restoreMapping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickWidget[] = {

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
       1,    7,   84,    2, 0x0a /* Public */,
      10,    1,   99,    2, 0x0a /* Public */,
      11,    1,  102,    2, 0x0a /* Public */,
      13,    1,  105,    2, 0x0a /* Public */,
      15,    1,  108,    2, 0x0a /* Public */,
      17,    2,  111,    2, 0x0a /* Public */,
      18,    0,  116,    2, 0x0a /* Public */,
      19,    2,  117,    2, 0x0a /* Public */,
      22,    1,  122,    2, 0x0a /* Public */,
      24,    1,  125,    2, 0x09 /* Protected */,
      25,    1,  128,    2, 0x09 /* Protected */,
      26,    1,  131,    2, 0x09 /* Protected */,
      28,    0,  134,    2, 0x08 /* Private */,
      29,    0,  135,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoystickWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickWidget *_t = static_cast<JoystickWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateJoystick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 1: _t->setThrottle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setHat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->clearKeys(); break;
        case 7: _t->buttonStateChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 8: _t->updateStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->joystickSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->joystickEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 12: _t->storeMapping(); break;
        case 13: _t->restoreMapping(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject JoystickWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JoystickWidget.data,
      qt_meta_data_JoystickWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JoystickWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickWidget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int JoystickWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
