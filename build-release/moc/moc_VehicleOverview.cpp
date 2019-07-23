/****************************************************************************
** Meta object code from reading C++ file 'VehicleOverview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/VehicleOverview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleOverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleOverview_t {
    QByteArrayData data[131];
    char stringdata0[2043];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleOverview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleOverview_t qt_meta_stringdata_VehicleOverview = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VehicleOverview"
QT_MOC_LITERAL(1, 16, 17), // "customModeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "typeChanged"
QT_MOC_LITERAL(4, 47, 16), // "autopilotChanged"
QT_MOC_LITERAL(5, 64, 15), // "baseModeChanged"
QT_MOC_LITERAL(6, 80, 19), // "systemStatusChanged"
QT_MOC_LITERAL(7, 100, 21), // "mavlinkVersionChanged"
QT_MOC_LITERAL(8, 122, 35), // "onboardControlSensorsPresentC..."
QT_MOC_LITERAL(9, 158, 35), // "onboardControlSensorsEnabledC..."
QT_MOC_LITERAL(10, 194, 34), // "onboardControlSensorsHealthCh..."
QT_MOC_LITERAL(11, 229, 11), // "loadChanged"
QT_MOC_LITERAL(12, 241, 21), // "voltageBatteryChanged"
QT_MOC_LITERAL(13, 263, 19), // "dropRateCommChanged"
QT_MOC_LITERAL(14, 283, 17), // "errorsCommChanged"
QT_MOC_LITERAL(15, 301, 19), // "errorsCount1Changed"
QT_MOC_LITERAL(16, 321, 19), // "errorsCount2Changed"
QT_MOC_LITERAL(17, 341, 19), // "errorsCount3Changed"
QT_MOC_LITERAL(18, 361, 19), // "errorsCount4Changed"
QT_MOC_LITERAL(19, 381, 14), // "navRollChanged"
QT_MOC_LITERAL(20, 396, 15), // "navPitchChanged"
QT_MOC_LITERAL(21, 412, 15), // "altErrorChanged"
QT_MOC_LITERAL(22, 428, 16), // "aspdErrorChanged"
QT_MOC_LITERAL(23, 445, 18), // "xtrackErrorChanged"
QT_MOC_LITERAL(24, 464, 17), // "navBearingChanged"
QT_MOC_LITERAL(25, 482, 20), // "targetBearingChanged"
QT_MOC_LITERAL(26, 503, 13), // "wpDistChanged"
QT_MOC_LITERAL(27, 517, 22), // "currentConsumedChanged"
QT_MOC_LITERAL(28, 540, 21), // "energyConsumedChanged"
QT_MOC_LITERAL(29, 562, 19), // "voltageCell1Changed"
QT_MOC_LITERAL(30, 582, 19), // "voltageCell2Changed"
QT_MOC_LITERAL(31, 602, 19), // "voltageCell3Changed"
QT_MOC_LITERAL(32, 622, 19), // "voltageCell4Changed"
QT_MOC_LITERAL(33, 642, 19), // "voltageCell5Changed"
QT_MOC_LITERAL(34, 662, 19), // "voltageCell6Changed"
QT_MOC_LITERAL(35, 682, 21), // "currentBatteryChanged"
QT_MOC_LITERAL(36, 704, 13), // "accuIdChanged"
QT_MOC_LITERAL(37, 718, 23), // "batteryRemainingChanged"
QT_MOC_LITERAL(38, 742, 10), // "VccChanged"
QT_MOC_LITERAL(39, 753, 13), // "VservoChanged"
QT_MOC_LITERAL(40, 767, 12), // "flagsChanged"
QT_MOC_LITERAL(41, 780, 15), // "rxerrorsChanged"
QT_MOC_LITERAL(42, 796, 12), // "fixedChanged"
QT_MOC_LITERAL(43, 809, 11), // "rssiChanged"
QT_MOC_LITERAL(44, 821, 14), // "remrssiChanged"
QT_MOC_LITERAL(45, 836, 12), // "txbufChanged"
QT_MOC_LITERAL(46, 849, 12), // "noiseChanged"
QT_MOC_LITERAL(47, 862, 15), // "remnoiseChanged"
QT_MOC_LITERAL(48, 878, 17), // "armedStateChanged"
QT_MOC_LITERAL(49, 896, 17), // "vibrationXChanged"
QT_MOC_LITERAL(50, 914, 17), // "vibrationYChanged"
QT_MOC_LITERAL(51, 932, 17), // "vibrationZChanged"
QT_MOC_LITERAL(52, 950, 16), // "clipping0Changed"
QT_MOC_LITERAL(53, 967, 16), // "clipping1Changed"
QT_MOC_LITERAL(54, 984, 16), // "clipping2Changed"
QT_MOC_LITERAL(55, 1001, 15), // "ekfFlagsChanged"
QT_MOC_LITERAL(56, 1017, 26), // "ekfVelocityVarianceChanged"
QT_MOC_LITERAL(57, 1044, 26), // "ekfPosHorizVarianceChanged"
QT_MOC_LITERAL(58, 1071, 25), // "ekfPosVertVarianceChanged"
QT_MOC_LITERAL(59, 1097, 25), // "ekfCompassVarianceChanged"
QT_MOC_LITERAL(60, 1123, 28), // "ekfTerrainAltVarianceChanged"
QT_MOC_LITERAL(61, 1152, 12), // "valueChanged"
QT_MOC_LITERAL(62, 1165, 5), // "uasId"
QT_MOC_LITERAL(63, 1171, 4), // "name"
QT_MOC_LITERAL(64, 1176, 4), // "unit"
QT_MOC_LITERAL(65, 1181, 5), // "value"
QT_MOC_LITERAL(66, 1187, 4), // "msec"
QT_MOC_LITERAL(67, 1192, 15), // "messageReceived"
QT_MOC_LITERAL(68, 1208, 14), // "LinkInterface*"
QT_MOC_LITERAL(69, 1223, 4), // "link"
QT_MOC_LITERAL(70, 1228, 17), // "mavlink_message_t"
QT_MOC_LITERAL(71, 1246, 7), // "message"
QT_MOC_LITERAL(72, 1254, 11), // "custom_mode"
QT_MOC_LITERAL(73, 1266, 4), // "type"
QT_MOC_LITERAL(74, 1271, 9), // "autopilot"
QT_MOC_LITERAL(75, 1281, 9), // "base_mode"
QT_MOC_LITERAL(76, 1291, 13), // "system_status"
QT_MOC_LITERAL(77, 1305, 15), // "mavlink_version"
QT_MOC_LITERAL(78, 1321, 31), // "onboard_control_sensors_present"
QT_MOC_LITERAL(79, 1353, 31), // "onboard_control_sensors_enabled"
QT_MOC_LITERAL(80, 1385, 30), // "onboard_control_sensors_health"
QT_MOC_LITERAL(81, 1416, 4), // "load"
QT_MOC_LITERAL(82, 1421, 15), // "voltage_battery"
QT_MOC_LITERAL(83, 1437, 14), // "drop_rate_comm"
QT_MOC_LITERAL(84, 1452, 11), // "errors_comm"
QT_MOC_LITERAL(85, 1464, 13), // "errors_count1"
QT_MOC_LITERAL(86, 1478, 13), // "errors_count2"
QT_MOC_LITERAL(87, 1492, 13), // "errors_count3"
QT_MOC_LITERAL(88, 1506, 13), // "errors_count4"
QT_MOC_LITERAL(89, 1520, 8), // "nav_roll"
QT_MOC_LITERAL(90, 1529, 9), // "nav_pitch"
QT_MOC_LITERAL(91, 1539, 9), // "alt_error"
QT_MOC_LITERAL(92, 1549, 10), // "aspd_error"
QT_MOC_LITERAL(93, 1560, 12), // "xtrack_error"
QT_MOC_LITERAL(94, 1573, 11), // "nav_bearing"
QT_MOC_LITERAL(95, 1585, 14), // "target_bearing"
QT_MOC_LITERAL(96, 1600, 7), // "wp_dist"
QT_MOC_LITERAL(97, 1608, 16), // "current_consumed"
QT_MOC_LITERAL(98, 1625, 15), // "energy_consumed"
QT_MOC_LITERAL(99, 1641, 14), // "voltage_cell_1"
QT_MOC_LITERAL(100, 1656, 14), // "voltage_cell_2"
QT_MOC_LITERAL(101, 1671, 14), // "voltage_cell_3"
QT_MOC_LITERAL(102, 1686, 14), // "voltage_cell_4"
QT_MOC_LITERAL(103, 1701, 14), // "voltage_cell_5"
QT_MOC_LITERAL(104, 1716, 14), // "voltage_cell_6"
QT_MOC_LITERAL(105, 1731, 15), // "current_battery"
QT_MOC_LITERAL(106, 1747, 7), // "accu_id"
QT_MOC_LITERAL(107, 1755, 17), // "battery_remaining"
QT_MOC_LITERAL(108, 1773, 3), // "Vcc"
QT_MOC_LITERAL(109, 1777, 6), // "Vservo"
QT_MOC_LITERAL(110, 1784, 5), // "flags"
QT_MOC_LITERAL(111, 1790, 8), // "rxerrors"
QT_MOC_LITERAL(112, 1799, 5), // "fixed"
QT_MOC_LITERAL(113, 1805, 4), // "rssi"
QT_MOC_LITERAL(114, 1810, 7), // "remrssi"
QT_MOC_LITERAL(115, 1818, 5), // "txbuf"
QT_MOC_LITERAL(116, 1824, 5), // "noise"
QT_MOC_LITERAL(117, 1830, 8), // "remnoise"
QT_MOC_LITERAL(118, 1839, 11), // "armed_state"
QT_MOC_LITERAL(119, 1851, 11), // "vibration_x"
QT_MOC_LITERAL(120, 1863, 11), // "vibration_y"
QT_MOC_LITERAL(121, 1875, 11), // "vibration_z"
QT_MOC_LITERAL(122, 1887, 10), // "clipping_0"
QT_MOC_LITERAL(123, 1898, 10), // "clipping_1"
QT_MOC_LITERAL(124, 1909, 10), // "clipping_2"
QT_MOC_LITERAL(125, 1920, 9), // "ekf_flags"
QT_MOC_LITERAL(126, 1930, 21), // "ekf_velocity_variance"
QT_MOC_LITERAL(127, 1952, 22), // "ekf_pos_horiz_variance"
QT_MOC_LITERAL(128, 1975, 21), // "ekf_pos_vert_variance"
QT_MOC_LITERAL(129, 1997, 20), // "ekf_compass_variance"
QT_MOC_LITERAL(130, 2018, 24) // "ekf_terrain_alt_variance"

    },
    "VehicleOverview\0customModeChanged\0\0"
    "typeChanged\0autopilotChanged\0"
    "baseModeChanged\0systemStatusChanged\0"
    "mavlinkVersionChanged\0"
    "onboardControlSensorsPresentChanged\0"
    "onboardControlSensorsEnabledChanged\0"
    "onboardControlSensorsHealthChanged\0"
    "loadChanged\0voltageBatteryChanged\0"
    "dropRateCommChanged\0errorsCommChanged\0"
    "errorsCount1Changed\0errorsCount2Changed\0"
    "errorsCount3Changed\0errorsCount4Changed\0"
    "navRollChanged\0navPitchChanged\0"
    "altErrorChanged\0aspdErrorChanged\0"
    "xtrackErrorChanged\0navBearingChanged\0"
    "targetBearingChanged\0wpDistChanged\0"
    "currentConsumedChanged\0energyConsumedChanged\0"
    "voltageCell1Changed\0voltageCell2Changed\0"
    "voltageCell3Changed\0voltageCell4Changed\0"
    "voltageCell5Changed\0voltageCell6Changed\0"
    "currentBatteryChanged\0accuIdChanged\0"
    "batteryRemainingChanged\0VccChanged\0"
    "VservoChanged\0flagsChanged\0rxerrorsChanged\0"
    "fixedChanged\0rssiChanged\0remrssiChanged\0"
    "txbufChanged\0noiseChanged\0remnoiseChanged\0"
    "armedStateChanged\0vibrationXChanged\0"
    "vibrationYChanged\0vibrationZChanged\0"
    "clipping0Changed\0clipping1Changed\0"
    "clipping2Changed\0ekfFlagsChanged\0"
    "ekfVelocityVarianceChanged\0"
    "ekfPosHorizVarianceChanged\0"
    "ekfPosVertVarianceChanged\0"
    "ekfCompassVarianceChanged\0"
    "ekfTerrainAltVarianceChanged\0valueChanged\0"
    "uasId\0name\0unit\0value\0msec\0messageReceived\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "message\0custom_mode\0type\0autopilot\0"
    "base_mode\0system_status\0mavlink_version\0"
    "onboard_control_sensors_present\0"
    "onboard_control_sensors_enabled\0"
    "onboard_control_sensors_health\0load\0"
    "voltage_battery\0drop_rate_comm\0"
    "errors_comm\0errors_count1\0errors_count2\0"
    "errors_count3\0errors_count4\0nav_roll\0"
    "nav_pitch\0alt_error\0aspd_error\0"
    "xtrack_error\0nav_bearing\0target_bearing\0"
    "wp_dist\0current_consumed\0energy_consumed\0"
    "voltage_cell_1\0voltage_cell_2\0"
    "voltage_cell_3\0voltage_cell_4\0"
    "voltage_cell_5\0voltage_cell_6\0"
    "current_battery\0accu_id\0battery_remaining\0"
    "Vcc\0Vservo\0flags\0rxerrors\0fixed\0rssi\0"
    "remrssi\0txbuf\0noise\0remnoise\0armed_state\0"
    "vibration_x\0vibration_y\0vibration_z\0"
    "clipping_0\0clipping_1\0clipping_2\0"
    "ekf_flags\0ekf_velocity_variance\0"
    "ekf_pos_horiz_variance\0ekf_pos_vert_variance\0"
    "ekf_compass_variance\0ekf_terrain_alt_variance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleOverview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
      59,  512, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      60,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x06 /* Public */,
       3,    1,  322,    2, 0x06 /* Public */,
       4,    1,  325,    2, 0x06 /* Public */,
       5,    1,  328,    2, 0x06 /* Public */,
       6,    1,  331,    2, 0x06 /* Public */,
       7,    1,  334,    2, 0x06 /* Public */,
       8,    1,  337,    2, 0x06 /* Public */,
       9,    1,  340,    2, 0x06 /* Public */,
      10,    1,  343,    2, 0x06 /* Public */,
      11,    1,  346,    2, 0x06 /* Public */,
      12,    1,  349,    2, 0x06 /* Public */,
      13,    1,  352,    2, 0x06 /* Public */,
      14,    1,  355,    2, 0x06 /* Public */,
      15,    1,  358,    2, 0x06 /* Public */,
      16,    1,  361,    2, 0x06 /* Public */,
      17,    1,  364,    2, 0x06 /* Public */,
      18,    1,  367,    2, 0x06 /* Public */,
      19,    1,  370,    2, 0x06 /* Public */,
      20,    1,  373,    2, 0x06 /* Public */,
      21,    1,  376,    2, 0x06 /* Public */,
      22,    1,  379,    2, 0x06 /* Public */,
      23,    1,  382,    2, 0x06 /* Public */,
      24,    1,  385,    2, 0x06 /* Public */,
      25,    1,  388,    2, 0x06 /* Public */,
      26,    1,  391,    2, 0x06 /* Public */,
      27,    1,  394,    2, 0x06 /* Public */,
      28,    1,  397,    2, 0x06 /* Public */,
      29,    1,  400,    2, 0x06 /* Public */,
      30,    1,  403,    2, 0x06 /* Public */,
      31,    1,  406,    2, 0x06 /* Public */,
      32,    1,  409,    2, 0x06 /* Public */,
      33,    1,  412,    2, 0x06 /* Public */,
      34,    1,  415,    2, 0x06 /* Public */,
      35,    1,  418,    2, 0x06 /* Public */,
      36,    1,  421,    2, 0x06 /* Public */,
      37,    1,  424,    2, 0x06 /* Public */,
      38,    1,  427,    2, 0x06 /* Public */,
      39,    1,  430,    2, 0x06 /* Public */,
      40,    1,  433,    2, 0x06 /* Public */,
      41,    1,  436,    2, 0x06 /* Public */,
      42,    1,  439,    2, 0x06 /* Public */,
      43,    1,  442,    2, 0x06 /* Public */,
      44,    1,  445,    2, 0x06 /* Public */,
      45,    1,  448,    2, 0x06 /* Public */,
      46,    1,  451,    2, 0x06 /* Public */,
      47,    1,  454,    2, 0x06 /* Public */,
      48,    1,  457,    2, 0x06 /* Public */,
      49,    1,  460,    2, 0x06 /* Public */,
      50,    1,  463,    2, 0x06 /* Public */,
      51,    1,  466,    2, 0x06 /* Public */,
      52,    1,  469,    2, 0x06 /* Public */,
      53,    1,  472,    2, 0x06 /* Public */,
      54,    1,  475,    2, 0x06 /* Public */,
      55,    1,  478,    2, 0x06 /* Public */,
      56,    1,  481,    2, 0x06 /* Public */,
      57,    1,  484,    2, 0x06 /* Public */,
      58,    1,  487,    2, 0x06 /* Public */,
      59,    1,  490,    2, 0x06 /* Public */,
      60,    1,  493,    2, 0x06 /* Public */,
      61,    5,  496,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      67,    2,  507,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   62,   63,   64,   65,   66,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 68, 0x80000000 | 70,   69,   71,

 // properties: name, type, flags
      72, QMetaType::UInt, 0x00495003,
      73, QMetaType::UInt, 0x00495103,
      74, QMetaType::UInt, 0x00495103,
      75, QMetaType::UInt, 0x00495003,
      76, QMetaType::UInt, 0x00495003,
      77, QMetaType::UInt, 0x00495003,
      78, QMetaType::UInt, 0x00495003,
      79, QMetaType::UInt, 0x00495003,
      80, QMetaType::UInt, 0x00495003,
      81, QMetaType::UInt, 0x00495103,
      82, QMetaType::UInt, 0x00495003,
      83, QMetaType::UInt, 0x00495003,
      84, QMetaType::UInt, 0x00495003,
      85, QMetaType::UInt, 0x00495003,
      86, QMetaType::UInt, 0x00495003,
      87, QMetaType::UInt, 0x00495003,
      88, QMetaType::UInt, 0x00495003,
      89, QMetaType::Double, 0x00495003,
      90, QMetaType::Double, 0x00495003,
      91, QMetaType::Double, 0x00495003,
      92, QMetaType::Double, 0x00495003,
      93, QMetaType::Double, 0x00495003,
      94, QMetaType::Int, 0x00495003,
      95, QMetaType::Int, 0x00495003,
      96, QMetaType::UInt, 0x00495003,
      97, QMetaType::Int, 0x00495003,
      98, QMetaType::Int, 0x00495003,
      99, QMetaType::UInt, 0x00495003,
     100, QMetaType::UInt, 0x00495003,
     101, QMetaType::UInt, 0x00495003,
     102, QMetaType::UInt, 0x00495003,
     103, QMetaType::UInt, 0x00495003,
     104, QMetaType::UInt, 0x00495003,
     105, QMetaType::Int, 0x00495003,
     106, QMetaType::UInt, 0x00495003,
     107, QMetaType::Int, 0x00495003,
     108, QMetaType::UInt, 0x00495103,
     109, QMetaType::UInt, 0x00495103,
     110, QMetaType::UInt, 0x00495103,
     111, QMetaType::UInt, 0x00495103,
     112, QMetaType::UInt, 0x00495103,
     113, QMetaType::UInt, 0x00495103,
     114, QMetaType::UInt, 0x00495103,
     115, QMetaType::UInt, 0x00495103,
     116, QMetaType::UInt, 0x00495103,
     117, QMetaType::UInt, 0x00495103,
     118, QMetaType::Bool, 0x00495003,
     119, QMetaType::Double, 0x00495001,
     120, QMetaType::Double, 0x00495001,
     121, QMetaType::Double, 0x00495001,
     122, QMetaType::Double, 0x00495001,
     123, QMetaType::Double, 0x00495001,
     124, QMetaType::Double, 0x00495001,
     125, QMetaType::Double, 0x00495001,
     126, QMetaType::Double, 0x00495001,
     127, QMetaType::Double, 0x00495001,
     128, QMetaType::Double, 0x00495001,
     129, QMetaType::Double, 0x00495001,
     130, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,
      45,
      46,
      47,
      48,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      56,
      57,
      58,

       0        // eod
};

