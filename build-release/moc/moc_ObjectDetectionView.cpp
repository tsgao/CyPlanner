/****************************************************************************
** Meta object code from reading C++ file 'ObjectDetectionView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/ObjectDetectionView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectDetectionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectDetectionView_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectDetectionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectDetectionView_t qt_meta_stringdata_ObjectDetectionView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ObjectDetectionView"
QT_MOC_LITERAL(1, 20, 6), // "setUAS"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 42, 3), // "uas"
QT_MOC_LITERAL(5, 46, 10), // "newPattern"
QT_MOC_LITERAL(6, 57, 5), // "uasId"
QT_MOC_LITERAL(7, 63, 11), // "patternPath"
QT_MOC_LITERAL(8, 75, 10), // "confidence"
QT_MOC_LITERAL(9, 86, 8), // "detected"
QT_MOC_LITERAL(10, 95, 9), // "newLetter"
QT_MOC_LITERAL(11, 105, 6), // "letter"
QT_MOC_LITERAL(12, 112, 18), // "decreaseLetterTime"
QT_MOC_LITERAL(13, 131, 16), // "updateLetterList"
QT_MOC_LITERAL(14, 148, 10), // "clearLists"
QT_MOC_LITERAL(15, 159, 10) // "takeAction"

    },
    "ObjectDetectionView\0setUAS\0\0UASInterface*\0"
    "uas\0newPattern\0uasId\0patternPath\0"
    "confidence\0detected\0newLetter\0letter\0"
    "decreaseLetterTime\0updateLetterList\0"
    "clearLists\0takeAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectDetectionView[] = {

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
       5,    4,   52,    2, 0x0a /* Public */,
      10,    4,   61,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Bool,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Bool,    6,   11,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObjectDetectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ObjectDetectionView *_t = static_cast<ObjectDetectionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->newPattern((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->newLetter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->decreaseLetterTime(); break;
        case 4: _t->updateLetterList(); break;
        case 5: _t->clearLists(); break;
        case 6: _t->takeAction(); break;
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
        }
    }
}

const QMetaObject ObjectDetectionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ObjectDetectionView.data,
      qt_meta_data_ObjectDetectionView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ObjectDetectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectDetectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectDetectionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ObjectDetectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
