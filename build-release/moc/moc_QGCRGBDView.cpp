/****************************************************************************
** Meta object code from reading C++ file 'QGCRGBDView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCRGBDView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCRGBDView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCRGBDView_t {
    QByteArrayData data[10];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCRGBDView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCRGBDView_t qt_meta_stringdata_QGCRGBDView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QGCRGBDView"
QT_MOC_LITERAL(1, 12, 12), // "setActiveUAS"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 40, 3), // "uas"
QT_MOC_LITERAL(5, 44, 9), // "clearData"
QT_MOC_LITERAL(6, 54, 9), // "enableRGB"
QT_MOC_LITERAL(7, 64, 7), // "enabled"
QT_MOC_LITERAL(8, 72, 11), // "enableDepth"
QT_MOC_LITERAL(9, 84, 10) // "updateData"

    },
    "QGCRGBDView\0setActiveUAS\0\0UASInterface*\0"
    "uas\0clearData\0enableRGB\0enabled\0"
    "enableDepth\0updateData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCRGBDView[] = {

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
       6,    1,   43,    2, 0x0a /* Public */,
       8,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QGCRGBDView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCRGBDView *_t = static_cast<QGCRGBDView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->clearData(); break;
        case 2: _t->enableRGB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableDepth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateData((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGCRGBDView::staticMetaObject = {
    { &HUD::staticMetaObject, qt_meta_stringdata_QGCRGBDView.data,
      qt_meta_data_QGCRGBDView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCRGBDView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCRGBDView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCRGBDView.stringdata0))
        return static_cast<void*>(this);
    return HUD::qt_metacast(_clname);
}

int QGCRGBDView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HUD::qt_metacall(_c, _id, _a);
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
