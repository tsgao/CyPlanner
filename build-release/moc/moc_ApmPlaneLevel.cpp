/****************************************************************************
** Meta object code from reading C++ file 'ApmPlaneLevel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ApmPlaneLevel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmPlaneLevel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApmPlaneLevel_t {
    QByteArrayData data[10];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApmPlaneLevel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApmPlaneLevel_t qt_meta_stringdata_ApmPlaneLevel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ApmPlaneLevel"
QT_MOC_LITERAL(1, 14, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "uas"
QT_MOC_LITERAL(4, 36, 9), // "component"
QT_MOC_LITERAL(5, 46, 13), // "parameterName"
QT_MOC_LITERAL(6, 60, 5), // "value"
QT_MOC_LITERAL(7, 66, 12), // "levelClicked"
QT_MOC_LITERAL(8, 79, 21), // "manualCheckBoxToggled"
QT_MOC_LITERAL(9, 101, 7) // "checked"

    },
    "ApmPlaneLevel\0parameterChanged\0\0uas\0"
    "component\0parameterName\0value\0"
    "levelClicked\0manualCheckBoxToggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApmPlaneLevel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x08 /* Private */,
       7,    0,   38,    2, 0x08 /* Private */,
       8,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void ApmPlaneLevel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApmPlaneLevel *_t = static_cast<ApmPlaneLevel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->levelClicked(); break;
        case 2: _t->manualCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ApmPlaneLevel::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ApmPlaneLevel.data,
      qt_meta_data_ApmPlaneLevel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApmPlaneLevel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApmPlaneLevel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApmPlaneLevel.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ApmPlaneLevel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
