/****************************************************************************
** Meta object code from reading C++ file 'QGCMapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map/QGCMapWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapWidget_t {
    QByteArrayData data[46];
    char stringdata0[632];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapWidget_t qt_meta_stringdata_QGCMapWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCMapWidget"
QT_MOC_LITERAL(1, 13, 19), // "homePositionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "latitude"
QT_MOC_LITERAL(4, 43, 9), // "longitude"
QT_MOC_LITERAL(5, 53, 8), // "altitude"
QT_MOC_LITERAL(6, 62, 15), // "waypointCreated"
QT_MOC_LITERAL(7, 78, 9), // "Waypoint*"
QT_MOC_LITERAL(8, 88, 2), // "wp"
QT_MOC_LITERAL(9, 91, 15), // "waypointChanged"
QT_MOC_LITERAL(10, 107, 21), // "cameraActionTriggered"
QT_MOC_LITERAL(11, 129, 21), // "guidedActionTriggered"
QT_MOC_LITERAL(12, 151, 24), // "guidedAltActionTriggered"
QT_MOC_LITERAL(13, 176, 6), // "addUAS"
QT_MOC_LITERAL(14, 183, 13), // "UASInterface*"
QT_MOC_LITERAL(15, 197, 3), // "uas"
QT_MOC_LITERAL(16, 201, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(17, 222, 3), // "lat"
QT_MOC_LITERAL(18, 226, 3), // "lon"
QT_MOC_LITERAL(19, 230, 3), // "alt"
QT_MOC_LITERAL(20, 234, 4), // "usec"
QT_MOC_LITERAL(21, 239, 19), // "updateLocalPosition"
QT_MOC_LITERAL(22, 259, 28), // "updateLocalPositionEstimates"
QT_MOC_LITERAL(23, 288, 17), // "updateSystemSpecs"
QT_MOC_LITERAL(24, 306, 12), // "activeUASSet"
QT_MOC_LITERAL(25, 319, 14), // "showGoToDialog"
QT_MOC_LITERAL(26, 334, 6), // "goHome"
QT_MOC_LITERAL(27, 341, 12), // "lastPosition"
QT_MOC_LITERAL(28, 354, 14), // "updateWaypoint"
QT_MOC_LITERAL(29, 369, 18), // "updateWaypointList"
QT_MOC_LITERAL(30, 388, 19), // "redrawWaypointLines"
QT_MOC_LITERAL(31, 408, 18), // "updateHomePosition"
QT_MOC_LITERAL(32, 427, 18), // "setUpdateRateLimit"
QT_MOC_LITERAL(33, 446, 7), // "seconds"
QT_MOC_LITERAL(34, 454, 18), // "cacheVisibleRegion"
QT_MOC_LITERAL(35, 473, 19), // "setFollowUAVEnabled"
QT_MOC_LITERAL(36, 493, 7), // "enabled"
QT_MOC_LITERAL(37, 501, 17), // "setTrailModeTimed"
QT_MOC_LITERAL(38, 519, 20), // "setTrailModeDistance"
QT_MOC_LITERAL(39, 540, 6), // "meters"
QT_MOC_LITERAL(40, 547, 12), // "deleteTrails"
QT_MOC_LITERAL(41, 560, 12), // "loadSettings"
QT_MOC_LITERAL(42, 573, 13), // "storeSettings"
QT_MOC_LITERAL(43, 587, 21), // "handleMapWaypointEdit"
QT_MOC_LITERAL(44, 609, 13), // "WayPointItem*"
QT_MOC_LITERAL(45, 623, 8) // "waypoint"

    },
    "QGCMapWidget\0homePositionChanged\0\0"
    "latitude\0longitude\0altitude\0waypointCreated\0"
    "Waypoint*\0wp\0waypointChanged\0"
    "cameraActionTriggered\0guidedActionTriggered\0"
    "guidedAltActionTriggered\0addUAS\0"
    "UASInterface*\0uas\0updateGlobalPosition\0"
    "lat\0lon\0alt\0usec\0updateLocalPosition\0"
    "updateLocalPositionEstimates\0"
    "updateSystemSpecs\0activeUASSet\0"
    "showGoToDialog\0goHome\0lastPosition\0"
    "updateWaypoint\0updateWaypointList\0"
    "redrawWaypointLines\0updateHomePosition\0"
    "setUpdateRateLimit\0seconds\0"
    "cacheVisibleRegion\0setFollowUAVEnabled\0"
    "enabled\0setTrailModeTimed\0"
    "setTrailModeDistance\0meters\0deleteTrails\0"
    "loadSettings\0storeSettings\0"
    "handleMapWaypointEdit\0WayPointItem*\0"
    "waypoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  164,    2, 0x06 /* Public */,
       6,    1,  171,    2, 0x06 /* Public */,
       9,    1,  174,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  177,    2, 0x0a /* Public */,
      11,    0,  178,    2, 0x0a /* Public */,
      12,    0,  179,    2, 0x0a /* Public */,
      13,    1,  180,    2, 0x0a /* Public */,
      16,    5,  183,    2, 0x0a /* Public */,
      16,    0,  194,    2, 0x0a /* Public */,
      21,    0,  195,    2, 0x0a /* Public */,
      22,    0,  196,    2, 0x0a /* Public */,
      23,    1,  197,    2, 0x0a /* Public */,
      24,    1,  200,    2, 0x0a /* Public */,
      25,    0,  203,    2, 0x0a /* Public */,
      26,    0,  204,    2, 0x0a /* Public */,
      27,    0,  205,    2, 0x0a /* Public */,
      28,    2,  206,    2, 0x0a /* Public */,
      29,    1,  211,    2, 0x0a /* Public */,
      30,    0,  214,    2, 0x0a /* Public */,
      30,    1,  215,    2, 0x0a /* Public */,
      31,    3,  218,    2, 0x0a /* Public */,
      32,    1,  225,    2, 0x0a /* Public */,
      34,    0,  228,    2, 0x0a /* Public */,
      35,    1,  229,    2, 0x0a /* Public */,
      37,    1,  232,    2, 0x0a /* Public */,
      38,    1,  235,    2, 0x0a /* Public */,
      40,    0,  238,    2, 0x0a /* Public */,
      41,    0,  239,    2, 0x0a /* Public */,
      42,    0,  240,    2, 0x0a /* Public */,
      43,    1,  241,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,   15,   17,   18,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,   15,    8,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Float,   33,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,

       0        // eod
};

void QGCMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapWidget *_t = static_cast<QGCMapWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->waypointCreated((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 2: _t->waypointChanged((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 3: _t->cameraActionTriggered(); break;
        case 4: _t->guidedActionTriggered(); break;
        case 5: _t->guidedAltActionTriggered(); break;
        case 6: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 8: _t->updateGlobalPosition(); break;
        case 9: _t->updateLocalPosition(); break;
        case 10: _t->updateLocalPositionEstimates(); break;
        case 11: _t->updateSystemSpecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 13: _t->showGoToDialog(); break;
        case 14: _t->goHome(); break;
        case 15: _t->lastPosition(); break;
        case 16: _t->updateWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 17: _t->updateWaypointList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->redrawWaypointLines(); break;
        case 19: _t->redrawWaypointLines((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 21: _t->setUpdateRateLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->cacheVisibleRegion(); break;
        case 23: _t->setFollowUAVEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setTrailModeTimed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setTrailModeDistance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->deleteTrails(); break;
        case 27: _t->loadSettings(); break;
        case 28: _t->storeSettings(); break;
        case 29: _t->handleMapWaypointEdit((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WayPointItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapWidget::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapWidget::homePositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapWidget::waypointCreated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCMapWidget::*_t)(Waypoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapWidget::waypointChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QGCMapWidget::staticMetaObject = {
    { &mapcontrol::OPMapWidget::staticMetaObject, qt_meta_stringdata_QGCMapWidget.data,
      qt_meta_data_QGCMapWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapWidget.stringdata0))
        return static_cast<void*>(this);
    return mapcontrol::OPMapWidget::qt_metacast(_clname);
}

int QGCMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mapcontrol::OPMapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void QGCMapWidget::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapWidget::waypointCreated(Waypoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCMapWidget::waypointChanged(Waypoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
