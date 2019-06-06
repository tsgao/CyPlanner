/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkManager_t {
    QByteArrayData data[25];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManager_t qt_meta_stringdata_LinkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LinkManager"
QT_MOC_LITERAL(1, 12, 7), // "newLink"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "linkid"
QT_MOC_LITERAL(4, 28, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(5, 50, 5), // "title"
QT_MOC_LITERAL(6, 56, 4), // "text"
QT_MOC_LITERAL(7, 61, 11), // "linkChanged"
QT_MOC_LITERAL(8, 73, 14), // "LinkInterface*"
QT_MOC_LITERAL(9, 88, 4), // "link"
QT_MOC_LITERAL(10, 93, 9), // "linkError"
QT_MOC_LITERAL(11, 103, 7), // "message"
QT_MOC_LITERAL(12, 111, 15), // "messageReceived"
QT_MOC_LITERAL(13, 127, 17), // "mavlink_message_t"
QT_MOC_LITERAL(14, 145, 14), // "receiveMessage"
QT_MOC_LITERAL(15, 160, 24), // "protocolStatusMessageRec"
QT_MOC_LITERAL(16, 185, 13), // "enableLogging"
QT_MOC_LITERAL(17, 199, 7), // "enabled"
QT_MOC_LITERAL(18, 207, 14), // "reloadSettings"
QT_MOC_LITERAL(19, 222, 11), // "linkUpdated"
QT_MOC_LITERAL(20, 234, 13), // "linkConnected"
QT_MOC_LITERAL(21, 248, 15), // "linkDisonnected"
QT_MOC_LITERAL(22, 264, 12), // "linkErrorRec"
QT_MOC_LITERAL(23, 277, 5), // "error"
QT_MOC_LITERAL(24, 283, 20) // "linkTimeoutTriggered"

    },
    "LinkManager\0newLink\0\0linkid\0"
    "protocolStatusMessage\0title\0text\0"
    "linkChanged\0LinkInterface*\0link\0"
    "linkError\0message\0messageReceived\0"
    "mavlink_message_t\0receiveMessage\0"
    "protocolStatusMessageRec\0enableLogging\0"
    "enabled\0reloadSettings\0linkUpdated\0"
    "linkConnected\0linkDisonnected\0"
    "linkErrorRec\0error\0linkTimeoutTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManager[] = {

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
       1,    1,   89,    2, 0x06 /* Public */,
       4,    2,   92,    2, 0x06 /* Public */,
       7,    1,   97,    2, 0x06 /* Public */,
       7,    1,  100,    2, 0x06 /* Public */,
      10,    2,  103,    2, 0x06 /* Public */,
      12,    2,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  113,    2, 0x0a /* Public */,
      15,    2,  118,    2, 0x0a /* Public */,
      16,    1,  123,    2, 0x0a /* Public */,
      18,    0,  126,    2, 0x0a /* Public */,
      19,    1,  127,    2, 0x0a /* Public */,
      20,    1,  130,    2, 0x08 /* Private */,
      21,    1,  133,    2, 0x08 /* Private */,
      22,    2,  136,    2, 0x08 /* Private */,
      24,    1,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   11,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 13,    9,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 13,    9,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   23,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkManager *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newLink((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->protocolStatusMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->linkChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->linkChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 4: _t->linkError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 6: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 7: _t->protocolStatusMessageRec((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->enableLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->reloadSettings(); break;
        case 10: _t->linkUpdated((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 11: _t->linkConnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 12: _t->linkDisonnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 13: _t->linkErrorRec((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->linkTimeoutTriggered((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LinkManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::newLink)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::protocolStatusMessage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkError)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::messageReceived)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject LinkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LinkManager.data,
      qt_meta_data_LinkManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LinkManager::newLink(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkManager::protocolStatusMessage(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkManager::linkChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkManager::linkChanged(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkManager::linkError(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkManager::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
