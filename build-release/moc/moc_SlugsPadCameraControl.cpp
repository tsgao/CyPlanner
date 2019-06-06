/****************************************************************************
** Meta object code from reading C++ file 'SlugsPadCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SlugsPadCameraControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsPadCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SlugsPadCameraControl_t {
    QByteArrayData data[15];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlugsPadCameraControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlugsPadCameraControl_t qt_meta_stringdata_SlugsPadCameraControl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SlugsPadCameraControl"
QT_MOC_LITERAL(1, 22, 18), // "changeMotionCamera"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "MotionCamera"
QT_MOC_LITERAL(4, 55, 19), // "getDeltaPositionPad"
QT_MOC_LITERAL(5, 75, 1), // "x"
QT_MOC_LITERAL(6, 77, 1), // "y"
QT_MOC_LITERAL(7, 79, 30), // "ObtenerMarcacionDistanciaPixel"
QT_MOC_LITERAL(8, 110, 4), // "lon1"
QT_MOC_LITERAL(9, 115, 4), // "lat1"
QT_MOC_LITERAL(10, 120, 4), // "lon2"
QT_MOC_LITERAL(11, 125, 4), // "lat2"
QT_MOC_LITERAL(12, 130, 12), // "activeUasSet"
QT_MOC_LITERAL(13, 143, 13), // "UASInterface*"
QT_MOC_LITERAL(14, 157, 3) // "uas"

    },
    "SlugsPadCameraControl\0changeMotionCamera\0"
    "\0MotionCamera\0getDeltaPositionPad\0x\0"
    "y\0ObtenerMarcacionDistanciaPixel\0lon1\0"
    "lat1\0lon2\0lat2\0activeUasSet\0UASInterface*\0"
    "uas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlugsPadCameraControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       7,    4,   42,    2, 0x0a /* Public */,
      12,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::QPointF, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void SlugsPadCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlugsPadCameraControl *_t = static_cast<SlugsPadCameraControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeMotionCamera((*reinterpret_cast< MotionCamera(*)>(_a[1]))); break;
        case 1: _t->getDeltaPositionPad((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: { QPointF _r = _t->ObtenerMarcacionDistanciaPixel((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            typedef void (SlugsPadCameraControl::*_t)(MotionCamera );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlugsPadCameraControl::changeMotionCamera)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SlugsPadCameraControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SlugsPadCameraControl.data,
      qt_meta_data_SlugsPadCameraControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SlugsPadCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlugsPadCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsPadCameraControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SlugsPadCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SlugsPadCameraControl::changeMotionCamera(MotionCamera _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
