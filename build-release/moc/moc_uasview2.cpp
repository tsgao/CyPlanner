/****************************************************************************
** Meta object code from reading C++ file 'uasview2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uasview2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uasview2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASView2_t {
    QByteArrayData data[12];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASView2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASView2_t qt_meta_stringdata_UASView2 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UASView2"
QT_MOC_LITERAL(1, 9, 14), // "setUASasActive"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "setBackgroundColor"
QT_MOC_LITERAL(4, 44, 10), // "updateMode"
QT_MOC_LITERAL(5, 55, 5), // "sysId"
QT_MOC_LITERAL(6, 61, 6), // "status"
QT_MOC_LITERAL(7, 68, 11), // "description"
QT_MOC_LITERAL(8, 80, 11), // "updateState"
QT_MOC_LITERAL(9, 92, 13), // "UASInterface*"
QT_MOC_LITERAL(10, 106, 8), // "uasState"
QT_MOC_LITERAL(11, 115, 16) // "stateDescription"

    },
    "UASView2\0setUASasActive\0\0setBackgroundColor\0"
    "updateMode\0sysId\0status\0description\0"
    "updateState\0UASInterface*\0uasState\0"
    "stateDescription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASView2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    0,   37,    2, 0x0a /* Public */,
       4,    3,   38,    2, 0x0a /* Public */,
       8,    3,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,    2,   10,   11,

       0        // eod
};

void UASView2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASView2 *_t = static_cast<UASView2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setUASasActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setBackgroundColor(); break;
        case 2: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
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

const QMetaObject UASView2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASView2.data,
      qt_meta_data_UASView2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASView2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASView2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASView2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASView2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE