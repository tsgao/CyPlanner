/****************************************************************************
** Meta object code from reading C++ file 'QGCUDPClientLinkConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCUDPClientLinkConfiguration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUDPClientLinkConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCUDPClientLinkConfiguration_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUDPClientLinkConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUDPClientLinkConfiguration_t qt_meta_stringdata_QGCUDPClientLinkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QGCUDPClientLinkConfiguration"
QT_MOC_LITERAL(1, 30, 16), // "portValueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "value"
QT_MOC_LITERAL(4, 54, 16), // "hostValueChanged"
QT_MOC_LITERAL(5, 71, 4), // "host"
QT_MOC_LITERAL(6, 76, 11), // "linkChanged"
QT_MOC_LITERAL(7, 88, 6) // "linkid"

    },
    "QGCUDPClientLinkConfiguration\0"
    "portValueChanged\0\0value\0hostValueChanged\0"
    "host\0linkChanged\0linkid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUDPClientLinkConfiguration[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void QGCUDPClientLinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCUDPClientLinkConfiguration *_t = static_cast<QGCUDPClientLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->portValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hostValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->linkChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCUDPClientLinkConfiguration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCUDPClientLinkConfiguration.data,
      qt_meta_data_QGCUDPClientLinkConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCUDPClientLinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUDPClientLinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUDPClientLinkConfiguration.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCUDPClientLinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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