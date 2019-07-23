/****************************************************************************
** Meta object code from reading C++ file 'QGCUASParamManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/QGCUASParamManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUASParamManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCUASParamManager_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUASParamManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUASParamManager_t qt_meta_stringdata_QGCUASParamManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCUASParamManager"
QT_MOC_LITERAL(1, 19, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "component"
QT_MOC_LITERAL(4, 47, 9), // "parameter"
QT_MOC_LITERAL(5, 57, 5), // "value"
QT_MOC_LITERAL(6, 63, 14), // "parameterIndex"
QT_MOC_LITERAL(7, 78, 21), // "parameterListUpToDate"
QT_MOC_LITERAL(8, 100, 12), // "setParameter"
QT_MOC_LITERAL(9, 113, 13), // "parameterName"
QT_MOC_LITERAL(10, 127, 20) // "requestParameterList"

    },
    "QGCUASParamManager\0parameterChanged\0"
    "\0component\0parameter\0value\0parameterIndex\0"
    "parameterListUpToDate\0setParameter\0"
    "parameterName\0requestParameterList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUASParamManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       1,    3,   46,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   56,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,    3,    6,    5,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,    9,    5,
    QMetaType::Void,

       0        // eod
};

void QGCUASParamManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCUASParamManager *_t = static_cast<QGCUASParamManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 2: _t->parameterListUpToDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 4: _t->requestParameterList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCUASParamManager::*_t)(int , QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCUASParamManager::parameterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCUASParamManager::*_t)(int , int , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCUASParamManager::parameterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCUASParamManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCUASParamManager::parameterListUpToDate)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QGCUASParamManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCUASParamManager.data,
      qt_meta_data_QGCUASParamManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCUASParamManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUASParamManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUASParamManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCUASParamManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QGCUASParamManager::parameterChanged(int _t1, QString _t2, QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCUASParamManager::parameterChanged(int _t1, int _t2, QVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCUASParamManager::parameterListUpToDate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
