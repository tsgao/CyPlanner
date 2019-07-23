/****************************************************************************
** Meta object code from reading C++ file 'AP2DataPlotAxisDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/AP2DataPlotAxisDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AP2DataPlotAxisDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AP2DataPlotAxisDialog_t {
    QByteArrayData data[29];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AP2DataPlotAxisDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AP2DataPlotAxisDialog_t qt_meta_stringdata_AP2DataPlotAxisDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AP2DataPlotAxisDialog"
QT_MOC_LITERAL(1, 22, 17), // "graphAddedToGroup"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "name"
QT_MOC_LITERAL(4, 46, 5), // "group"
QT_MOC_LITERAL(5, 52, 5), // "scale"
QT_MOC_LITERAL(6, 58, 21), // "graphRemovedFromGroup"
QT_MOC_LITERAL(7, 80, 16), // "graphManualRange"
QT_MOC_LITERAL(8, 97, 3), // "min"
QT_MOC_LITERAL(9, 101, 3), // "max"
QT_MOC_LITERAL(10, 105, 14), // "graphAutoRange"
QT_MOC_LITERAL(11, 120, 20), // "graphGroupingChanged"
QT_MOC_LITERAL(12, 141, 40), // "QList<AP2DataPlotAxisDialog::..."
QT_MOC_LITERAL(13, 182, 14), // "graphRangeList"
QT_MOC_LITERAL(14, 197, 18), // "graphColorsChanged"
QT_MOC_LITERAL(15, 216, 20), // "QMap<QString,QColor>"
QT_MOC_LITERAL(16, 237, 9), // "colorlist"
QT_MOC_LITERAL(17, 247, 22), // "setMinMaxButtonClicked"
QT_MOC_LITERAL(18, 270, 18), // "applyButtonClicked"
QT_MOC_LITERAL(19, 289, 18), // "clearButtonClicked"
QT_MOC_LITERAL(20, 308, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(21, 328, 17), // "groupComboChanged"
QT_MOC_LITERAL(22, 346, 17), // "cellDoubleClicked"
QT_MOC_LITERAL(23, 364, 3), // "row"
QT_MOC_LITERAL(24, 368, 3), // "col"
QT_MOC_LITERAL(25, 372, 11), // "cellChanged"
QT_MOC_LITERAL(26, 384, 19), // "colorDialogAccepted"
QT_MOC_LITERAL(27, 404, 19), // "autoCheckboxChecked"
QT_MOC_LITERAL(28, 424, 7) // "checked"

    },
    "AP2DataPlotAxisDialog\0graphAddedToGroup\0"
    "\0name\0group\0scale\0graphRemovedFromGroup\0"
    "graphManualRange\0min\0max\0graphAutoRange\0"
    "graphGroupingChanged\0"
    "QList<AP2DataPlotAxisDialog::GraphRange>\0"
    "graphRangeList\0graphColorsChanged\0"
    "QMap<QString,QColor>\0colorlist\0"
    "setMinMaxButtonClicked\0applyButtonClicked\0"
    "clearButtonClicked\0cancelButtonClicked\0"
    "groupComboChanged\0cellDoubleClicked\0"
    "row\0col\0cellChanged\0colorDialogAccepted\0"
    "autoCheckboxChecked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AP2DataPlotAxisDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    3,   99,    2, 0x06 /* Public */,
      10,    1,  106,    2, 0x06 /* Public */,
      11,    1,  109,    2, 0x06 /* Public */,
      14,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  115,    2, 0x0a /* Public */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    1,  119,    2, 0x08 /* Private */,
      22,    2,  122,    2, 0x08 /* Private */,
      25,    2,  127,    2, 0x08 /* Private */,
      26,    0,  132,    2, 0x08 /* Private */,
      27,    1,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double,    3,    8,    9,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,

       0        // eod
};

void AP2DataPlotAxisDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AP2DataPlotAxisDialog *_t = static_cast<AP2DataPlotAxisDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->graphAddedToGroup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->graphRemovedFromGroup((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->graphManualRange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->graphAutoRange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->graphGroupingChanged((*reinterpret_cast< QList<AP2DataPlotAxisDialog::GraphRange>(*)>(_a[1]))); break;
        case 5: _t->graphColorsChanged((*reinterpret_cast< QMap<QString,QColor>(*)>(_a[1]))); break;
        case 6: _t->setMinMaxButtonClicked(); break;
        case 7: _t->applyButtonClicked(); break;
        case 8: _t->clearButtonClicked(); break;
        case 9: _t->cancelButtonClicked(); break;
        case 10: _t->groupComboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->colorDialogAccepted(); break;
        case 14: _t->autoCheckboxChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QString , QString , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphAddedToGroup)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphRemovedFromGroup)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QString , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphManualRange)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphAutoRange)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QList<AP2DataPlotAxisDialog::GraphRange> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphGroupingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AP2DataPlotAxisDialog::*_t)(QMap<QString,QColor> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AP2DataPlotAxisDialog::graphColorsChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject AP2DataPlotAxisDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AP2DataPlotAxisDialog.data,
      qt_meta_data_AP2DataPlotAxisDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AP2DataPlotAxisDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AP2DataPlotAxisDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AP2DataPlotAxisDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AP2DataPlotAxisDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AP2DataPlotAxisDialog::graphAddedToGroup(QString _t1, QString _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AP2DataPlotAxisDialog::graphRemovedFromGroup(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AP2DataPlotAxisDialog::graphManualRange(QString _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AP2DataPlotAxisDialog::graphAutoRange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AP2DataPlotAxisDialog::graphGroupingChanged(QList<AP2DataPlotAxisDialog::GraphRange> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AP2DataPlotAxisDialog::graphColorsChanged(QMap<QString,QColor> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
