/****************************************************************************
** Meta object code from reading C++ file 'HUD.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HUD.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HUD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HUD_t {
    QByteArrayData data[88];
    char stringdata0[902];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HUD_t qt_meta_stringdata_HUD = {
    {
QT_MOC_LITERAL(0, 0, 3), // "HUD"
QT_MOC_LITERAL(1, 4, 17), // "visibilityChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "visible"
QT_MOC_LITERAL(4, 31, 12), // "setActiveUAS"
QT_MOC_LITERAL(5, 44, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 58, 3), // "uas"
QT_MOC_LITERAL(7, 62, 14), // "updateAttitude"
QT_MOC_LITERAL(8, 77, 4), // "roll"
QT_MOC_LITERAL(9, 82, 5), // "pitch"
QT_MOC_LITERAL(10, 88, 3), // "yaw"
QT_MOC_LITERAL(11, 92, 9), // "timestamp"
QT_MOC_LITERAL(12, 102, 9), // "component"
QT_MOC_LITERAL(13, 112, 13), // "updateBattery"
QT_MOC_LITERAL(14, 126, 16), // "receiveHeartbeat"
QT_MOC_LITERAL(15, 143, 12), // "updateThrust"
QT_MOC_LITERAL(16, 156, 19), // "updateLocalPosition"
QT_MOC_LITERAL(17, 176, 20), // "updateGlobalPosition"
QT_MOC_LITERAL(18, 197, 11), // "updateSpeed"
QT_MOC_LITERAL(19, 209, 11), // "updateState"
QT_MOC_LITERAL(20, 221, 10), // "updateMode"
QT_MOC_LITERAL(21, 232, 2), // "id"
QT_MOC_LITERAL(22, 235, 4), // "mode"
QT_MOC_LITERAL(23, 240, 11), // "description"
QT_MOC_LITERAL(24, 252, 10), // "updateLoad"
QT_MOC_LITERAL(25, 263, 14), // "selectWaypoint"
QT_MOC_LITERAL(26, 278, 5), // "uasId"
QT_MOC_LITERAL(27, 284, 10), // "startImage"
QT_MOC_LITERAL(28, 295, 5), // "imgid"
QT_MOC_LITERAL(29, 301, 5), // "width"
QT_MOC_LITERAL(30, 307, 6), // "height"
QT_MOC_LITERAL(31, 314, 5), // "depth"
QT_MOC_LITERAL(32, 320, 8), // "channels"
QT_MOC_LITERAL(33, 329, 9), // "setPixels"
QT_MOC_LITERAL(34, 339, 20), // "const unsigned char*"
QT_MOC_LITERAL(35, 360, 9), // "imageData"
QT_MOC_LITERAL(36, 370, 6), // "length"
QT_MOC_LITERAL(37, 377, 10), // "startIndex"
QT_MOC_LITERAL(38, 388, 11), // "finishImage"
QT_MOC_LITERAL(39, 400, 9), // "saveImage"
QT_MOC_LITERAL(40, 410, 8), // "fileName"
QT_MOC_LITERAL(41, 419, 10), // "saveImages"
QT_MOC_LITERAL(42, 430, 4), // "save"
QT_MOC_LITERAL(43, 435, 22), // "selectOfflineDirectory"
QT_MOC_LITERAL(44, 458, 20), // "enableHUDInstruments"
QT_MOC_LITERAL(45, 479, 7), // "enabled"
QT_MOC_LITERAL(46, 487, 11), // "enableVideo"
QT_MOC_LITERAL(47, 499, 9), // "copyImage"
QT_MOC_LITERAL(48, 509, 20), // "paintRollPitchStrips"
QT_MOC_LITERAL(49, 530, 15), // "paintPitchLines"
QT_MOC_LITERAL(50, 546, 9), // "QPainter*"
QT_MOC_LITERAL(51, 556, 7), // "painter"
QT_MOC_LITERAL(52, 564, 9), // "paintText"
QT_MOC_LITERAL(53, 574, 4), // "text"
QT_MOC_LITERAL(54, 579, 5), // "color"
QT_MOC_LITERAL(55, 585, 8), // "fontSize"
QT_MOC_LITERAL(56, 594, 4), // "refX"
QT_MOC_LITERAL(57, 599, 4), // "refY"
QT_MOC_LITERAL(58, 604, 8), // "paintHUD"
QT_MOC_LITERAL(59, 613, 17), // "paintPitchLinePos"
QT_MOC_LITERAL(60, 631, 7), // "refPosX"
QT_MOC_LITERAL(61, 639, 7), // "refPosY"
QT_MOC_LITERAL(62, 647, 17), // "paintPitchLineNeg"
QT_MOC_LITERAL(63, 665, 8), // "drawLine"
QT_MOC_LITERAL(64, 674, 5), // "refX1"
QT_MOC_LITERAL(65, 680, 5), // "refY1"
QT_MOC_LITERAL(66, 686, 5), // "refX2"
QT_MOC_LITERAL(67, 692, 5), // "refY2"
QT_MOC_LITERAL(68, 698, 11), // "drawEllipse"
QT_MOC_LITERAL(69, 710, 7), // "radiusX"
QT_MOC_LITERAL(70, 718, 7), // "radiusY"
QT_MOC_LITERAL(71, 726, 8), // "startDeg"
QT_MOC_LITERAL(72, 735, 6), // "endDeg"
QT_MOC_LITERAL(73, 742, 9), // "lineWidth"
QT_MOC_LITERAL(74, 752, 10), // "drawCircle"
QT_MOC_LITERAL(75, 763, 6), // "radius"
QT_MOC_LITERAL(76, 770, 19), // "drawChangeRateStrip"
QT_MOC_LITERAL(77, 790, 4), // "xRef"
QT_MOC_LITERAL(78, 795, 4), // "yRef"
QT_MOC_LITERAL(79, 800, 7), // "minRate"
QT_MOC_LITERAL(80, 808, 7), // "maxRate"
QT_MOC_LITERAL(81, 816, 5), // "value"
QT_MOC_LITERAL(82, 822, 7), // "reverse"
QT_MOC_LITERAL(83, 830, 24), // "drawChangeIndicatorGauge"
QT_MOC_LITERAL(84, 855, 17), // "expectedMaxChange"
QT_MOC_LITERAL(85, 873, 5), // "solid"
QT_MOC_LITERAL(86, 879, 11), // "drawPolygon"
QT_MOC_LITERAL(87, 891, 10) // "refPolygon"

    },
    "HUD\0visibilityChanged\0\0visible\0"
    "setActiveUAS\0UASInterface*\0uas\0"
    "updateAttitude\0roll\0pitch\0yaw\0timestamp\0"
    "component\0updateBattery\0receiveHeartbeat\0"
    "updateThrust\0updateLocalPosition\0"
    "updateGlobalPosition\0updateSpeed\0"
    "updateState\0updateMode\0id\0mode\0"
    "description\0updateLoad\0selectWaypoint\0"
    "uasId\0startImage\0imgid\0width\0height\0"
    "depth\0channels\0setPixels\0const unsigned char*\0"
    "imageData\0length\0startIndex\0finishImage\0"
    "saveImage\0fileName\0saveImages\0save\0"
    "selectOfflineDirectory\0enableHUDInstruments\0"
    "enabled\0enableVideo\0copyImage\0"
    "paintRollPitchStrips\0paintPitchLines\0"
    "QPainter*\0painter\0paintText\0text\0color\0"
    "fontSize\0refX\0refY\0paintHUD\0"
    "paintPitchLinePos\0refPosX\0refPosY\0"
    "paintPitchLineNeg\0drawLine\0refX1\0refY1\0"
    "refX2\0refY2\0drawEllipse\0radiusX\0radiusY\0"
    "startDeg\0endDeg\0lineWidth\0drawCircle\0"
    "radius\0drawChangeRateStrip\0xRef\0yRef\0"
    "minRate\0maxRate\0value\0reverse\0"
    "drawChangeIndicatorGauge\0expectedMaxChange\0"
    "solid\0drawPolygon\0refPolygon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HUD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  212,    2, 0x0a /* Public */,
       7,    5,  215,    2, 0x0a /* Public */,
       7,    6,  226,    2, 0x0a /* Public */,
      13,    5,  239,    2, 0x0a /* Public */,
      14,    1,  250,    2, 0x0a /* Public */,
      15,    2,  253,    2, 0x0a /* Public */,
      16,    5,  258,    2, 0x0a /* Public */,
      17,    5,  269,    2, 0x0a /* Public */,
      18,    5,  280,    2, 0x0a /* Public */,
      19,    2,  291,    2, 0x0a /* Public */,
      20,    3,  296,    2, 0x0a /* Public */,
      24,    2,  303,    2, 0x0a /* Public */,
      25,    2,  308,    2, 0x0a /* Public */,
      27,    1,  313,    2, 0x0a /* Public */,
      27,    5,  316,    2, 0x0a /* Public */,
      33,    4,  327,    2, 0x0a /* Public */,
      38,    0,  336,    2, 0x0a /* Public */,
      39,    0,  337,    2, 0x0a /* Public */,
      39,    1,  338,    2, 0x0a /* Public */,
      41,    1,  341,    2, 0x0a /* Public */,
      43,    0,  344,    2, 0x0a /* Public */,
      44,    1,  345,    2, 0x0a /* Public */,
      46,    1,  348,    2, 0x0a /* Public */,
      47,    0,  351,    2, 0x0a /* Public */,
      48,    0,  352,    2, 0x09 /* Protected */,
      49,    2,  353,    2, 0x09 /* Protected */,
      52,    6,  358,    2, 0x09 /* Protected */,
      58,    0,  371,    2, 0x09 /* Protected */,
      59,    4,  372,    2, 0x09 /* Protected */,
      62,    4,  381,    2, 0x09 /* Protected */,
      63,    7,  390,    2, 0x09 /* Protected */,
      68,    9,  405,    2, 0x09 /* Protected */,
      74,    8,  424,    2, 0x09 /* Protected */,
      76,    8,  441,    2, 0x09 /* Protected */,
      76,    7,  458,    2, 0x29 /* Protected | MethodCloned */,
      83,    8,  473,    2, 0x09 /* Protected */,
      83,    7,  490,    2, 0x29 /* Protected | MethodCloned */,
      86,    2,  505,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    6,   12,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   21,
    QMetaType::Void, QMetaType::ULongLong,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   29,   30,   31,   32,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34, QMetaType::Int, QMetaType::Int,   28,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::Bool,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 50,    9,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 50,   53,   54,   55,   56,   57,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, 0x80000000 | 50,   53,   60,   61,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, 0x80000000 | 50,   53,   60,   61,   51,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 50,   64,   65,   66,   67,   29,   54,   51,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 50,   56,   57,   69,   70,   71,   72,   73,   54,   51,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 50,   56,   57,   75,   71,   72,   73,   54,   51,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 50, QMetaType::Bool,   77,   78,   30,   79,   80,   81,   51,   82,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 50,   77,   78,   30,   79,   80,   81,   51,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 50, QMetaType::Bool,   77,   78,   75,   84,   81,   54,   51,   85,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::QColor, 0x80000000 | 50,   77,   78,   75,   84,   81,   54,   51,
    QMetaType::Void, QMetaType::QPolygonF, 0x80000000 | 50,   87,   51,

       0        // eod
};

void HUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HUD *_t = static_cast<HUD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 3: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 4: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 6: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 8: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 10: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->startImage((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 15: _t->startImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 16: _t->setPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 17: _t->finishImage(); break;
        case 18: _t->saveImage(); break;
        case 19: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->saveImages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->selectOfflineDirectory(); break;
        case 22: _t->enableHUDInstruments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->enableVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->copyImage(); break;
        case 25: _t->paintRollPitchStrips(); break;
        case 26: _t->paintPitchLines((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 27: _t->paintText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< QPainter*(*)>(_a[6]))); break;
        case 28: _t->paintHUD(); break;
        case 29: _t->paintPitchLinePos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 30: _t->paintPitchLineNeg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 31: _t->drawLine((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 32: _t->drawEllipse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< const QColor(*)>(_a[8])),(*reinterpret_cast< QPainter*(*)>(_a[9]))); break;
        case 33: _t->drawCircle((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const QColor(*)>(_a[7])),(*reinterpret_cast< QPainter*(*)>(_a[8]))); break;
        case 34: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 35: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 36: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 37: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 38: _t->drawPolygon((*reinterpret_cast< QPolygonF(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 12:
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
            typedef void (HUD::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HUD::visibilityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HUD::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_HUD.data,
      qt_meta_data_HUD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HUD.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int HUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void HUD::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
