/****************************************************************************
** Meta object code from reading C++ file 'RadioFlashWizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/RadioFlashWizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioFlashWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioFlashWizard_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioFlashWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioFlashWizard_t qt_meta_stringdata_RadioFlashWizard = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RadioFlashWizard"
QT_MOC_LITERAL(1, 17, 10), // "selectPage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "index"
QT_MOC_LITERAL(4, 35, 18), // "portSelectionShown"
QT_MOC_LITERAL(5, 54, 10), // "flashRadio"
QT_MOC_LITERAL(6, 65, 19), // "standardOutputReady"
QT_MOC_LITERAL(7, 85, 18), // "standardErrorReady"
QT_MOC_LITERAL(8, 104, 14), // "processTimeout"
QT_MOC_LITERAL(9, 119, 15), // "processFinished"
QT_MOC_LITERAL(10, 135, 8) // "exitCode"

    },
    "RadioFlashWizard\0selectPage\0\0index\0"
    "portSelectionShown\0flashRadio\0"
    "standardOutputReady\0standardErrorReady\0"
    "processTimeout\0processFinished\0exitCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioFlashWizard[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void RadioFlashWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioFlashWizard *_t = static_cast<RadioFlashWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->portSelectionShown(); break;
        case 2: _t->flashRadio(); break;
        case 3: _t->standardOutputReady(); break;
        case 4: _t->standardErrorReady(); break;
        case 5: _t->processTimeout(); break;
        case 6: _t->processFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RadioFlashWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_RadioFlashWizard.data,
      qt_meta_data_RadioFlashWizard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioFlashWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioFlashWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioFlashWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int RadioFlashWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
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
