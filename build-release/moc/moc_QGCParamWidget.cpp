/****************************************************************************
** Meta object code from reading C++ file 'QGCParamWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCParamWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCParamWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCParamWidget_t {
    QByteArrayData data[28];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCParamWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCParamWidget_t qt_meta_stringdata_QGCParamWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCParamWidget"
QT_MOC_LITERAL(1, 15, 16), // "requestParameter"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "component"
QT_MOC_LITERAL(4, 43, 9), // "parameter"
QT_MOC_LITERAL(5, 53, 12), // "addComponent"
QT_MOC_LITERAL(6, 66, 3), // "uas"
QT_MOC_LITERAL(7, 70, 13), // "componentName"
QT_MOC_LITERAL(8, 84, 12), // "addParameter"
QT_MOC_LITERAL(9, 97, 10), // "paramCount"
QT_MOC_LITERAL(10, 108, 7), // "paramId"
QT_MOC_LITERAL(11, 116, 13), // "parameterName"
QT_MOC_LITERAL(12, 130, 5), // "value"
QT_MOC_LITERAL(13, 136, 20), // "requestParameterList"
QT_MOC_LITERAL(14, 157, 22), // "requestParameterUpdate"
QT_MOC_LITERAL(15, 180, 12), // "setParameter"
QT_MOC_LITERAL(16, 193, 13), // "setParameters"
QT_MOC_LITERAL(17, 207, 15), // "writeParameters"
QT_MOC_LITERAL(18, 223, 14), // "readParameters"
QT_MOC_LITERAL(19, 238, 5), // "clear"
QT_MOC_LITERAL(20, 244, 20), // "parameterItemChanged"
QT_MOC_LITERAL(21, 265, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(22, 282, 4), // "prev"
QT_MOC_LITERAL(23, 287, 6), // "column"
QT_MOC_LITERAL(24, 294, 27), // "saveParametersButtonClicked"
QT_MOC_LITERAL(25, 322, 27), // "loadParametersButtonClicked"
QT_MOC_LITERAL(26, 350, 23), // "retransmissionGuardTick"
QT_MOC_LITERAL(27, 374, 21) // "initialParamCheckTick"

    },
    "QGCParamWidget\0requestParameter\0\0"
    "component\0parameter\0addComponent\0uas\0"
    "componentName\0addParameter\0paramCount\0"
    "paramId\0parameterName\0value\0"
    "requestParameterList\0requestParameterUpdate\0"
    "setParameter\0setParameters\0writeParameters\0"
    "readParameters\0clear\0parameterItemChanged\0"
    "QTreeWidgetItem*\0prev\0column\0"
    "saveParametersButtonClicked\0"
    "loadParametersButtonClicked\0"
    "retransmissionGuardTick\0initialParamCheckTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCParamWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       1,    2,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,  109,    2, 0x0a /* Public */,
       8,    6,  116,    2, 0x0a /* Public */,
       8,    4,  129,    2, 0x0a /* Public */,
      13,    0,  138,    2, 0x0a /* Public */,
      14,    2,  139,    2, 0x0a /* Public */,
      15,    3,  144,    2, 0x0a /* Public */,
      16,    0,  151,    2, 0x0a /* Public */,
      17,    0,  152,    2, 0x0a /* Public */,
      18,    0,  153,    2, 0x0a /* Public */,
      19,    0,  154,    2, 0x0a /* Public */,
      20,    2,  155,    2, 0x0a /* Public */,
      24,    0,  160,    2, 0x0a /* Public */,
      25,    0,  161,    2, 0x0a /* Public */,
      26,    0,  162,    2, 0x0a /* Public */,
      27,    0,  163,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    6,    3,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    6,    3,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    6,    3,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    3,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCParamWidget *_t = static_cast<QGCParamWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->requestParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->addComponent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->addParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        case 4: _t->addParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 5: _t->requestParameterList(); break;
        case 6: _t->requestParameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->setParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 8: _t->setParameters(); break;
        case 9: _t->writeParameters(); break;
        case 10: _t->readParameters(); break;
        case 11: _t->clear(); break;
        case 12: _t->parameterItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->saveParametersButtonClicked(); break;
        case 14: _t->loadParametersButtonClicked(); break;
        case 15: _t->retransmissionGuardTick(); break;
        case 16: _t->initialParamCheckTick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCParamWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCParamWidget::requestParameter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCParamWidget::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCParamWidget::requestParameter)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCParamWidget::staticMetaObject = {
    { &QGCUASParamManager::staticMetaObject, qt_meta_stringdata_QGCParamWidget.data,
      qt_meta_data_QGCParamWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCParamWidget.stringdata0))
        return static_cast<void*>(this);
    return QGCUASParamManager::qt_metacast(_clname);
}

int QGCParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCUASParamManager::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCParamWidget::requestParameter(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCParamWidget::requestParameter(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
