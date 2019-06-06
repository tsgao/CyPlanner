/****************************************************************************
** Meta object code from reading C++ file 'FrameTypeConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/FrameTypeConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameTypeConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrameTypeConfig_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameTypeConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameTypeConfig_t qt_meta_stringdata_FrameTypeConfig = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FrameTypeConfig"
QT_MOC_LITERAL(1, 16, 20), // "detectedOldFrameType"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "frameType"
QT_MOC_LITERAL(4, 48, 20), // "detectedNewFrameType"
QT_MOC_LITERAL(5, 69, 10), // "frameClass"
QT_MOC_LITERAL(6, 80, 18), // "paramButtonClicked"
QT_MOC_LITERAL(7, 99, 21), // "activateCompareDialog"
QT_MOC_LITERAL(8, 121, 16), // "parameterChanged"
QT_MOC_LITERAL(9, 138, 3), // "uas"
QT_MOC_LITERAL(10, 142, 9), // "component"
QT_MOC_LITERAL(11, 152, 13), // "parameterName"
QT_MOC_LITERAL(12, 166, 5), // "value"
QT_MOC_LITERAL(13, 172, 14), // "parameterCount"
QT_MOC_LITERAL(14, 187, 11) // "parameterId"

    },
    "FrameTypeConfig\0detectedOldFrameType\0"
    "\0frameType\0detectedNewFrameType\0"
    "frameClass\0paramButtonClicked\0"
    "activateCompareDialog\0parameterChanged\0"
    "uas\0component\0parameterName\0value\0"
    "parameterCount\0parameterId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameTypeConfig[] = {

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
       4,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   52,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,
       8,    4,   54,    2, 0x08 /* Private */,
       8,    6,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    9,   10,   13,   14,   11,   12,

       0        // eod
};

void FrameTypeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameTypeConfig *_t = static_cast<FrameTypeConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detectedOldFrameType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->detectedNewFrameType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->paramButtonClicked(); break;
        case 3: _t->activateCompareDialog(); break;
        case 4: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 5: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FrameTypeConfig::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameTypeConfig::detectedOldFrameType)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FrameTypeConfig::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameTypeConfig::detectedNewFrameType)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FrameTypeConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_FrameTypeConfig.data,
      qt_meta_data_FrameTypeConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FrameTypeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameTypeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrameTypeConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int FrameTypeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
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
void FrameTypeConfig::detectedOldFrameType(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FrameTypeConfig::detectedNewFrameType(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FrameTypeConfigOld_t {
    QByteArrayData data[9];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameTypeConfigOld_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameTypeConfigOld_t qt_meta_stringdata_FrameTypeConfigOld = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FrameTypeConfigOld"
QT_MOC_LITERAL(1, 19, 12), // "setFrameType"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "frameType"
QT_MOC_LITERAL(4, 43, 14), // "xFrameSelected"
QT_MOC_LITERAL(5, 58, 17), // "plusFrameSelected"
QT_MOC_LITERAL(6, 76, 14), // "vFrameSelected"
QT_MOC_LITERAL(7, 91, 14), // "hFrameSelected"
QT_MOC_LITERAL(8, 106, 18) // "newY6FrameSelected"

    },
    "FrameTypeConfigOld\0setFrameType\0\0"
    "frameType\0xFrameSelected\0plusFrameSelected\0"
    "vFrameSelected\0hFrameSelected\0"
    "newY6FrameSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameTypeConfigOld[] = {

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
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrameTypeConfigOld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameTypeConfigOld *_t = static_cast<FrameTypeConfigOld *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFrameType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->xFrameSelected(); break;
        case 2: _t->plusFrameSelected(); break;
        case 3: _t->vFrameSelected(); break;
        case 4: _t->hFrameSelected(); break;
        case 5: _t->newY6FrameSelected(); break;
        default: ;
        }
    }
}

