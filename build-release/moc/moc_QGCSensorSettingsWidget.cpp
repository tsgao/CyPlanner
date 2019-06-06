/****************************************************************************
** Meta object code from reading C++ file 'QGCSensorSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCSensorSettingsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCSensorSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCSensorSettingsWidget_t {
    QByteArrayData data[19];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCSensorSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCSensorSettingsWidget_t qt_meta_stringdata_QGCSensorSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGCSensorSettingsWidget"
QT_MOC_LITERAL(1, 24, 20), // "delayedSendRawSensor"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "rate"
QT_MOC_LITERAL(4, 51, 21), // "delayedSendController"
QT_MOC_LITERAL(5, 73, 19), // "delayedSendExtended"
QT_MOC_LITERAL(6, 93, 13), // "delayedSendRC"
QT_MOC_LITERAL(7, 107, 19), // "delayedSendPosition"
QT_MOC_LITERAL(8, 127, 17), // "delayedSendExtra1"
QT_MOC_LITERAL(9, 145, 17), // "delayedSendExtra2"
QT_MOC_LITERAL(10, 163, 17), // "delayedSendExtra3"
QT_MOC_LITERAL(11, 181, 13), // "sendRawSensor"
QT_MOC_LITERAL(12, 195, 14), // "sendController"
QT_MOC_LITERAL(13, 210, 12), // "sendExtended"
QT_MOC_LITERAL(14, 223, 6), // "sendRC"
QT_MOC_LITERAL(15, 230, 12), // "sendPosition"
QT_MOC_LITERAL(16, 243, 10), // "sendExtra1"
QT_MOC_LITERAL(17, 254, 10), // "sendExtra2"
QT_MOC_LITERAL(18, 265, 10) // "sendExtra3"

    },
    "QGCSensorSettingsWidget\0delayedSendRawSensor\0"
    "\0rate\0delayedSendController\0"
    "delayedSendExtended\0delayedSendRC\0"
    "delayedSendPosition\0delayedSendExtra1\0"
    "delayedSendExtra2\0delayedSendExtra3\0"
    "sendRawSensor\0sendController\0sendExtended\0"
    "sendRC\0sendPosition\0sendExtra1\0"
    "sendExtra2\0sendExtra3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCSensorSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x0a /* Public */,
       5,    1,  100,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x0a /* Public */,
       7,    1,  106,    2, 0x0a /* Public */,
       8,    1,  109,    2, 0x0a /* Public */,
       9,    1,  112,    2, 0x0a /* Public */,
      10,    1,  115,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x09 /* Protected */,
      12,    0,  119,    2, 0x09 /* Protected */,
      13,    0,  120,    2, 0x09 /* Protected */,
      14,    0,  121,    2, 0x09 /* Protected */,
      15,    0,  122,    2, 0x09 /* Protected */,
      16,    0,  123,    2, 0x09 /* Protected */,
      17,    0,  124,    2, 0x09 /* Protected */,
      18,    0,  125,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCSensorSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCSensorSettingsWidget *_t = static_cast<QGCSensorSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delayedSendRawSensor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->delayedSendController((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->delayedSendExtended((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->delayedSendRC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->delayedSendPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delayedSendExtra1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->delayedSendExtra2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->delayedSendExtra3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sendRawSensor(); break;
        case 9: _t->sendController(); break;
        case 10: _t->sendExtended(); break;
        case 11: _t->sendRC(); break;
        case 12: _t->sendPosition(); break;
        case 13: _t->sendExtra1(); break;
        case 14: _t->sendExtra2(); break;
        case 15: _t->sendExtra3(); break;
        default: ;
        }
    }
}

const QMetaObject QGCSensorSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCSensorSettingsWidget.data,
      qt_meta_data_QGCSensorSettingsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCSensorSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCSensorSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCSensorSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCSensorSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
