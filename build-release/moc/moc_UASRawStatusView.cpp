/****************************************************************************
** Meta object code from reading C++ file 'UASRawStatusView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/UASRawStatusView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASRawStatusView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASRawStatusView_t {
    QByteArrayData data[13];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASRawStatusView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASRawStatusView_t qt_meta_stringdata_UASRawStatusView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UASRawStatusView"
QT_MOC_LITERAL(1, 17, 20), // "updateTableTimerTick"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "updateTimerTick"
QT_MOC_LITERAL(4, 55, 12), // "valueChanged"
QT_MOC_LITERAL(5, 68, 5), // "uasId"
QT_MOC_LITERAL(6, 74, 4), // "name"
QT_MOC_LITERAL(7, 79, 4), // "unit"
QT_MOC_LITERAL(8, 84, 5), // "value"
QT_MOC_LITERAL(9, 90, 4), // "msec"
QT_MOC_LITERAL(10, 95, 12), // "activeUASSet"
QT_MOC_LITERAL(11, 108, 13), // "UASInterface*"
QT_MOC_LITERAL(12, 122, 3) // "uas"

    },
    "UASRawStatusView\0updateTableTimerTick\0"
    "\0updateTimerTick\0valueChanged\0uasId\0"
    "name\0unit\0value\0msec\0activeUASSet\0"
    "UASInterface*\0uas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASRawStatusView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    5,   41,    2, 0x08 /* Private */,
       4,    5,   52,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::ULongLong,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,    5,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void UASRawStatusView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASRawStatusView *_t = static_cast<UASRawStatusView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTableTimerTick(); break;
        case 1: _t->updateTimerTick(); break;
        case 2: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const double(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 3: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 4: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UASRawStatusView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASRawStatusView.data,
      qt_meta_data_UASRawStatusView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASRawStatusView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASRawStatusView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASRawStatusView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASRawStatusView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
