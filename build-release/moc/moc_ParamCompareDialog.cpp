/****************************************************************************
** Meta object code from reading C++ file 'ParamCompareDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ParamCompareDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParamCompareDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParamCompareDialog_t {
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParamCompareDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParamCompareDialog_t qt_meta_stringdata_ParamCompareDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ParamCompareDialog"
QT_MOC_LITERAL(1, 19, 18), // "showLoadFileDialog"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "loadParameterFile"
QT_MOC_LITERAL(4, 57, 21), // "loadParameterWithFile"
QT_MOC_LITERAL(5, 79, 8), // "filename"
QT_MOC_LITERAL(6, 88, 17), // "saveNewParameters"
QT_MOC_LITERAL(7, 106, 8), // "checkAll"
QT_MOC_LITERAL(8, 115, 17), // "paramCompareEqual"
QT_MOC_LITERAL(9, 133, 9), // "leftValue"
QT_MOC_LITERAL(10, 143, 10), // "rightValue"
QT_MOC_LITERAL(11, 154, 14) // "dialogRejected"

    },
    "ParamCompareDialog\0showLoadFileDialog\0"
    "\0loadParameterFile\0loadParameterWithFile\0"
    "filename\0saveNewParameters\0checkAll\0"
    "paramCompareEqual\0leftValue\0rightValue\0"
    "dialogRejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParamCompareDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       3,    1,   57,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    2,   62,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QVariant, QMetaType::QVariant,    9,   10,
    QMetaType::Void,

       0        // eod
};

void ParamCompareDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamCompareDialog *_t = static_cast<ParamCompareDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showLoadFileDialog(); break;
        case 1: _t->loadParameterFile(); break;
        case 2: _t->loadParameterWithFile(); break;
        case 3: _t->loadParameterFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->saveNewParameters(); break;
        case 5: _t->checkAll(); break;
        case 6: { bool _r = _t->paramCompareEqual((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->dialogRejected(); break;
        default: ;
        }
    }
}

const QMetaObject ParamCompareDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ParamCompareDialog.data,
      qt_meta_data_ParamCompareDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ParamCompareDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParamCompareDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParamCompareDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ParamCompareDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
