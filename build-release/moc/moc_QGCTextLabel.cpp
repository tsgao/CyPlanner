/****************************************************************************
** Meta object code from reading C++ file 'QGCTextLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCTextLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCTextLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCTextLabel_t {
    QByteArrayData data[15];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCTextLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCTextLabel_t qt_meta_stringdata_QGCTextLabel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCTextLabel"
QT_MOC_LITERAL(1, 13, 13), // "startEditMode"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "endEditMode"
QT_MOC_LITERAL(4, 40, 13), // "writeSettings"
QT_MOC_LITERAL(5, 54, 10), // "QSettings&"
QT_MOC_LITERAL(6, 65, 8), // "settings"
QT_MOC_LITERAL(7, 74, 12), // "readSettings"
QT_MOC_LITERAL(8, 87, 9), // "QSettings"
QT_MOC_LITERAL(9, 97, 3), // "pre"
QT_MOC_LITERAL(10, 101, 19), // "textMessageReceived"
QT_MOC_LITERAL(11, 121, 5), // "uasid"
QT_MOC_LITERAL(12, 127, 9), // "component"
QT_MOC_LITERAL(13, 137, 8), // "severity"
QT_MOC_LITERAL(14, 146, 7) // "message"

    },
    "QGCTextLabel\0startEditMode\0\0endEditMode\0"
    "writeSettings\0QSettings&\0settings\0"
    "readSettings\0QSettings\0pre\0"
    "textMessageReceived\0uasid\0component\0"
    "severity\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCTextLabel[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
       7,    2,   52,    2, 0x0a /* Public */,
      10,    4,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    9,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   11,   12,   13,   14,

       0        // eod
};

void QGCTextLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCTextLabel *_t = static_cast<QGCTextLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startEditMode(); break;
        case 1: _t->endEditMode(); break;
        case 2: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 3: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 4: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 5: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCTextLabel::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCTextLabel.data,
      qt_meta_data_QGCTextLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCTextLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCTextLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCTextLabel.stringdata0))
        return static_cast<void*>(this);
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCTextLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
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
