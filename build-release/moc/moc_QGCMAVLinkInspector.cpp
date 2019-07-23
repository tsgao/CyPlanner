/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkInspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkInspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMAVLinkInspector_t {
    QByteArrayData data[22];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkInspector_t qt_meta_stringdata_QGCMAVLinkInspector = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMAVLinkInspector"
QT_MOC_LITERAL(1, 20, 14), // "receiveMessage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 51, 4), // "link"
QT_MOC_LITERAL(5, 56, 17), // "mavlink_message_t"
QT_MOC_LITERAL(6, 74, 7), // "message"
QT_MOC_LITERAL(7, 82, 9), // "clearView"
QT_MOC_LITERAL(8, 92, 11), // "refreshView"
QT_MOC_LITERAL(9, 104, 9), // "addSystem"
QT_MOC_LITERAL(10, 114, 13), // "UASInterface*"
QT_MOC_LITERAL(11, 128, 3), // "uas"
QT_MOC_LITERAL(12, 132, 12), // "addComponent"
QT_MOC_LITERAL(13, 145, 9), // "component"
QT_MOC_LITERAL(14, 155, 4), // "name"
QT_MOC_LITERAL(15, 160, 24), // "selectDropDownMenuSystem"
QT_MOC_LITERAL(16, 185, 10), // "dropdownid"
QT_MOC_LITERAL(17, 196, 27), // "selectDropDownMenuComponent"
QT_MOC_LITERAL(18, 224, 19), // "rateTreeItemChanged"
QT_MOC_LITERAL(19, 244, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(20, 261, 9), // "paramItem"
QT_MOC_LITERAL(21, 271, 6) // "column"

    },
    "QGCMAVLinkInspector\0receiveMessage\0\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "message\0clearView\0refreshView\0addSystem\0"
    "UASInterface*\0uas\0addComponent\0component\0"
    "name\0selectDropDownMenuSystem\0dropdownid\0"
    "selectDropDownMenuComponent\0"
    "rateTreeItemChanged\0QTreeWidgetItem*\0"
    "paramItem\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkInspector[] = {

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
       1,    2,   54,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      12,    3,   64,    2, 0x0a /* Public */,
      15,    1,   71,    2, 0x0a /* Public */,
      17,    1,   74,    2, 0x0a /* Public */,
      18,    2,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   11,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,   21,

       0        // eod
};

void QGCMAVLinkInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMAVLinkInspector *_t = static_cast<QGCMAVLinkInspector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 1: _t->clearView(); break;
        case 2: _t->refreshView(); break;
        case 3: _t->addSystem((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->addComponent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->selectDropDownMenuSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->selectDropDownMenuComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->rateTreeItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
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

const QMetaObject QGCMAVLinkInspector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkInspector.data,
      qt_meta_data_QGCMAVLinkInspector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMAVLinkInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkInspector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
