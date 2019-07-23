/****************************************************************************
** Meta object code from reading C++ file 'QGCParamSlider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCParamSlider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCParamSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCParamSlider_t {
    QByteArrayData data[31];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCParamSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCParamSlider_t qt_meta_stringdata_QGCParamSlider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCParamSlider"
QT_MOC_LITERAL(1, 15, 13), // "startEditMode"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "endEditMode"
QT_MOC_LITERAL(4, 42, 13), // "sendParameter"
QT_MOC_LITERAL(5, 56, 14), // "setSliderValue"
QT_MOC_LITERAL(6, 71, 11), // "sliderValue"
QT_MOC_LITERAL(7, 83, 17), // "setParameterValue"
QT_MOC_LITERAL(8, 101, 3), // "uas"
QT_MOC_LITERAL(9, 105, 9), // "component"
QT_MOC_LITERAL(10, 115, 10), // "paramCount"
QT_MOC_LITERAL(11, 126, 10), // "paramIndex"
QT_MOC_LITERAL(12, 137, 13), // "parameterName"
QT_MOC_LITERAL(13, 151, 5), // "value"
QT_MOC_LITERAL(14, 157, 13), // "writeSettings"
QT_MOC_LITERAL(15, 171, 10), // "QSettings&"
QT_MOC_LITERAL(16, 182, 8), // "settings"
QT_MOC_LITERAL(17, 191, 12), // "readSettings"
QT_MOC_LITERAL(18, 204, 9), // "QSettings"
QT_MOC_LITERAL(19, 214, 3), // "pre"
QT_MOC_LITERAL(20, 218, 16), // "refreshParamList"
QT_MOC_LITERAL(21, 235, 12), // "setActiveUAS"
QT_MOC_LITERAL(22, 248, 13), // "UASInterface*"
QT_MOC_LITERAL(23, 262, 15), // "selectComponent"
QT_MOC_LITERAL(24, 278, 14), // "componentIndex"
QT_MOC_LITERAL(25, 293, 15), // "selectParameter"
QT_MOC_LITERAL(26, 309, 13), // "setParamValue"
QT_MOC_LITERAL(27, 323, 8), // "showInfo"
QT_MOC_LITERAL(28, 332, 6), // "enable"
QT_MOC_LITERAL(29, 339, 11), // "showTooltip"
QT_MOC_LITERAL(30, 351, 16) // "requestParameter"

    },
    "QGCParamSlider\0startEditMode\0\0endEditMode\0"
    "sendParameter\0setSliderValue\0sliderValue\0"
    "setParameterValue\0uas\0component\0"
    "paramCount\0paramIndex\0parameterName\0"
    "value\0writeSettings\0QSettings&\0settings\0"
    "readSettings\0QSettings\0pre\0refreshParamList\0"
    "setActiveUAS\0UASInterface*\0selectComponent\0"
    "componentIndex\0selectParameter\0"
    "setParamValue\0showInfo\0enable\0showTooltip\0"
    "requestParameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCParamSlider[] = {

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
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    1,  102,    2, 0x0a /* Public */,
       7,    6,  105,    2, 0x0a /* Public */,
      14,    1,  118,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,
      17,    2,  124,    2, 0x0a /* Public */,
      20,    0,  129,    2, 0x0a /* Public */,
      21,    1,  130,    2, 0x0a /* Public */,
      23,    1,  133,    2, 0x0a /* Public */,
      25,    1,  136,    2, 0x0a /* Public */,
      26,    1,  139,    2, 0x0a /* Public */,
      26,    1,  142,    2, 0x0a /* Public */,
      27,    1,  145,    2, 0x0a /* Public */,
      29,    0,  148,    2, 0x0a /* Public */,
      30,    0,  149,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   19,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    8,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCParamSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCParamSlider *_t = static_cast<QGCParamSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startEditMode(); break;
        case 1: _t->endEditMode(); break;
        case 2: _t->sendParameter(); break;
        case 3: _t->setSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setParameterValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6]))); break;
        case 5: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 6: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 7: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 8: _t->refreshParamList(); break;
        case 9: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 10: _t->selectComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->selectParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setParamValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setParamValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->showInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->showTooltip(); break;
        case 16: _t->requestParameter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGCParamSlider::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCParamSlider.data,
      qt_meta_data_QGCParamSlider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCParamSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCParamSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCParamSlider.stringdata0))
        return static_cast<void*>(this);
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCParamSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
