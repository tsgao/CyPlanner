/****************************************************************************
** Meta object code from reading C++ file 'AutoUpdateCheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/AutoUpdateCheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoUpdateCheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoUpdateCheck_t {
    QByteArrayData data[20];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoUpdateCheck_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoUpdateCheck_t qt_meta_stringdata_AutoUpdateCheck = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AutoUpdateCheck"
QT_MOC_LITERAL(1, 16, 15), // "updateAvailable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "version"
QT_MOC_LITERAL(4, 41, 11), // "releaseType"
QT_MOC_LITERAL(5, 53, 3), // "url"
QT_MOC_LITERAL(6, 57, 4), // "name"
QT_MOC_LITERAL(7, 62, 17), // "noUpdateAvailable"
QT_MOC_LITERAL(8, 80, 21), // "forcedAutoUpdateCheck"
QT_MOC_LITERAL(9, 102, 15), // "autoUpdateCheck"
QT_MOC_LITERAL(10, 118, 14), // "cancelDownload"
QT_MOC_LITERAL(11, 133, 12), // "httpFinished"
QT_MOC_LITERAL(12, 146, 13), // "httpReadyRead"
QT_MOC_LITERAL(13, 160, 22), // "updateDataReadProgress"
QT_MOC_LITERAL(14, 183, 9), // "bytesRead"
QT_MOC_LITERAL(15, 193, 10), // "totalBytes"
QT_MOC_LITERAL(16, 204, 14), // "setSkipVersion"
QT_MOC_LITERAL(17, 219, 20), // "setAutoUpdateEnabled"
QT_MOC_LITERAL(18, 240, 7), // "enabled"
QT_MOC_LITERAL(19, 248, 15) // "isUpdateEnabled"

    },
    "AutoUpdateCheck\0updateAvailable\0\0"
    "version\0releaseType\0url\0name\0"
    "noUpdateAvailable\0forcedAutoUpdateCheck\0"
    "autoUpdateCheck\0cancelDownload\0"
    "httpFinished\0httpReadyRead\0"
    "updateDataReadProgress\0bytesRead\0"
    "totalBytes\0setSkipVersion\0"
    "setAutoUpdateEnabled\0enabled\0"
    "isUpdateEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoUpdateCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   74,    2, 0x06 /* Public */,
       7,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   84,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    2,   92,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,
      17,    1,  100,    2, 0x0a /* Public */,
      19,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   14,   15,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Bool,

       0        // eod
};

void AutoUpdateCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoUpdateCheck *_t = static_cast<AutoUpdateCheck *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAvailable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->noUpdateAvailable(); break;
        case 2: _t->forcedAutoUpdateCheck(); break;
        case 3: _t->autoUpdateCheck(); break;
        case 4: _t->autoUpdateCheck((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->cancelDownload(); break;
        case 6: _t->httpFinished(); break;
        case 7: _t->httpReadyRead(); break;
        case 8: _t->updateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->setSkipVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setAutoUpdateEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->isUpdateEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AutoUpdateCheck::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdateCheck::updateAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutoUpdateCheck::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdateCheck::noUpdateAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AutoUpdateCheck::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoUpdateCheck.data,
      qt_meta_data_AutoUpdateCheck,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoUpdateCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoUpdateCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoUpdateCheck.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoUpdateCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AutoUpdateCheck::updateAvailable(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoUpdateCheck::noUpdateAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE