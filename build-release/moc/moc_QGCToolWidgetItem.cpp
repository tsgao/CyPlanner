/****************************************************************************
** Meta object code from reading C++ file 'QGCToolWidgetItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCToolWidgetItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCToolWidgetItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCToolWidgetItem_t {
    QByteArrayData data[16];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCToolWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCToolWidgetItem_t qt_meta_stringdata_QGCToolWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCToolWidgetItem"
QT_MOC_LITERAL(1, 18, 15), // "editingFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "startEditMode"
QT_MOC_LITERAL(4, 49, 11), // "endEditMode"
QT_MOC_LITERAL(5, 61, 12), // "setComponent"
QT_MOC_LITERAL(6, 74, 4), // "comp"
QT_MOC_LITERAL(7, 79, 13), // "writeSettings"
QT_MOC_LITERAL(8, 93, 10), // "QSettings&"
QT_MOC_LITERAL(9, 104, 8), // "settings"
QT_MOC_LITERAL(10, 113, 12), // "readSettings"
QT_MOC_LITERAL(11, 126, 9), // "QSettings"
QT_MOC_LITERAL(12, 136, 3), // "pre"
QT_MOC_LITERAL(13, 140, 12), // "setActiveUAS"
QT_MOC_LITERAL(14, 153, 13), // "UASInterface*"
QT_MOC_LITERAL(15, 167, 3) // "uas"

    },
    "QGCToolWidgetItem\0editingFinished\0\0"
    "startEditMode\0endEditMode\0setComponent\0"
    "comp\0writeSettings\0QSettings&\0settings\0"
    "readSettings\0QSettings\0pre\0setActiveUAS\0"
    "UASInterface*\0uas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCToolWidgetItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      10,    2,   66,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   12,    9,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QGCToolWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCToolWidgetItem *_t = static_cast<QGCToolWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->startEditMode(); break;
        case 2: _t->endEditMode(); break;
        case 3: _t->setComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 5: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 6: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 7: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            typedef void (QGCToolWidgetItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCToolWidgetItem::editingFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCToolWidgetItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCToolWidgetItem.data,
      qt_meta_data_QGCToolWidgetItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCToolWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCToolWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCToolWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCToolWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QGCToolWidgetItem::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
