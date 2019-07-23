/****************************************************************************
** Meta object code from reading C++ file 'UASControlWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASControlWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASControlWidget_t {
    QByteArrayData data[17];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASControlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASControlWidget_t qt_meta_stringdata_UASControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UASControlWidget"
QT_MOC_LITERAL(1, 17, 11), // "changedMode"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "setUAS"
QT_MOC_LITERAL(4, 37, 13), // "UASInterface*"
QT_MOC_LITERAL(5, 51, 3), // "uas"
QT_MOC_LITERAL(6, 55, 18), // "cycleContextButton"
QT_MOC_LITERAL(7, 74, 7), // "setMode"
QT_MOC_LITERAL(8, 82, 4), // "mode"
QT_MOC_LITERAL(9, 87, 12), // "transmitMode"
QT_MOC_LITERAL(10, 100, 10), // "updateMode"
QT_MOC_LITERAL(11, 111, 11), // "description"
QT_MOC_LITERAL(12, 123, 11), // "updateState"
QT_MOC_LITERAL(13, 135, 5), // "state"
QT_MOC_LITERAL(14, 141, 18), // "updateStatemachine"
QT_MOC_LITERAL(15, 160, 18), // "setBackgroundColor"
QT_MOC_LITERAL(16, 179, 5) // "color"

    },
    "UASControlWidget\0changedMode\0\0setUAS\0"
    "UASInterface*\0uas\0cycleContextButton\0"
    "setMode\0mode\0transmitMode\0updateMode\0"
    "description\0updateState\0state\0"
    "updateStatemachine\0setBackgroundColor\0"
    "color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASControlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    3,   70,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    5,    8,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   16,

       0        // eod
};

void UASControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASControlWidget *_t = static_cast<UASControlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->cycleContextButton(); break;
        case 3: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->transmitMode(); break;
        case 5: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->updateState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateStatemachine(); break;
        case 8: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (UASControlWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASControlWidget::changedMode)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UASControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASControlWidget.data,
      qt_meta_data_UASControlWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASControlWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UASControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UASControlWidget::changedMode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
