/****************************************************************************
** Meta object code from reading C++ file 'PresetManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/Loghandling/PresetManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PresetManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PresetManager_t {
    QByteArrayData data[12];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PresetManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PresetManager_t qt_meta_stringdata_PresetManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PresetManager"
QT_MOC_LITERAL(1, 14, 17), // "newPresetSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 31), // "PresetManager::presetElementVec"
QT_MOC_LITERAL(4, 65, 11), // "loadPresets"
QT_MOC_LITERAL(5, 77, 18), // "loadDialogAccepted"
QT_MOC_LITERAL(6, 96, 20), // "handlePresetSelected"
QT_MOC_LITERAL(7, 117, 16), // "removeAllPresets"
QT_MOC_LITERAL(8, 134, 26), // "savePresetCheckingFilename"
QT_MOC_LITERAL(9, 161, 11), // "savePresets"
QT_MOC_LITERAL(10, 173, 13), // "savePresetsAs"
QT_MOC_LITERAL(11, 187, 13) // "removePresets"

    },
    "PresetManager\0newPresetSelected\0\0"
    "PresetManager::presetElementVec\0"
    "loadPresets\0loadDialogAccepted\0"
    "handlePresetSelected\0removeAllPresets\0"
    "savePresetCheckingFilename\0savePresets\0"
    "savePresetsAs\0removePresets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PresetManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
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

void PresetManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PresetManager *_t = static_cast<PresetManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPresetSelected((*reinterpret_cast< PresetManager::presetElementVec(*)>(_a[1]))); break;
        case 1: _t->loadPresets(); break;
        case 2: _t->loadDialogAccepted(); break;
        case 3: _t->handlePresetSelected(); break;
        case 4: _t->removeAllPresets(); break;
        case 5: _t->savePresetCheckingFilename(); break;
        case 6: _t->savePresets(); break;
        case 7: _t->savePresetsAs(); break;
        case 8: _t->removePresets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PresetManager::*_t)(PresetManager::presetElementVec );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PresetManager::newPresetSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PresetManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PresetManager.data,
      qt_meta_data_PresetManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PresetManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PresetManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PresetManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PresetManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PresetManager::newPresetSelected(PresetManager::presetElementVec _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
