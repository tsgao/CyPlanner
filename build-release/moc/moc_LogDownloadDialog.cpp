/****************************************************************************
** Meta object code from reading C++ file 'LogDownloadDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/LogDownloadDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogDownloadDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogDownloadDialog_t {
    QByteArrayData data[28];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDownloadDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDownloadDialog_t qt_meta_stringdata_LogDownloadDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LogDownloadDialog"
QT_MOC_LITERAL(1, 18, 12), // "setActiveUAS"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 46, 3), // "uas"
QT_MOC_LITERAL(5, 50, 11), // "refreshList"
QT_MOC_LITERAL(6, 62, 15), // "getSelectedLogs"
QT_MOC_LITERAL(7, 78, 8), // "logEntry"
QT_MOC_LITERAL(8, 87, 5), // "uasId"
QT_MOC_LITERAL(9, 93, 8), // "uint32_t"
QT_MOC_LITERAL(10, 102, 8), // "time_utc"
QT_MOC_LITERAL(11, 111, 4), // "size"
QT_MOC_LITERAL(12, 116, 8), // "uint16_t"
QT_MOC_LITERAL(13, 125, 2), // "id"
QT_MOC_LITERAL(14, 128, 8), // "num_logs"
QT_MOC_LITERAL(15, 137, 12), // "last_log_num"
QT_MOC_LITERAL(16, 150, 7), // "logData"
QT_MOC_LITERAL(17, 158, 3), // "ofs"
QT_MOC_LITERAL(18, 162, 7), // "uint8_t"
QT_MOC_LITERAL(19, 170, 5), // "count"
QT_MOC_LITERAL(20, 176, 11), // "const char*"
QT_MOC_LITERAL(21, 188, 4), // "data"
QT_MOC_LITERAL(22, 193, 8), // "checkAll"
QT_MOC_LITERAL(23, 202, 24), // "processDownloadedLogData"
QT_MOC_LITERAL(24, 227, 17), // "doneButtonClicked"
QT_MOC_LITERAL(25, 245, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(26, 265, 26), // "triggerNextDownloadRequest"
QT_MOC_LITERAL(27, 292, 12) // "eraseAllLogs"

    },
    "LogDownloadDialog\0setActiveUAS\0\0"
    "UASInterface*\0uas\0refreshList\0"
    "getSelectedLogs\0logEntry\0uasId\0uint32_t\0"
    "time_utc\0size\0uint16_t\0id\0num_logs\0"
    "last_log_num\0logData\0ofs\0uint8_t\0count\0"
    "const char*\0data\0checkAll\0"
    "processDownloadedLogData\0doneButtonClicked\0"
    "cancelButtonClicked\0triggerNextDownloadRequest\0"
    "eraseAllLogs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDownloadDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    6,   74,    2, 0x0a /* Public */,
      16,    5,   87,    2, 0x0a /* Public */,
      22,    0,   98,    2, 0x08 /* Private */,
      23,    0,   99,    2, 0x08 /* Private */,
      24,    0,  100,    2, 0x08 /* Private */,
      25,    0,  101,    2, 0x08 /* Private */,
      26,    0,  102,    2, 0x08 /* Private */,
      27,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,    8,   10,   11,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12, 0x80000000 | 18, 0x80000000 | 20,    8,   17,   13,   19,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogDownloadDialog *_t = static_cast<LogDownloadDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->refreshList(); break;
        case 2: _t->getSelectedLogs(); break;
        case 3: _t->logEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint16_t(*)>(_a[5])),(*reinterpret_cast< uint16_t(*)>(_a[6]))); break;
        case 4: _t->logData((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< const char*(*)>(_a[5]))); break;
        case 5: _t->checkAll(); break;
        case 6: _t->processDownloadedLogData(); break;
        case 7: _t->doneButtonClicked(); break;
        case 8: _t->cancelButtonClicked(); break;
        case 9: _t->triggerNextDownloadRequest(); break;
        case 10: _t->eraseAllLogs(); break;
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

const QMetaObject LogDownloadDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogDownloadDialog.data,
      qt_meta_data_LogDownloadDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDownloadDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LogDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
