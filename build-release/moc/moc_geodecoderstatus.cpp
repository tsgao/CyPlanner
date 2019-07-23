/****************************************************************************
** Meta object code from reading C++ file 'geodecoderstatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/core/geodecoderstatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geodecoderstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_core__GeoCoderStatusCode_t {
    QByteArrayData data[13];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_core__GeoCoderStatusCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_core__GeoCoderStatusCode_t qt_meta_stringdata_core__GeoCoderStatusCode = {
    {
QT_MOC_LITERAL(0, 0, 24), // "core::GeoCoderStatusCode"
QT_MOC_LITERAL(1, 25, 5), // "Types"
QT_MOC_LITERAL(2, 31, 6), // "Unknow"
QT_MOC_LITERAL(3, 38, 13), // "G_GEO_SUCCESS"
QT_MOC_LITERAL(4, 52, 17), // "G_GEO_BAD_REQUEST"
QT_MOC_LITERAL(5, 70, 18), // "G_GEO_SERVER_ERROR"
QT_MOC_LITERAL(6, 89, 19), // "G_GEO_MISSING_QUERY"
QT_MOC_LITERAL(7, 109, 21), // "G_GEO_MISSING_ADDRESS"
QT_MOC_LITERAL(8, 131, 21), // "G_GEO_UNKNOWN_ADDRESS"
QT_MOC_LITERAL(9, 153, 25), // "G_GEO_UNAVAILABLE_ADDRESS"
QT_MOC_LITERAL(10, 179, 24), // "G_GEO_UNKNOWN_DIRECTIONS"
QT_MOC_LITERAL(11, 204, 13), // "G_GEO_BAD_KEY"
QT_MOC_LITERAL(12, 218, 22) // "G_GEO_TOO_MANY_QUERIES"

    },
    "core::GeoCoderStatusCode\0Types\0Unknow\0"
    "G_GEO_SUCCESS\0G_GEO_BAD_REQUEST\0"
    "G_GEO_SERVER_ERROR\0G_GEO_MISSING_QUERY\0"
    "G_GEO_MISSING_ADDRESS\0G_GEO_UNKNOWN_ADDRESS\0"
    "G_GEO_UNAVAILABLE_ADDRESS\0"
    "G_GEO_UNKNOWN_DIRECTIONS\0G_GEO_BAD_KEY\0"
    "G_GEO_TOO_MANY_QUERIES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_core__GeoCoderStatusCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   11,   18,

 // enum data: key, value
       2, uint(core::GeoCoderStatusCode::Unknow),
       3, uint(core::GeoCoderStatusCode::G_GEO_SUCCESS),
       4, uint(core::GeoCoderStatusCode::G_GEO_BAD_REQUEST),
       5, uint(core::GeoCoderStatusCode::G_GEO_SERVER_ERROR),
       6, uint(core::GeoCoderStatusCode::G_GEO_MISSING_QUERY),
       7, uint(core::GeoCoderStatusCode::G_GEO_MISSING_ADDRESS),
       8, uint(core::GeoCoderStatusCode::G_GEO_UNKNOWN_ADDRESS),
       9, uint(core::GeoCoderStatusCode::G_GEO_UNAVAILABLE_ADDRESS),
      10, uint(core::GeoCoderStatusCode::G_GEO_UNKNOWN_DIRECTIONS),
      11, uint(core::GeoCoderStatusCode::G_GEO_BAD_KEY),
      12, uint(core::GeoCoderStatusCode::G_GEO_TOO_MANY_QUERIES),

       0        // eod
};

void core::GeoCoderStatusCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject core::GeoCoderStatusCode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_core__GeoCoderStatusCode.data,
      qt_meta_data_core__GeoCoderStatusCode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *core::GeoCoderStatusCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *core::GeoCoderStatusCode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_core__GeoCoderStatusCode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int core::GeoCoderStatusCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
