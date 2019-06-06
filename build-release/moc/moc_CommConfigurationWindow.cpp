/****************************************************************************
** Meta object code from reading C++ file 'CommConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/CommConfigurationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommConfigurationWindow_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommConfigurationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommConfigurationWindow_t qt_meta_stringdata_CommConfigurationWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CommConfigurationWindow"
QT_MOC_LITERAL(1, 24, 11), // "setProtocol"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "protocol"
QT_MOC_LITERAL(4, 46, 13), // "setConnection"
QT_MOC_LITERAL(5, 60, 15), // "connectionState"
QT_MOC_LITERAL(6, 76, 7), // "connect"
QT_MOC_LITERAL(7, 84, 11), // "setLinkName"
QT_MOC_LITERAL(8, 96, 4), // "name"
QT_MOC_LITERAL(9, 101, 6), // "remove"
QT_MOC_LITERAL(10, 108, 10), // "linkUpdate"
QT_MOC_LITERAL(11, 119, 6) // "linkid"

    },
    "CommConfigurationWindow\0setProtocol\0"
    "\0protocol\0setConnection\0connectionState\0"
    "connect\0setLinkName\0name\0remove\0"
    "linkUpdate\0linkid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommConfigurationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void CommConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommConfigurationWindow *_t = static_cast<CommConfigurationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setProtocol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setConnection(); break;
        case 2: _t->connectionState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setLinkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->remove(); break;
        case 5: _t->linkUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CommConfigurationWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CommConfigurationWindow.data,
      qt_meta_data_CommConfigurationWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CommConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommConfigurationWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CommConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
