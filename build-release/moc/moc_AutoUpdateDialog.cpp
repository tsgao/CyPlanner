/****************************************************************************
** Meta object code from reading C++ file 'AutoUpdateDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/AutoUpdateDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoUpdateDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoUpdateDialog_t {
    QByteArrayData data[23];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoUpdateDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoUpdateDialog_t qt_meta_stringdata_AutoUpdateDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AutoUpdateDialog"
QT_MOC_LITERAL(1, 17, 19), // "autoUpdateCancelled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "version"
QT_MOC_LITERAL(4, 46, 10), // "yesClicked"
QT_MOC_LITERAL(5, 57, 9), // "noClicked"
QT_MOC_LITERAL(6, 67, 11), // "skipClicked"
QT_MOC_LITERAL(7, 79, 11), // "skipVersion"
QT_MOC_LITERAL(8, 91, 13), // "startDownload"
QT_MOC_LITERAL(9, 105, 3), // "url"
QT_MOC_LITERAL(10, 109, 8), // "filename"
QT_MOC_LITERAL(11, 118, 24), // "startFileDownloadRequest"
QT_MOC_LITERAL(12, 143, 14), // "cancelDownload"
QT_MOC_LITERAL(13, 158, 12), // "httpFinished"
QT_MOC_LITERAL(14, 171, 13), // "httpReadyRead"
QT_MOC_LITERAL(15, 185, 22), // "updateDataReadProgress"
QT_MOC_LITERAL(16, 208, 9), // "bytesRead"
QT_MOC_LITERAL(17, 218, 10), // "totalBytes"
QT_MOC_LITERAL(18, 229, 10), // "dmgMounted"
QT_MOC_LITERAL(19, 240, 6), // "result"
QT_MOC_LITERAL(20, 247, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(21, 268, 10), // "exitStatus"
QT_MOC_LITERAL(22, 279, 21) // "executeDownloadedFile"

    },
    "AutoUpdateDialog\0autoUpdateCancelled\0"
    "\0version\0yesClicked\0noClicked\0skipClicked\0"
    "skipVersion\0startDownload\0url\0filename\0"
    "startFileDownloadRequest\0cancelDownload\0"
    "httpFinished\0httpReadyRead\0"
    "updateDataReadProgress\0bytesRead\0"
    "totalBytes\0dmgMounted\0result\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "executeDownloadedFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoUpdateDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    0,   84,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x0a /* Public */,
       8,    2,   86,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    2,   97,    2, 0x0a /* Public */,
      18,    2,  102,    2, 0x0a /* Public */,
      22,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   16,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,   19,   21,
    QMetaType::Void,

       0        // eod
};

void AutoUpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoUpdateDialog *_t = static_cast<AutoUpdateDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoUpdateCancelled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->yesClicked(); break;
        case 2: _t->noClicked(); break;
        case 3: _t->skipClicked(); break;
        case 4: { bool _r = _t->skipVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->startDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->startFileDownloadRequest((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 7: _t->cancelDownload(); break;
        case 8: _t->httpFinished(); break;
        case 9: _t->httpReadyRead(); break;
        case 10: _t->updateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->dmgMounted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 12: _t->executeDownloadedFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AutoUpdateDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdateDialog::autoUpdateCancelled)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AutoUpdateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutoUpdateDialog.data,
      qt_meta_data_AutoUpdateDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoUpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoUpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoUpdateDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AutoUpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AutoUpdateDialog::autoUpdateCancelled(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
