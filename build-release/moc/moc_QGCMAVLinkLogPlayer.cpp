/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkLogPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkLogPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkLogPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMAVLinkLogPlayer_t {
    QByteArrayData data[21];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkLogPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkLogPlayer_t qt_meta_stringdata_QGCMAVLinkLogPlayer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMAVLinkLogPlayer"
QT_MOC_LITERAL(1, 20, 11), // "logFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "logLoaded"
QT_MOC_LITERAL(4, 43, 20), // "loadLogButtonClicked"
QT_MOC_LITERAL(5, 64, 17), // "playButtonClicked"
QT_MOC_LITERAL(6, 82, 17), // "logLinkTerminated"
QT_MOC_LITERAL(7, 100, 23), // "speedSliderValueChanged"
QT_MOC_LITERAL(8, 124, 5), // "value"
QT_MOC_LITERAL(9, 130, 14), // "speed75Clicked"
QT_MOC_LITERAL(10, 145, 15), // "speed100Clicked"
QT_MOC_LITERAL(11, 161, 15), // "speed150Clicked"
QT_MOC_LITERAL(12, 177, 15), // "speed200Clicked"
QT_MOC_LITERAL(13, 193, 15), // "speed500Clicked"
QT_MOC_LITERAL(14, 209, 16), // "speed1000Clicked"
QT_MOC_LITERAL(15, 226, 11), // "logProgress"
QT_MOC_LITERAL(16, 238, 3), // "pos"
QT_MOC_LITERAL(17, 242, 5), // "total"
QT_MOC_LITERAL(18, 248, 22), // "positionSliderReleased"
QT_MOC_LITERAL(19, 271, 21), // "positionSliderPressed"
QT_MOC_LITERAL(20, 293, 21) // "loadLogDialogAccepted"

    },
    "QGCMAVLinkLogPlayer\0logFinished\0\0"
    "logLoaded\0loadLogButtonClicked\0"
    "playButtonClicked\0logLinkTerminated\0"
    "speedSliderValueChanged\0value\0"
    "speed75Clicked\0speed100Clicked\0"
    "speed150Clicked\0speed200Clicked\0"
    "speed500Clicked\0speed1000Clicked\0"
    "logProgress\0pos\0total\0positionSliderReleased\0"
    "positionSliderPressed\0loadLogDialogAccepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkLogPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    1,   99,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    2,  108,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,
      19,    0,  114,    2, 0x08 /* Private */,
      20,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCMAVLinkLogPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMAVLinkLogPlayer *_t = static_cast<QGCMAVLinkLogPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logFinished(); break;
        case 1: _t->logLoaded(); break;
        case 2: _t->loadLogButtonClicked(); break;
        case 3: _t->playButtonClicked(); break;
        case 4: _t->logLinkTerminated(); break;
        case 5: _t->speedSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->speed75Clicked(); break;
        case 7: _t->speed100Clicked(); break;
        case 8: _t->speed150Clicked(); break;
        case 9: _t->speed200Clicked(); break;
        case 10: _t->speed500Clicked(); break;
        case 11: _t->speed1000Clicked(); break;
        case 12: _t->logProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->positionSliderReleased(); break;
        case 14: _t->positionSliderPressed(); break;
        case 15: _t->loadLogDialogAccepted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMAVLinkLogPlayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkLogPlayer::logFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMAVLinkLogPlayer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMAVLinkLogPlayer::logLoaded)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCMAVLinkLogPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkLogPlayer.data,
      qt_meta_data_QGCMAVLinkLogPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMAVLinkLogPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkLogPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkLogPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkLogPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkLogPlayer::logFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkLogPlayer::logLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
