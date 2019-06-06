/****************************************************************************
** Meta object code from reading C++ file 'UASManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASManager_t {
    QByteArrayData data[40];
    char stringdata0[444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASManager_t qt_meta_stringdata_UASManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UASManager"
QT_MOC_LITERAL(1, 11, 10), // "UASCreated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 37, 3), // "UAS"
QT_MOC_LITERAL(5, 41, 10), // "UASDeleted"
QT_MOC_LITERAL(6, 52, 12), // "activeUASSet"
QT_MOC_LITERAL(7, 65, 8), // "systemId"
QT_MOC_LITERAL(8, 74, 21), // "activeUASSetListIndex"
QT_MOC_LITERAL(9, 96, 9), // "listIndex"
QT_MOC_LITERAL(10, 106, 22), // "activeUASStatusChanged"
QT_MOC_LITERAL(11, 129, 6), // "active"
QT_MOC_LITERAL(12, 136, 19), // "homePositionChanged"
QT_MOC_LITERAL(13, 156, 3), // "lat"
QT_MOC_LITERAL(14, 160, 3), // "lon"
QT_MOC_LITERAL(15, 164, 3), // "alt"
QT_MOC_LITERAL(16, 168, 6), // "addUAS"
QT_MOC_LITERAL(17, 175, 9), // "removeUAS"
QT_MOC_LITERAL(18, 185, 3), // "uas"
QT_MOC_LITERAL(19, 189, 12), // "setActiveUAS"
QT_MOC_LITERAL(20, 202, 15), // "launchActiveUAS"
QT_MOC_LITERAL(21, 218, 13), // "haltActiveUAS"
QT_MOC_LITERAL(22, 232, 17), // "continueActiveUAS"
QT_MOC_LITERAL(23, 250, 15), // "returnActiveUAS"
QT_MOC_LITERAL(24, 266, 13), // "stopActiveUAS"
QT_MOC_LITERAL(25, 280, 13), // "killActiveUAS"
QT_MOC_LITERAL(26, 294, 18), // "configureActiveUAS"
QT_MOC_LITERAL(27, 313, 17), // "shutdownActiveUAS"
QT_MOC_LITERAL(28, 331, 15), // "setHomePosition"
QT_MOC_LITERAL(29, 347, 24), // "setLocalNEDSafetyBorders"
QT_MOC_LITERAL(30, 372, 2), // "x1"
QT_MOC_LITERAL(31, 375, 2), // "y1"
QT_MOC_LITERAL(32, 378, 2), // "z1"
QT_MOC_LITERAL(33, 381, 2), // "x2"
QT_MOC_LITERAL(34, 384, 2), // "y2"
QT_MOC_LITERAL(35, 387, 2), // "z2"
QT_MOC_LITERAL(36, 390, 22), // "uavChangedHomePosition"
QT_MOC_LITERAL(37, 413, 3), // "uav"
QT_MOC_LITERAL(38, 417, 12), // "loadSettings"
QT_MOC_LITERAL(39, 430, 13) // "storeSettings"

    },
    "UASManager\0UASCreated\0\0UASInterface*\0"
    "UAS\0UASDeleted\0activeUASSet\0systemId\0"
    "activeUASSetListIndex\0listIndex\0"
    "activeUASStatusChanged\0active\0"
    "homePositionChanged\0lat\0lon\0alt\0addUAS\0"
    "removeUAS\0uas\0setActiveUAS\0launchActiveUAS\0"
    "haltActiveUAS\0continueActiveUAS\0"
    "returnActiveUAS\0stopActiveUAS\0"
    "killActiveUAS\0configureActiveUAS\0"
    "shutdownActiveUAS\0setHomePosition\0"
    "setLocalNEDSafetyBorders\0x1\0y1\0z1\0x2\0"
    "y2\0z2\0uavChangedHomePosition\0uav\0"
    "loadSettings\0storeSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       6,    1,  145,    2, 0x06 /* Public */,
       6,    1,  148,    2, 0x06 /* Public */,
       8,    1,  151,    2, 0x06 /* Public */,
      10,    2,  154,    2, 0x06 /* Public */,
      10,    2,  159,    2, 0x06 /* Public */,
      12,    3,  164,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  171,    2, 0x0a /* Public */,
      17,    1,  174,    2, 0x0a /* Public */,
      17,    1,  177,    2, 0x0a /* Public */,
      19,    1,  180,    2, 0x0a /* Public */,
      20,    0,  183,    2, 0x0a /* Public */,
      21,    0,  184,    2, 0x0a /* Public */,
      22,    0,  185,    2, 0x0a /* Public */,
      23,    0,  186,    2, 0x0a /* Public */,
      24,    0,  187,    2, 0x0a /* Public */,
      25,    0,  188,    2, 0x0a /* Public */,
      26,    0,  189,    2, 0x0a /* Public */,
      27,    0,  190,    2, 0x0a /* Public */,
      28,    3,  191,    2, 0x0a /* Public */,
      29,    6,  198,    2, 0x0a /* Public */,
      36,    4,  211,    2, 0x0a /* Public */,
      38,    0,  220,    2, 0x0a /* Public */,
      39,    0,  221,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,   18,
    QMetaType::Void, QMetaType::QObjectStar,   18,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,   14,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   30,   31,   32,   33,   34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,   37,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UASManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASManager *_t = static_cast<UASManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UASCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->UASDeleted((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->activeUASSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->activeUASSetListIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->activeUASStatusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->activeUASStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->removeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 10: _t->removeUAS((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 11: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 12: { bool _r = _t->launchActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->haltActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->continueActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->returnActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->stopActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->killActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->configureActiveUAS(); break;
        case 19: { bool _r = _t->shutdownActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setLocalNEDSafetyBorders((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 22: _t->uavChangedHomePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 23: _t->loadSettings(); break;
        case 24: _t->storeSettings(); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 11:
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
            typedef void (UASManager::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::UASCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::UASDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::activeUASSet)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::activeUASSet)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::activeUASSetListIndex)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(UASInterface * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::activeUASStatusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::activeUASStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UASManager::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASManager::homePositionChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject UASManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASManager.data,
      qt_meta_data_UASManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UASManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void UASManager::UASCreated(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASManager::UASDeleted(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASManager::activeUASSet(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASManager::activeUASSet(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASManager::activeUASSetListIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASManager::activeUASStatusChanged(UASInterface * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASManager::activeUASStatusChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASManager::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