void VehicleOverview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VehicleOverview *_t = static_cast<VehicleOverview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->customModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->typeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->autopilotChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->baseModeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->systemStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->mavlinkVersionChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->onboardControlSensorsPresentChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->onboardControlSensorsEnabledChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->onboardControlSensorsHealthChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->loadChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->voltageBatteryChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->dropRateCommChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->errorsCommChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->errorsCount1Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->errorsCount2Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 15: _t->errorsCount3Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->errorsCount4Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: _t->navRollChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->navPitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->altErrorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->aspdErrorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->xtrackErrorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->navBearingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->targetBearingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->wpDistChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 25: _t->currentConsumedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->energyConsumedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->voltageCell1Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 28: _t->voltageCell2Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 29: _t->voltageCell3Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 30: _t->voltageCell4Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 31: _t->voltageCell5Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 32: _t->voltageCell6Changed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 33: _t->currentBatteryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->accuIdChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 35: _t->batteryRemainingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->VccChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 37: _t->VservoChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 38: _t->flagsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 39: _t->rxerrorsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 40: _t->fixedChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 41: _t->rssiChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 42: _t->remrssiChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 43: _t->txbufChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 44: _t->noiseChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 45: _t->remnoiseChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: _t->armedStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->vibrationXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: _t->vibrationYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 49: _t->vibrationZChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 50: _t->clipping0Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->clipping1Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: _t->clipping2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: _t->ekfFlagsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 54: _t->ekfVelocityVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->ekfPosHorizVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->ekfPosVertVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 57: _t->ekfCompassVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->ekfTerrainAltVarianceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 60: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 60:
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
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::customModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::typeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::autopilotChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::baseModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::systemStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::mavlinkVersionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::onboardControlSensorsPresentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::onboardControlSensorsEnabledChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::onboardControlSensorsHealthChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::loadChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageBatteryChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::dropRateCommChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::errorsCommChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::errorsCount1Changed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::errorsCount2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::errorsCount3Changed)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::errorsCount4Changed)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::navRollChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::navPitchChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::altErrorChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::aspdErrorChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::xtrackErrorChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::navBearingChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::targetBearingChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::wpDistChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::currentConsumedChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::energyConsumedChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell1Changed)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell2Changed)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell3Changed)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell4Changed)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell5Changed)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::voltageCell6Changed)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::currentBatteryChanged)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::accuIdChanged)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::batteryRemainingChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::VccChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::VservoChanged)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::flagsChanged)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::rxerrorsChanged)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::fixedChanged)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::rssiChanged)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::remrssiChanged)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::txbufChanged)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::noiseChanged)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::remnoiseChanged)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::armedStateChanged)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::vibrationXChanged)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::vibrationYChanged)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::vibrationZChanged)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::clipping0Changed)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::clipping1Changed)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::clipping2Changed)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfFlagsChanged)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfVelocityVarianceChanged)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfPosHorizVarianceChanged)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfPosVertVarianceChanged)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfCompassVarianceChanged)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::ekfTerrainAltVarianceChanged)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (VehicleOverview::*_t)(const int , const QString & , const QString & , const QVariant & , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VehicleOverview::valueChanged)) {
                *result = 59;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VehicleOverview *_t = static_cast<VehicleOverview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getCustomMode(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getType(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->getAutopilot(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->getBaseMode(); break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->getSystemStatus(); break;
        case 5: *reinterpret_cast< uint*>(_v) = _t->getMavlinkVersion(); break;
        case 6: *reinterpret_cast< uint*>(_v) = _t->getOnboardControlSensorsPresent(); break;
        case 7: *reinterpret_cast< uint*>(_v) = _t->getOnboardControlSensorsEnabled(); break;
        case 8: *reinterpret_cast< uint*>(_v) = _t->getOnboardControlSensorsHealth(); break;
        case 9: *reinterpret_cast< uint*>(_v) = _t->getLoad(); break;
        case 10: *reinterpret_cast< uint*>(_v) = _t->getVoltageBattery(); break;
        case 11: *reinterpret_cast< uint*>(_v) = _t->getDropRateComm(); break;
        case 12: *reinterpret_cast< uint*>(_v) = _t->getErrorsComm(); break;
        case 13: *reinterpret_cast< uint*>(_v) = _t->getErrorsCount1(); break;
        case 14: *reinterpret_cast< uint*>(_v) = _t->getErrorsCount2(); break;
        case 15: *reinterpret_cast< uint*>(_v) = _t->getErrorsCount3(); break;
        case 16: *reinterpret_cast< uint*>(_v) = _t->getErrorsCount4(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->getNavRoll(); break;
        case 18: *reinterpret_cast< double*>(_v) = _t->getNavPitch(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->getAltError(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->getAspdError(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->getXtrackError(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->getNavBearing(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->getTargetBearing(); break;
        case 24: *reinterpret_cast< uint*>(_v) = _t->getWpDist(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->getCurrentConsumed(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getEnergyConsumed(); break;
        case 27: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell1(); break;
        case 28: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell2(); break;
        case 29: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell3(); break;
        case 30: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell4(); break;
        case 31: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell5(); break;
        case 32: *reinterpret_cast< uint*>(_v) = _t->getVoltageCell6(); break;
        case 33: *reinterpret_cast< int*>(_v) = _t->getCurrentBattery(); break;
        case 34: *reinterpret_cast< uint*>(_v) = _t->getAccuId(); break;
        case 35: *reinterpret_cast< int*>(_v) = _t->getBatteryRemaining(); break;
        case 36: *reinterpret_cast< uint*>(_v) = _t->getVcc(); break;
        case 37: *reinterpret_cast< uint*>(_v) = _t->getVservo(); break;
        case 38: *reinterpret_cast< uint*>(_v) = _t->getFlags(); break;
        case 39: *reinterpret_cast< uint*>(_v) = _t->getRxerrors(); break;
        case 40: *reinterpret_cast< uint*>(_v) = _t->getFixed(); break;
        case 41: *reinterpret_cast< uint*>(_v) = _t->getRssi(); break;
        case 42: *reinterpret_cast< uint*>(_v) = _t->getRemrssi(); break;
        case 43: *reinterpret_cast< uint*>(_v) = _t->getTxbuf(); break;
        case 44: *reinterpret_cast< uint*>(_v) = _t->getNoise(); break;
        case 45: *reinterpret_cast< uint*>(_v) = _t->getRemnoise(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->getArmedState(); break;
        case 47: *reinterpret_cast< double*>(_v) = _t->getVibrationX(); break;
        case 48: *reinterpret_cast< double*>(_v) = _t->getVibrationY(); break;
        case 49: *reinterpret_cast< double*>(_v) = _t->getVibrationZ(); break;
        case 50: *reinterpret_cast< double*>(_v) = _t->getClipping0(); break;
        case 51: *reinterpret_cast< double*>(_v) = _t->getClipping1(); break;
        case 52: *reinterpret_cast< double*>(_v) = _t->getClipping2(); break;
        case 53: *reinterpret_cast< double*>(_v) = _t->getEkfFlags(); break;
        case 54: *reinterpret_cast< double*>(_v) = _t->getEkfVelocityVariance(); break;
        case 55: *reinterpret_cast< double*>(_v) = _t->getEkfPosHorizVariance(); break;
        case 56: *reinterpret_cast< double*>(_v) = _t->getEkfPosVertVariance(); break;
        case 57: *reinterpret_cast< double*>(_v) = _t->getEkfComapssVariance(); break;
        case 58: *reinterpret_cast< double*>(_v) = _t->getEkfTerrainAltVariance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VehicleOverview *_t = static_cast<VehicleOverview *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCustomMode(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setType(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->setAutopilot(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->setBaseMode(*reinterpret_cast< uint*>(_v)); break;
        case 4: _t->setSystemStatus(*reinterpret_cast< uint*>(_v)); break;
        case 5: _t->setMavlinkVersion(*reinterpret_cast< uint*>(_v)); break;
        case 6: _t->setOnboardControlSensorsPresent(*reinterpret_cast< uint*>(_v)); break;
        case 7: _t->setOnboardControlSensorsEnabled(*reinterpret_cast< uint*>(_v)); break;
        case 8: _t->setOnboardControlSensorsHealth(*reinterpret_cast< uint*>(_v)); break;
        case 9: _t->setLoad(*reinterpret_cast< uint*>(_v)); break;
        case 10: _t->setVoltageBattery(*reinterpret_cast< uint*>(_v)); break;
        case 11: _t->setDropRateComm(*reinterpret_cast< uint*>(_v)); break;
        case 12: _t->setErrorsComm(*reinterpret_cast< uint*>(_v)); break;
        case 13: _t->setErrorsCount1(*reinterpret_cast< uint*>(_v)); break;
        case 14: _t->setErrorsCount2(*reinterpret_cast< uint*>(_v)); break;
        case 15: _t->setErrorsCount3(*reinterpret_cast< uint*>(_v)); break;
        case 16: _t->setErrorsCount4(*reinterpret_cast< uint*>(_v)); break;
        case 17: _t->setNavRoll(*reinterpret_cast< double*>(_v)); break;
        case 18: _t->setNavPitch(*reinterpret_cast< double*>(_v)); break;
        case 19: _t->setAltError(*reinterpret_cast< double*>(_v)); break;
        case 20: _t->setAspdError(*reinterpret_cast< double*>(_v)); break;
        case 21: _t->setXtrackError(*reinterpret_cast< double*>(_v)); break;
        case 22: _t->setNavBearing(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setTargetBearing(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setWpDist(*reinterpret_cast< uint*>(_v)); break;
        case 25: _t->setCurrentConsumed(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setEnergyConsumed(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setVoltageCell1(*reinterpret_cast< uint*>(_v)); break;
        case 28: _t->setVoltageCell2(*reinterpret_cast< uint*>(_v)); break;
        case 29: _t->setVoltageCell3(*reinterpret_cast< uint*>(_v)); break;
        case 30: _t->setVoltageCell4(*reinterpret_cast< uint*>(_v)); break;
        case 31: _t->setVoltageCell5(*reinterpret_cast< uint*>(_v)); break;
        case 32: _t->setVoltageCell6(*reinterpret_cast< uint*>(_v)); break;
        case 33: _t->setCurrentBattery(*reinterpret_cast< int*>(_v)); break;
        case 34: _t->setAccuId(*reinterpret_cast< uint*>(_v)); break;
        case 35: _t->setBatteryRemaining(*reinterpret_cast< int*>(_v)); break;
        case 36: _t->setVcc(*reinterpret_cast< uint*>(_v)); break;
        case 37: _t->setVservo(*reinterpret_cast< uint*>(_v)); break;
        case 38: _t->setFlags(*reinterpret_cast< uint*>(_v)); break;
        case 39: _t->setRxerrors(*reinterpret_cast< uint*>(_v)); break;
        case 40: _t->setFixed(*reinterpret_cast< uint*>(_v)); break;
        case 41: _t->setRssi(*reinterpret_cast< uint*>(_v)); break;
        case 42: _t->setRemrssi(*reinterpret_cast< uint*>(_v)); break;
        case 43: _t->setTxbuf(*reinterpret_cast< uint*>(_v)); break;
        case 44: _t->setNoise(*reinterpret_cast< uint*>(_v)); break;
        case 45: _t->setRemnoise(*reinterpret_cast< uint*>(_v)); break;
        case 46: _t->setArmedState(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VehicleOverview::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VehicleOverview.data,
      qt_meta_data_VehicleOverview,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleOverview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleOverview.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 59;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 59;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VehicleOverview::customModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VehicleOverview::typeChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VehicleOverview::autopilotChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VehicleOverview::baseModeChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VehicleOverview::systemStatusChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VehicleOverview::mavlinkVersionChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VehicleOverview::onboardControlSensorsPresentChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VehicleOverview::onboardControlSensorsEnabledChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void VehicleOverview::onboardControlSensorsHealthChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VehicleOverview::loadChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VehicleOverview::voltageBatteryChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VehicleOverview::dropRateCommChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VehicleOverview::errorsCommChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VehicleOverview::errorsCount1Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VehicleOverview::errorsCount2Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VehicleOverview::errorsCount3Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void VehicleOverview::errorsCount4Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void VehicleOverview::navRollChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void VehicleOverview::navPitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void VehicleOverview::altErrorChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void VehicleOverview::aspdErrorChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void VehicleOverview::xtrackErrorChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void VehicleOverview::navBearingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void VehicleOverview::targetBearingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void VehicleOverview::wpDistChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void VehicleOverview::currentConsumedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void VehicleOverview::energyConsumedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void VehicleOverview::voltageCell1Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void VehicleOverview::voltageCell2Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void VehicleOverview::voltageCell3Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void VehicleOverview::voltageCell4Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void VehicleOverview::voltageCell5Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void VehicleOverview::voltageCell6Changed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void VehicleOverview::currentBatteryChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void VehicleOverview::accuIdChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void VehicleOverview::batteryRemainingChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void VehicleOverview::VccChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void VehicleOverview::VservoChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void VehicleOverview::flagsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void VehicleOverview::rxerrorsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void VehicleOverview::fixedChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void VehicleOverview::rssiChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void VehicleOverview::remrssiChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void VehicleOverview::txbufChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void VehicleOverview::noiseChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void VehicleOverview::remnoiseChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void VehicleOverview::armedStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void VehicleOverview::vibrationXChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void VehicleOverview::vibrationYChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void VehicleOverview::vibrationZChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void VehicleOverview::clipping0Changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void VehicleOverview::clipping1Changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void VehicleOverview::clipping2Changed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void VehicleOverview::ekfFlagsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void VehicleOverview::ekfVelocityVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void VehicleOverview::ekfPosHorizVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void VehicleOverview::ekfPosVertVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void VehicleOverview::ekfCompassVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void VehicleOverview::ekfTerrainAltVarianceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void VehicleOverview::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
