/****************************************************************************
** Meta object code from reading C++ file 'WaypointViewOnlyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/WaypointViewOnlyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaypointViewOnlyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaypointViewOnlyView_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaypointViewOnlyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaypointViewOnlyView_t qt_meta_stringdata_WaypointViewOnlyView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WaypointViewOnlyView"
QT_MOC_LITERAL(1, 21, 21), // "changeCurrentWaypoint"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 18), // "changeAutoContinue"
QT_MOC_LITERAL(4, 63, 14), // "changedCurrent"
QT_MOC_LITERAL(5, 78, 5), // "state"
QT_MOC_LITERAL(6, 84, 19), // "changedAutoContinue"
QT_MOC_LITERAL(7, 104, 12), // "updateValues"
QT_MOC_LITERAL(8, 117, 10) // "setCurrent"

    },
    "WaypointViewOnlyView\0changeCurrentWaypoint\0"
    "\0changeAutoContinue\0changedCurrent\0"
    "state\0changedAutoContinue\0updateValues\0"
    "setCurrent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaypointViewOnlyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UShort, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void WaypointViewOnlyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WaypointViewOnlyView *_t = static_cast<WaypointViewOnlyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 1: _t->changeAutoContinue((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->changedCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changedAutoContinue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateValues(); break;
        case 5: _t->setCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WaypointViewOnlyView::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WaypointViewOnlyView::changeCurrentWaypoint)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WaypointViewOnlyView::*_t)(quint16 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WaypointViewOnlyView::changeAutoContinue)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WaypointViewOnlyView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaypointViewOnlyView.data,
      qt_meta_data_WaypointViewOnlyView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WaypointViewOnlyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaypointViewOnlyView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointViewOnlyView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WaypointViewOnlyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WaypointViewOnlyView::changeCurrentWaypoint(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WaypointViewOnlyView::changeAutoContinue(quint16 _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
