/****************************************************************************
** Meta object code from reading C++ file 'StandardParamConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/StandardParamConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StandardParamConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StandardParamConfig_t {
    QByteArrayData data[22];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StandardParamConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StandardParamConfig_t qt_meta_stringdata_StandardParamConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "StandardParamConfig"
QT_MOC_LITERAL(1, 20, 8), // "addRange"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "title"
QT_MOC_LITERAL(4, 36, 11), // "description"
QT_MOC_LITERAL(5, 48, 5), // "param"
QT_MOC_LITERAL(6, 54, 3), // "min"
QT_MOC_LITERAL(7, 58, 3), // "max"
QT_MOC_LITERAL(8, 62, 9), // "increment"
QT_MOC_LITERAL(9, 72, 8), // "addCombo"
QT_MOC_LITERAL(10, 81, 26), // "QList<QPair<int,QString> >"
QT_MOC_LITERAL(11, 108, 9), // "valuelist"
QT_MOC_LITERAL(12, 118, 14), // "allParamsAdded"
QT_MOC_LITERAL(13, 133, 16), // "parameterChanged"
QT_MOC_LITERAL(14, 150, 3), // "uas"
QT_MOC_LITERAL(15, 154, 9), // "component"
QT_MOC_LITERAL(16, 164, 13), // "parameterName"
QT_MOC_LITERAL(17, 178, 5), // "value"
QT_MOC_LITERAL(18, 184, 18), // "doubleValueChanged"
QT_MOC_LITERAL(19, 203, 15), // "intValueChanged"
QT_MOC_LITERAL(20, 219, 21), // "onSearchFilterChanged"
QT_MOC_LITERAL(21, 241, 16) // "searchFilterText"

    },
    "StandardParamConfig\0addRange\0\0title\0"
    "description\0param\0min\0max\0increment\0"
    "addCombo\0QList<QPair<int,QString> >\0"
    "valuelist\0allParamsAdded\0parameterChanged\0"
    "uas\0component\0parameterName\0value\0"
    "doubleValueChanged\0intValueChanged\0"
    "onSearchFilterChanged\0searchFilterText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StandardParamConfig[] = {

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
       1,    6,   49,    2, 0x0a /* Public */,
       9,    4,   62,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    4,   72,    2, 0x0a /* Public */,
      18,    2,   81,    2, 0x0a /* Public */,
      19,    2,   86,    2, 0x0a /* Public */,
      20,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 10,    3,    4,    5,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    5,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,   17,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void StandardParamConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StandardParamConfig *_t = static_cast<StandardParamConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->addCombo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QList<QPair<int,QString> >(*)>(_a[4]))); break;
        case 2: _t->allParamsAdded(); break;
        case 3: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 4: _t->doubleValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->intValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->onSearchFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StandardParamConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_StandardParamConfig.data,
      qt_meta_data_StandardParamConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StandardParamConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StandardParamConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StandardParamConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int StandardParamConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
