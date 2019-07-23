/****************************************************************************
** Meta object code from reading C++ file 'QGCStatusBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCStatusBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCStatusBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCStatusBar_t {
    QByteArrayData data[16];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCStatusBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCStatusBar_t qt_meta_stringdata_QGCStatusBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCStatusBar"
QT_MOC_LITERAL(1, 13, 7), // "logging"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "checked"
QT_MOC_LITERAL(4, 30, 12), // "setLogPlayer"
QT_MOC_LITERAL(5, 43, 20), // "QGCMAVLinkLogPlayer*"
QT_MOC_LITERAL(6, 64, 6), // "player"
QT_MOC_LITERAL(7, 71, 9), // "logPlayer"
QT_MOC_LITERAL(8, 81, 10), // "paintEvent"
QT_MOC_LITERAL(9, 92, 12), // "QPaintEvent*"
QT_MOC_LITERAL(10, 105, 5), // "event"
QT_MOC_LITERAL(11, 111, 12), // "activeUASSet"
QT_MOC_LITERAL(12, 124, 13), // "UASInterface*"
QT_MOC_LITERAL(13, 138, 3), // "uas"
QT_MOC_LITERAL(14, 142, 12), // "uasConnected"
QT_MOC_LITERAL(15, 155, 15) // "uasDisconnected"

    },
    "QGCStatusBar\0logging\0\0checked\0"
    "setLogPlayer\0QGCMAVLinkLogPlayer*\0"
    "player\0logPlayer\0paintEvent\0QPaintEvent*\0"
    "event\0activeUASSet\0UASInterface*\0uas\0"
    "uasConnected\0uasDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCStatusBar[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x08 /* Private */,
      14,    0,   62,    2, 0x08 /* Private */,
      15,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCStatusBar *_t = static_cast<QGCStatusBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setLogPlayer((*reinterpret_cast< QGCMAVLinkLogPlayer*(*)>(_a[1]))); break;
        case 2: { QGCMAVLinkLogPlayer* _r = _t->logPlayer();
            if (_a[0]) *reinterpret_cast< QGCMAVLinkLogPlayer**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 4: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->uasConnected(); break;
        case 6: _t->uasDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMAVLinkLogPlayer* >(); break;
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

const QMetaObject QGCStatusBar::staticMetaObject = {
    { &QStatusBar::staticMetaObject, qt_meta_stringdata_QGCStatusBar.data,
      qt_meta_data_QGCStatusBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCStatusBar.stringdata0))
        return static_cast<void*>(this);
    return QStatusBar::qt_metacast(_clname);
}

int QGCStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStatusBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