const QMetaObject FrameTypeConfigOld::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrameTypeConfigOld.data,
      qt_meta_data_FrameTypeConfigOld,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FrameTypeConfigOld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameTypeConfigOld::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrameTypeConfigOld.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrameTypeConfigOld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_FrameTypeConfigNew_t {
    QByteArrayData data[21];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameTypeConfigNew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameTypeConfigNew_t qt_meta_stringdata_FrameTypeConfigNew = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FrameTypeConfigNew"
QT_MOC_LITERAL(1, 19, 12), // "setFrameType"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "frameClass"
QT_MOC_LITERAL(4, 44, 9), // "frameType"
QT_MOC_LITERAL(5, 54, 22), // "FrameClassQuadSelected"
QT_MOC_LITERAL(6, 77, 22), // "FrameClassHexaSelected"
QT_MOC_LITERAL(7, 100, 22), // "FrameClassOctaSelected"
QT_MOC_LITERAL(8, 123, 26), // "FrameClassOctaQuadSelected"
QT_MOC_LITERAL(9, 150, 20), // "FrameClassY6Selected"
QT_MOC_LITERAL(10, 171, 22), // "FrameClassHeliSelected"
QT_MOC_LITERAL(11, 194, 21), // "FrameClassTriSelected"
QT_MOC_LITERAL(12, 216, 24), // "FrameClassSingleSelected"
QT_MOC_LITERAL(13, 241, 22), // "FrameClassCoaxSelected"
QT_MOC_LITERAL(14, 264, 21), // "FrameTypePlusSelected"
QT_MOC_LITERAL(15, 286, 18), // "FrameTypeXSelected"
QT_MOC_LITERAL(16, 305, 18), // "FrameTypeHSelected"
QT_MOC_LITERAL(17, 324, 18), // "FrameTypeVSelected"
QT_MOC_LITERAL(18, 343, 22), // "FrameTypeVTailSelected"
QT_MOC_LITERAL(19, 366, 22), // "FrameTypeATailSelected"
QT_MOC_LITERAL(20, 389, 20) // "FrameTypeY6BSelected"

    },
    "FrameTypeConfigNew\0setFrameType\0\0"
    "frameClass\0frameType\0FrameClassQuadSelected\0"
    "FrameClassHexaSelected\0FrameClassOctaSelected\0"
    "FrameClassOctaQuadSelected\0"
    "FrameClassY6Selected\0FrameClassHeliSelected\0"
    "FrameClassTriSelected\0FrameClassSingleSelected\0"
    "FrameClassCoaxSelected\0FrameTypePlusSelected\0"
    "FrameTypeXSelected\0FrameTypeHSelected\0"
    "FrameTypeVSelected\0FrameTypeVTailSelected\0"
    "FrameTypeATailSelected\0FrameTypeY6BSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameTypeConfigNew[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x0a /* Public */,
       5,    0,  104,    2, 0x08 /* Private */,
       6,    0,  105,    2, 0x08 /* Private */,
       7,    0,  106,    2, 0x08 /* Private */,
       8,    0,  107,    2, 0x08 /* Private */,
       9,    0,  108,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,
      19,    0,  118,    2, 0x08 /* Private */,
      20,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FrameTypeConfigNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrameTypeConfigNew *_t = static_cast<FrameTypeConfigNew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFrameType((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->FrameClassQuadSelected(); break;
        case 2: _t->FrameClassHexaSelected(); break;
        case 3: _t->FrameClassOctaSelected(); break;
        case 4: _t->FrameClassOctaQuadSelected(); break;
        case 5: _t->FrameClassY6Selected(); break;
        case 6: _t->FrameClassHeliSelected(); break;
        case 7: _t->FrameClassTriSelected(); break;
        case 8: _t->FrameClassSingleSelected(); break;
        case 9: _t->FrameClassCoaxSelected(); break;
        case 10: _t->FrameTypePlusSelected(); break;
        case 11: _t->FrameTypeXSelected(); break;
        case 12: _t->FrameTypeHSelected(); break;
        case 13: _t->FrameTypeVSelected(); break;
        case 14: _t->FrameTypeVTailSelected(); break;
        case 15: _t->FrameTypeATailSelected(); break;
        case 16: _t->FrameTypeY6BSelected(); break;
        default: ;
        }
    }
}

const QMetaObject FrameTypeConfigNew::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrameTypeConfigNew.data,
      qt_meta_data_FrameTypeConfigNew,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FrameTypeConfigNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameTypeConfigNew::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrameTypeConfigNew.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FrameTypeConfigNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
