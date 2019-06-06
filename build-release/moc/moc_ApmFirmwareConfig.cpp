/****************************************************************************
** Meta object code from reading C++ file 'ApmFirmwareConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ApmFirmwareConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmFirmwareConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApmFirmwareConfig_t {
    QByteArrayData data[62];
    char stringdata0[944];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApmFirmwareConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApmFirmwareConfig_t qt_meta_stringdata_ApmFirmwareConfig = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApmFirmwareConfig"
QT_MOC_LITERAL(1, 18, 18), // "showBlankingScreen"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "checkForUpdates"
QT_MOC_LITERAL(4, 54, 13), // "versionString"
QT_MOC_LITERAL(5, 68, 19), // "advancedModeChanged"
QT_MOC_LITERAL(6, 88, 5), // "state"
QT_MOC_LITERAL(7, 94, 20), // "firmwareListFinished"
QT_MOC_LITERAL(8, 115, 17), // "firmwareListError"
QT_MOC_LITERAL(9, 133, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 161, 5), // "error"
QT_MOC_LITERAL(11, 167, 18), // "flashButtonClicked"
QT_MOC_LITERAL(12, 186, 25), // "betaFirmwareButtonClicked"
QT_MOC_LITERAL(13, 212, 27), // "stableFirmwareButtonClicked"
QT_MOC_LITERAL(14, 240, 16), // "downloadFinished"
QT_MOC_LITERAL(15, 257, 26), // "trunkFirmwareButtonClicked"
QT_MOC_LITERAL(16, 284, 24), // "firmwareDownloadProgress"
QT_MOC_LITERAL(17, 309, 8), // "received"
QT_MOC_LITERAL(18, 318, 5), // "total"
QT_MOC_LITERAL(19, 324, 16), // "requestFirmwares"
QT_MOC_LITERAL(20, 341, 4), // "type"
QT_MOC_LITERAL(21, 346, 9), // "autopilot"
QT_MOC_LITERAL(22, 356, 12), // "notification"
QT_MOC_LITERAL(23, 369, 7), // "setLink"
QT_MOC_LITERAL(24, 377, 5), // "index"
QT_MOC_LITERAL(25, 383, 12), // "activeUASSet"
QT_MOC_LITERAL(26, 396, 13), // "UASInterface*"
QT_MOC_LITERAL(27, 410, 3), // "uas"
QT_MOC_LITERAL(28, 414, 12), // "uasConnected"
QT_MOC_LITERAL(29, 427, 15), // "uasDisconnected"
QT_MOC_LITERAL(30, 443, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(31, 463, 19), // "populateSerialPorts"
QT_MOC_LITERAL(32, 483, 19), // "requestDeviceReplug"
QT_MOC_LITERAL(33, 503, 18), // "devicePlugDetected"
QT_MOC_LITERAL(34, 522, 8), // "px4Error"
QT_MOC_LITERAL(35, 531, 10), // "px4Warning"
QT_MOC_LITERAL(36, 542, 7), // "message"
QT_MOC_LITERAL(37, 550, 11), // "px4Finished"
QT_MOC_LITERAL(38, 562, 10), // "px4Cleanup"
QT_MOC_LITERAL(39, 573, 15), // "px4StatusUpdate"
QT_MOC_LITERAL(40, 589, 6), // "update"
QT_MOC_LITERAL(41, 596, 14), // "px4DebugUpdate"
QT_MOC_LITERAL(42, 611, 18), // "px4UnplugTimerTick"
QT_MOC_LITERAL(43, 630, 12), // "arduinoError"
QT_MOC_LITERAL(44, 643, 20), // "arduinoUploadStarted"
QT_MOC_LITERAL(45, 664, 20), // "arduinoFlashProgress"
QT_MOC_LITERAL(46, 685, 3), // "pos"
QT_MOC_LITERAL(47, 689, 21), // "arduinoVerifyProgress"
QT_MOC_LITERAL(48, 711, 19), // "arduinoStatusUpdate"
QT_MOC_LITERAL(49, 731, 18), // "arduinoDebugUpdate"
QT_MOC_LITERAL(50, 750, 21), // "arduinoVerifyComplete"
QT_MOC_LITERAL(51, 772, 19), // "arduinoVerifyFailed"
QT_MOC_LITERAL(52, 792, 20), // "arduinoFlashComplete"
QT_MOC_LITERAL(53, 813, 18), // "arduinoFlashFailed"
QT_MOC_LITERAL(54, 832, 21), // "arduinoUploadComplete"
QT_MOC_LITERAL(55, 854, 19), // "flashCustomFirmware"
QT_MOC_LITERAL(56, 874, 13), // "flashFirmware"
QT_MOC_LITERAL(57, 888, 8), // "filename"
QT_MOC_LITERAL(58, 897, 16), // "parameterChanged"
QT_MOC_LITERAL(59, 914, 9), // "component"
QT_MOC_LITERAL(60, 924, 13), // "parameterName"
QT_MOC_LITERAL(61, 938, 5) // "value"

    },
    "ApmFirmwareConfig\0showBlankingScreen\0"
    "\0checkForUpdates\0versionString\0"
    "advancedModeChanged\0state\0"
    "firmwareListFinished\0firmwareListError\0"
    "QNetworkReply::NetworkError\0error\0"
    "flashButtonClicked\0betaFirmwareButtonClicked\0"
    "stableFirmwareButtonClicked\0"
    "downloadFinished\0trunkFirmwareButtonClicked\0"
    "firmwareDownloadProgress\0received\0"
    "total\0requestFirmwares\0type\0autopilot\0"
    "notification\0setLink\0index\0activeUASSet\0"
    "UASInterface*\0uas\0uasConnected\0"
    "uasDisconnected\0cancelButtonClicked\0"
    "populateSerialPorts\0requestDeviceReplug\0"
    "devicePlugDetected\0px4Error\0px4Warning\0"
    "message\0px4Finished\0px4Cleanup\0"
    "px4StatusUpdate\0update\0px4DebugUpdate\0"
    "px4UnplugTimerTick\0arduinoError\0"
    "arduinoUploadStarted\0arduinoFlashProgress\0"
    "pos\0arduinoVerifyProgress\0arduinoStatusUpdate\0"
    "arduinoDebugUpdate\0arduinoVerifyComplete\0"
    "arduinoVerifyFailed\0arduinoFlashComplete\0"
    "arduinoFlashFailed\0arduinoUploadComplete\0"
    "flashCustomFirmware\0flashFirmware\0"
    "filename\0parameterChanged\0component\0"
    "parameterName\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApmFirmwareConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  220,    2, 0x0a /* Public */,
       5,    1,  223,    2, 0x0a /* Public */,
       7,    0,  226,    2, 0x08 /* Private */,
       8,    1,  227,    2, 0x08 /* Private */,
      11,    0,  230,    2, 0x08 /* Private */,
      12,    0,  231,    2, 0x08 /* Private */,
      13,    0,  232,    2, 0x08 /* Private */,
      14,    0,  233,    2, 0x08 /* Private */,
      15,    0,  234,    2, 0x08 /* Private */,
      16,    2,  235,    2, 0x08 /* Private */,
      19,    3,  240,    2, 0x08 /* Private */,
      23,    1,  247,    2, 0x08 /* Private */,
      25,    1,  250,    2, 0x08 /* Private */,
      28,    0,  253,    2, 0x08 /* Private */,
      29,    0,  254,    2, 0x08 /* Private */,
      30,    0,  255,    2, 0x08 /* Private */,
      31,    0,  256,    2, 0x08 /* Private */,
      32,    0,  257,    2, 0x08 /* Private */,
      33,    0,  258,    2, 0x08 /* Private */,
      34,    1,  259,    2, 0x08 /* Private */,
      35,    1,  262,    2, 0x08 /* Private */,
      37,    0,  265,    2, 0x08 /* Private */,
      38,    0,  266,    2, 0x08 /* Private */,
      39,    1,  267,    2, 0x08 /* Private */,
      41,    1,  270,    2, 0x08 /* Private */,
      42,    0,  273,    2, 0x08 /* Private */,
      43,    1,  274,    2, 0x08 /* Private */,
      44,    0,  277,    2, 0x08 /* Private */,
      45,    2,  278,    2, 0x08 /* Private */,
      47,    2,  283,    2, 0x08 /* Private */,
      48,    1,  288,    2, 0x08 /* Private */,
      49,    1,  291,    2, 0x08 /* Private */,
      50,    0,  294,    2, 0x08 /* Private */,
      51,    0,  295,    2, 0x08 /* Private */,
      52,    0,  296,    2, 0x08 /* Private */,
      53,    0,  297,    2, 0x08 /* Private */,
      54,    0,  298,    2, 0x08 /* Private */,
      55,    0,  299,    2, 0x08 /* Private */,
      56,    1,  300,    2, 0x08 /* Private */,
      58,    4,  303,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   21,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   46,   18,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   46,   18,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,   27,   59,   60,   61,

       0        // eod
};

void ApmFirmwareConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApmFirmwareConfig *_t = static_cast<ApmFirmwareConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showBlankingScreen(); break;
        case 1: _t->checkForUpdates((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->advancedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->firmwareListFinished(); break;
        case 4: _t->firmwareListError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->flashButtonClicked(); break;
        case 6: _t->betaFirmwareButtonClicked(); break;
        case 7: _t->stableFirmwareButtonClicked(); break;
        case 8: _t->downloadFinished(); break;
        case 9: _t->trunkFirmwareButtonClicked(); break;
        case 10: _t->firmwareDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->requestFirmwares((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setLink((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 14: _t->uasConnected(); break;
        case 15: _t->uasDisconnected(); break;
        case 16: _t->cancelButtonClicked(); break;
        case 17: _t->populateSerialPorts(); break;
        case 18: _t->requestDeviceReplug(); break;
        case 19: _t->devicePlugDetected(); break;
        case 20: _t->px4Error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->px4Warning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->px4Finished(); break;
        case 23: _t->px4Cleanup(); break;
        case 24: _t->px4StatusUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->px4DebugUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->px4UnplugTimerTick(); break;
        case 27: _t->arduinoError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->arduinoUploadStarted(); break;
        case 29: _t->arduinoFlashProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 30: _t->arduinoVerifyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 31: _t->arduinoStatusUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->arduinoDebugUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->arduinoVerifyComplete(); break;
        case 34: _t->arduinoVerifyFailed(); break;
        case 35: _t->arduinoFlashComplete(); break;
        case 36: _t->arduinoFlashFailed(); break;
        case 37: _t->arduinoUploadComplete(); break;
        case 38: _t->flashCustomFirmware(); break;
        case 39: _t->flashFirmware((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ApmFirmwareConfig::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApmFirmwareConfig::showBlankingScreen)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ApmFirmwareConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ApmFirmwareConfig.data,
      qt_meta_data_ApmFirmwareConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApmFirmwareConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApmFirmwareConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApmFirmwareConfig.stringdata0))
        return static_cast<void*>(this);
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ApmFirmwareConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void ApmFirmwareConfig::showBlankingScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
