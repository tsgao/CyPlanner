/****************************************************************************
** Meta object code from reading C++ file 'DownloadRemoteParamsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/DownloadRemoteParamsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DownloadRemoteParamsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DownloadRemoteParamsDialog_t {
    QByteArrayData data[15];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadRemoteParamsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadRemoteParamsDialog_t qt_meta_stringdata_DownloadRemoteParamsDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DownloadRemoteParamsDialog"
QT_MOC_LITERAL(1, 27, 16), // "refreshParamList"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "downloadButtonClicked"
QT_MOC_LITERAL(4, 67, 21), // "loadFileButtonClicked"
QT_MOC_LITERAL(5, 89, 22), // "loadFileDialogAccepted"
QT_MOC_LITERAL(6, 112, 18), // "closeButtonClicked"
QT_MOC_LITERAL(7, 131, 21), // "httpParamListFinished"
QT_MOC_LITERAL(8, 153, 17), // "downloadParamFile"
QT_MOC_LITERAL(9, 171, 14), // "cancelDownload"
QT_MOC_LITERAL(10, 186, 12), // "httpFinished"
QT_MOC_LITERAL(11, 199, 13), // "httpReadyRead"
QT_MOC_LITERAL(12, 213, 22), // "updateDataReadProgress"
QT_MOC_LITERAL(13, 236, 9), // "bytesRead"
QT_MOC_LITERAL(14, 246, 10) // "totalBytes"

    },
    "DownloadRemoteParamsDialog\0refreshParamList\0"
    "\0downloadButtonClicked\0loadFileButtonClicked\0"
    "loadFileDialogAccepted\0closeButtonClicked\0"
    "httpParamListFinished\0downloadParamFile\0"
    "cancelDownload\0httpFinished\0httpReadyRead\0"
    "updateDataReadProgress\0bytesRead\0"
    "totalBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadRemoteParamsDialog[] = {

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
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    2,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   13,   14,

       0        // eod
};

void DownloadRemoteParamsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadRemoteParamsDialog *_t = static_cast<DownloadRemoteParamsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshParamList(); break;
        case 1: _t->downloadButtonClicked(); break;
        case 2: _t->loadFileButtonClicked(); break;
        case 3: _t->loadFileDialogAccepted(); break;
        case 4: _t->closeButtonClicked(); break;
        case 5: _t->httpParamListFinished(); break;
        case 6: { bool _r = _t->downloadParamFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->cancelDownload(); break;
        case 8: _t->httpFinished(); break;
        case 9: _t->httpReadyRead(); break;
        case 10: _t->updateDataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DownloadRemoteParamsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DownloadRemoteParamsDialog.data,
      qt_meta_data_DownloadRemoteParamsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DownloadRemoteParamsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadRemoteParamsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadRemoteParamsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DownloadRemoteParamsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
