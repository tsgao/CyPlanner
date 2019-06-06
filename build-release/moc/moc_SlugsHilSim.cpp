/****************************************************************************
** Meta object code from reading C++ file 'SlugsHilSim.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SlugsHilSim.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsHilSim.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlugsHilSim_t {
    QByteArrayData data[12];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlugsHilSim_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlugsHilSim_t qt_meta_stringdata_SlugsHilSim = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SlugsHilSim"
QT_MOC_LITERAL(1, 12, 10), // "addToCombo"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 39, 7), // "theLink"
QT_MOC_LITERAL(5, 47, 12), // "putInHilMode"
QT_MOC_LITERAL(6, 60, 12), // "readDatagram"
QT_MOC_LITERAL(7, 73, 12), // "activeUasSet"
QT_MOC_LITERAL(8, 86, 13), // "UASInterface*"
QT_MOC_LITERAL(9, 100, 3), // "uas"
QT_MOC_LITERAL(10, 104, 12), // "linkSelected"
QT_MOC_LITERAL(11, 117, 7) // "cbIndex"

    },
    "SlugsHilSim\0addToCombo\0\0LinkInterface*\0"
    "theLink\0putInHilMode\0readDatagram\0"
    "activeUasSet\0UASInterface*\0uas\0"
    "linkSelected\0cbIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlugsHilSim[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
      10,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void SlugsHilSim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlugsHilSim *_t = static_cast<SlugsHilSim *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToCombo((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->putInHilMode(); break;
        case 2: _t->readDatagram(); break;
        case 3: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->linkSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
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

const QMetaObject SlugsHilSim::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SlugsHilSim.data,
      qt_meta_data_SlugsHilSim,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlugsHilSim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlugsHilSim::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsHilSim.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SlugsHilSim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
