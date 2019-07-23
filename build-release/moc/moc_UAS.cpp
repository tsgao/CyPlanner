/****************************************************************************
** Meta object code from reading C++ file 'UAS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UAS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UAS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UAS_t {
    QByteArrayData data[255];
    char stringdata0[3076];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAS_t qt_meta_stringdata_UAS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "UAS"
QT_MOC_LITERAL(1, 4, 15), // "actuatorChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "UASInterface*"
QT_MOC_LITERAL(4, 35, 3), // "uas"
QT_MOC_LITERAL(5, 39, 12), // "actuatorName"
QT_MOC_LITERAL(6, 52, 3), // "min"
QT_MOC_LITERAL(7, 56, 3), // "max"
QT_MOC_LITERAL(8, 60, 5), // "value"
QT_MOC_LITERAL(9, 66, 12), // "motorChanged"
QT_MOC_LITERAL(10, 79, 9), // "motorName"
QT_MOC_LITERAL(11, 89, 11), // "loadChanged"
QT_MOC_LITERAL(12, 101, 4), // "load"
QT_MOC_LITERAL(13, 106, 12), // "imageStarted"
QT_MOC_LITERAL(14, 119, 9), // "timestamp"
QT_MOC_LITERAL(15, 129, 10), // "imageReady"
QT_MOC_LITERAL(16, 140, 18), // "hilControlsChanged"
QT_MOC_LITERAL(17, 159, 8), // "uint64_t"
QT_MOC_LITERAL(18, 168, 4), // "time"
QT_MOC_LITERAL(19, 173, 12), // "rollAilerons"
QT_MOC_LITERAL(20, 186, 13), // "pitchElevator"
QT_MOC_LITERAL(21, 200, 9), // "yawRudder"
QT_MOC_LITERAL(22, 210, 8), // "throttle"
QT_MOC_LITERAL(23, 219, 7), // "uint8_t"
QT_MOC_LITERAL(24, 227, 10), // "systemMode"
QT_MOC_LITERAL(25, 238, 7), // "navMode"
QT_MOC_LITERAL(26, 246, 19), // "hilActuatorsChanged"
QT_MOC_LITERAL(27, 266, 4), // "act1"
QT_MOC_LITERAL(28, 271, 4), // "act2"
QT_MOC_LITERAL(29, 276, 4), // "act3"
QT_MOC_LITERAL(30, 281, 4), // "act4"
QT_MOC_LITERAL(31, 286, 4), // "act5"
QT_MOC_LITERAL(32, 291, 4), // "act6"
QT_MOC_LITERAL(33, 296, 4), // "act7"
QT_MOC_LITERAL(34, 301, 4), // "act8"
QT_MOC_LITERAL(35, 306, 21), // "servoRawOutputChanged"
QT_MOC_LITERAL(36, 328, 13), // "localXChanged"
QT_MOC_LITERAL(37, 342, 3), // "val"
QT_MOC_LITERAL(38, 346, 4), // "name"
QT_MOC_LITERAL(39, 351, 13), // "localYChanged"
QT_MOC_LITERAL(40, 365, 13), // "localZChanged"
QT_MOC_LITERAL(41, 379, 16), // "longitudeChanged"
QT_MOC_LITERAL(42, 396, 15), // "latitudeChanged"
QT_MOC_LITERAL(43, 412, 19), // "altitudeAMSLChanged"
QT_MOC_LITERAL(44, 432, 23), // "altitudeRelativeChanged"
QT_MOC_LITERAL(45, 456, 11), // "rollChanged"
QT_MOC_LITERAL(46, 468, 12), // "pitchChanged"
QT_MOC_LITERAL(47, 481, 10), // "yawChanged"
QT_MOC_LITERAL(48, 492, 21), // "satelliteCountChanged"
QT_MOC_LITERAL(49, 514, 14), // "gpsHdopChanged"
QT_MOC_LITERAL(50, 529, 13), // "gpsFixChanged"
QT_MOC_LITERAL(51, 543, 21), // "distToWaypointChanged"
QT_MOC_LITERAL(52, 565, 18), // "groundSpeedChanged"
QT_MOC_LITERAL(53, 584, 15), // "airSpeedChanged"
QT_MOC_LITERAL(54, 600, 24), // "bearingToWaypointChanged"
QT_MOC_LITERAL(55, 625, 24), // "protocolStatusMessageRec"
QT_MOC_LITERAL(56, 650, 5), // "title"
QT_MOC_LITERAL(57, 656, 7), // "message"
QT_MOC_LITERAL(58, 664, 15), // "valueChangedRec"
QT_MOC_LITERAL(59, 680, 5), // "uasId"
QT_MOC_LITERAL(60, 686, 4), // "unit"
QT_MOC_LITERAL(61, 691, 4), // "msec"
QT_MOC_LITERAL(62, 696, 22), // "textMessageReceivedRec"
QT_MOC_LITERAL(63, 719, 5), // "uasid"
QT_MOC_LITERAL(64, 725, 11), // "componentid"
QT_MOC_LITERAL(65, 737, 8), // "severity"
QT_MOC_LITERAL(66, 746, 4), // "text"
QT_MOC_LITERAL(67, 751, 21), // "receiveLossChangedRec"
QT_MOC_LITERAL(68, 773, 2), // "id"
QT_MOC_LITERAL(69, 776, 16), // "setAutopilotType"
QT_MOC_LITERAL(70, 793, 6), // "apType"
QT_MOC_LITERAL(71, 800, 13), // "setSystemType"
QT_MOC_LITERAL(72, 814, 10), // "systemType"
QT_MOC_LITERAL(73, 825, 11), // "setAirframe"
QT_MOC_LITERAL(74, 837, 8), // "airframe"
QT_MOC_LITERAL(75, 846, 10), // "setUASName"
QT_MOC_LITERAL(76, 857, 14), // "executeCommand"
QT_MOC_LITERAL(77, 872, 7), // "MAV_CMD"
QT_MOC_LITERAL(78, 880, 7), // "command"
QT_MOC_LITERAL(79, 888, 12), // "confirmation"
QT_MOC_LITERAL(80, 901, 6), // "param1"
QT_MOC_LITERAL(81, 908, 6), // "param2"
QT_MOC_LITERAL(82, 915, 6), // "param3"
QT_MOC_LITERAL(83, 922, 6), // "param4"
QT_MOC_LITERAL(84, 929, 6), // "param5"
QT_MOC_LITERAL(85, 936, 6), // "param6"
QT_MOC_LITERAL(86, 943, 6), // "param7"
QT_MOC_LITERAL(87, 950, 9), // "component"
QT_MOC_LITERAL(88, 960, 17), // "executeCommandAck"
QT_MOC_LITERAL(89, 978, 3), // "num"
QT_MOC_LITERAL(90, 982, 7), // "success"
QT_MOC_LITERAL(91, 990, 15), // "setBatterySpecs"
QT_MOC_LITERAL(92, 1006, 5), // "specs"
QT_MOC_LITERAL(93, 1012, 15), // "getBatterySpecs"
QT_MOC_LITERAL(94, 1028, 6), // "launch"
QT_MOC_LITERAL(95, 1035, 4), // "home"
QT_MOC_LITERAL(96, 1040, 4), // "land"
QT_MOC_LITERAL(97, 1045, 6), // "pairRX"
QT_MOC_LITERAL(98, 1052, 6), // "rxType"
QT_MOC_LITERAL(99, 1059, 9), // "rxSubType"
QT_MOC_LITERAL(100, 1069, 4), // "halt"
QT_MOC_LITERAL(101, 1074, 2), // "go"
QT_MOC_LITERAL(102, 1077, 19), // "enableHilFlightGear"
QT_MOC_LITERAL(103, 1097, 6), // "enable"
QT_MOC_LITERAL(104, 1104, 7), // "options"
QT_MOC_LITERAL(105, 1112, 9), // "sensorHil"
QT_MOC_LITERAL(106, 1122, 13), // "configuration"
QT_MOC_LITERAL(107, 1136, 15), // "enableHilJSBSim"
QT_MOC_LITERAL(108, 1152, 12), // "sendHilState"
QT_MOC_LITERAL(109, 1165, 7), // "time_us"
QT_MOC_LITERAL(110, 1173, 4), // "roll"
QT_MOC_LITERAL(111, 1178, 5), // "pitch"
QT_MOC_LITERAL(112, 1184, 3), // "yaw"
QT_MOC_LITERAL(113, 1188, 16), // "rollRotationRate"
QT_MOC_LITERAL(114, 1205, 17), // "pitchRotationRate"
QT_MOC_LITERAL(115, 1223, 15), // "yawRotationRate"
QT_MOC_LITERAL(116, 1239, 3), // "lat"
QT_MOC_LITERAL(117, 1243, 3), // "lon"
QT_MOC_LITERAL(118, 1247, 3), // "alt"
QT_MOC_LITERAL(119, 1251, 2), // "vx"
QT_MOC_LITERAL(120, 1254, 2), // "vy"
QT_MOC_LITERAL(121, 1257, 2), // "vz"
QT_MOC_LITERAL(122, 1260, 12), // "ind_airspeed"
QT_MOC_LITERAL(123, 1273, 13), // "true_airspeed"
QT_MOC_LITERAL(124, 1287, 4), // "xacc"
QT_MOC_LITERAL(125, 1292, 4), // "yacc"
QT_MOC_LITERAL(126, 1297, 4), // "zacc"
QT_MOC_LITERAL(127, 1302, 18), // "sendHilGroundTruth"
QT_MOC_LITERAL(128, 1321, 14), // "sendHilSensors"
QT_MOC_LITERAL(129, 1336, 9), // "rollspeed"
QT_MOC_LITERAL(130, 1346, 10), // "pitchspeed"
QT_MOC_LITERAL(131, 1357, 8), // "yawspeed"
QT_MOC_LITERAL(132, 1366, 4), // "xmag"
QT_MOC_LITERAL(133, 1371, 4), // "ymag"
QT_MOC_LITERAL(134, 1376, 4), // "zmag"
QT_MOC_LITERAL(135, 1381, 12), // "abs_pressure"
QT_MOC_LITERAL(136, 1394, 13), // "diff_pressure"
QT_MOC_LITERAL(137, 1408, 12), // "pressure_alt"
QT_MOC_LITERAL(138, 1421, 11), // "temperature"
QT_MOC_LITERAL(139, 1433, 14), // "fields_changed"
QT_MOC_LITERAL(140, 1448, 10), // "sendHilGps"
QT_MOC_LITERAL(141, 1459, 8), // "fix_type"
QT_MOC_LITERAL(142, 1468, 3), // "eph"
QT_MOC_LITERAL(143, 1472, 3), // "epv"
QT_MOC_LITERAL(144, 1476, 3), // "vel"
QT_MOC_LITERAL(145, 1480, 2), // "vn"
QT_MOC_LITERAL(146, 1483, 2), // "ve"
QT_MOC_LITERAL(147, 1486, 2), // "vd"
QT_MOC_LITERAL(148, 1489, 3), // "cog"
QT_MOC_LITERAL(149, 1493, 10), // "satellites"
QT_MOC_LITERAL(150, 1504, 8), // "startHil"
QT_MOC_LITERAL(151, 1513, 7), // "stopHil"
QT_MOC_LITERAL(152, 1521, 13), // "emergencySTOP"
QT_MOC_LITERAL(153, 1535, 13), // "emergencyKILL"
QT_MOC_LITERAL(154, 1549, 8), // "shutdown"
QT_MOC_LITERAL(155, 1558, 6), // "reboot"
QT_MOC_LITERAL(156, 1565, 17), // "setTargetPosition"
QT_MOC_LITERAL(157, 1583, 1), // "x"
QT_MOC_LITERAL(158, 1585, 1), // "y"
QT_MOC_LITERAL(159, 1587, 1), // "z"
QT_MOC_LITERAL(160, 1589, 17), // "startLowBattAlarm"
QT_MOC_LITERAL(161, 1607, 16), // "stopLowBattAlarm"
QT_MOC_LITERAL(162, 1624, 9), // "armSystem"
QT_MOC_LITERAL(163, 1634, 12), // "disarmSystem"
QT_MOC_LITERAL(164, 1647, 16), // "toggleArmedState"
QT_MOC_LITERAL(165, 1664, 12), // "goAutonomous"
QT_MOC_LITERAL(166, 1677, 8), // "goManual"
QT_MOC_LITERAL(167, 1686, 14), // "toggleAutonomy"
QT_MOC_LITERAL(168, 1701, 24), // "setManualControlCommands"
QT_MOC_LITERAL(169, 1726, 6), // "thrust"
QT_MOC_LITERAL(170, 1733, 4), // "xHat"
QT_MOC_LITERAL(171, 1738, 4), // "yHat"
QT_MOC_LITERAL(172, 1743, 7), // "buttons"
QT_MOC_LITERAL(173, 1751, 13), // "receiveButton"
QT_MOC_LITERAL(174, 1765, 11), // "buttonIndex"
QT_MOC_LITERAL(175, 1777, 7), // "addLink"
QT_MOC_LITERAL(176, 1785, 14), // "LinkInterface*"
QT_MOC_LITERAL(177, 1800, 4), // "link"
QT_MOC_LITERAL(178, 1805, 10), // "removeLink"
QT_MOC_LITERAL(179, 1816, 6), // "object"
QT_MOC_LITERAL(180, 1823, 14), // "receiveMessage"
QT_MOC_LITERAL(181, 1838, 17), // "mavlink_message_t"
QT_MOC_LITERAL(182, 1856, 11), // "sendMessage"
QT_MOC_LITERAL(183, 1868, 14), // "forwardMessage"
QT_MOC_LITERAL(184, 1883, 11), // "setSelected"
QT_MOC_LITERAL(185, 1895, 7), // "setMode"
QT_MOC_LITERAL(186, 1903, 4), // "mode"
QT_MOC_LITERAL(187, 1908, 11), // "newBaseMode"
QT_MOC_LITERAL(188, 1920, 8), // "uint32_t"
QT_MOC_LITERAL(189, 1929, 13), // "newCustomMode"
QT_MOC_LITERAL(190, 1943, 10), // "setModeArm"
QT_MOC_LITERAL(191, 1954, 17), // "requestParameters"
QT_MOC_LITERAL(192, 1972, 16), // "requestParameter"
QT_MOC_LITERAL(193, 1989, 9), // "parameter"
QT_MOC_LITERAL(194, 1999, 12), // "setParameter"
QT_MOC_LITERAL(195, 2012, 6), // "compId"
QT_MOC_LITERAL(196, 2019, 7), // "paramId"
QT_MOC_LITERAL(197, 2027, 24), // "writeParametersToStorage"
QT_MOC_LITERAL(198, 2052, 25), // "readParametersFromStorage"
QT_MOC_LITERAL(199, 2078, 17), // "getParameterNames"
QT_MOC_LITERAL(200, 2096, 14), // "QList<QString>"
QT_MOC_LITERAL(201, 2111, 15), // "getComponentIds"
QT_MOC_LITERAL(202, 2127, 10), // "QList<int>"
QT_MOC_LITERAL(203, 2138, 25), // "enableAllDataTransmission"
QT_MOC_LITERAL(204, 2164, 4), // "rate"
QT_MOC_LITERAL(205, 2169, 31), // "enableRawSensorDataTransmission"
QT_MOC_LITERAL(206, 2201, 38), // "enableExtendedSystemStatusTra..."
QT_MOC_LITERAL(207, 2240, 31), // "enableRCChannelDataTransmission"
QT_MOC_LITERAL(208, 2272, 35), // "enableRawControllerDataTransm..."
QT_MOC_LITERAL(209, 2308, 26), // "enablePositionTransmission"
QT_MOC_LITERAL(210, 2335, 24), // "enableExtra1Transmission"
QT_MOC_LITERAL(211, 2360, 24), // "enableExtra2Transmission"
QT_MOC_LITERAL(212, 2385, 24), // "enableExtra3Transmission"
QT_MOC_LITERAL(213, 2410, 11), // "updateState"
QT_MOC_LITERAL(214, 2422, 34), // "setLocalOriginAtCurrentGPSPos..."
QT_MOC_LITERAL(215, 2457, 15), // "setHomePosition"
QT_MOC_LITERAL(216, 2473, 24), // "setLocalPositionSetpoint"
QT_MOC_LITERAL(217, 2498, 22), // "setLocalPositionOffset"
QT_MOC_LITERAL(218, 2521, 28), // "startRadioControlCalibration"
QT_MOC_LITERAL(219, 2550, 5), // "param"
QT_MOC_LITERAL(220, 2556, 26), // "endRadioControlCalibration"
QT_MOC_LITERAL(221, 2583, 28), // "startMagnetometerCalibration"
QT_MOC_LITERAL(222, 2612, 25), // "startGyroscopeCalibration"
QT_MOC_LITERAL(223, 2638, 24), // "startPressureCalibration"
QT_MOC_LITERAL(224, 2663, 26), // "startCompassMotCalibration"
QT_MOC_LITERAL(225, 2690, 18), // "startDataRecording"
QT_MOC_LITERAL(226, 2709, 17), // "stopDataRecording"
QT_MOC_LITERAL(227, 2727, 14), // "deleteSettings"
QT_MOC_LITERAL(228, 2742, 14), // "logRequestList"
QT_MOC_LITERAL(229, 2757, 8), // "uint16_t"
QT_MOC_LITERAL(230, 2766, 5), // "start"
QT_MOC_LITERAL(231, 2772, 3), // "end"
QT_MOC_LITERAL(232, 2776, 14), // "logRequestData"
QT_MOC_LITERAL(233, 2791, 3), // "ofs"
QT_MOC_LITERAL(234, 2795, 5), // "count"
QT_MOC_LITERAL(235, 2801, 11), // "logEraseAll"
QT_MOC_LITERAL(236, 2813, 13), // "logRequestEnd"
QT_MOC_LITERAL(237, 2827, 13), // "sendHeartbeat"
QT_MOC_LITERAL(238, 2841, 25), // "requestNextParamFromQueue"
QT_MOC_LITERAL(239, 2867, 13), // "writeSettings"
QT_MOC_LITERAL(240, 2881, 12), // "readSettings"
QT_MOC_LITERAL(241, 2894, 6), // "localX"
QT_MOC_LITERAL(242, 2901, 6), // "localY"
QT_MOC_LITERAL(243, 2908, 6), // "localZ"
QT_MOC_LITERAL(244, 2915, 8), // "latitude"
QT_MOC_LITERAL(245, 2924, 9), // "longitude"
QT_MOC_LITERAL(246, 2934, 14), // "satelliteCount"
QT_MOC_LITERAL(247, 2949, 20), // "isLocalPositionKnown"
QT_MOC_LITERAL(248, 2970, 21), // "isGlobalPositionKnown"
QT_MOC_LITERAL(249, 2992, 14), // "distToWaypoint"
QT_MOC_LITERAL(250, 3007, 8), // "airSpeed"
QT_MOC_LITERAL(251, 3016, 11), // "groundSpeed"
QT_MOC_LITERAL(252, 3028, 17), // "bearingToWaypoint"
QT_MOC_LITERAL(253, 3046, 12), // "altitudeAMSL"
QT_MOC_LITERAL(254, 3059, 16) // "altitudeRelative"

    },
    "UAS\0actuatorChanged\0\0UASInterface*\0"
    "uas\0actuatorName\0min\0max\0value\0"
    "motorChanged\0motorName\0loadChanged\0"
    "load\0imageStarted\0timestamp\0imageReady\0"
    "hilControlsChanged\0uint64_t\0time\0"
    "rollAilerons\0pitchElevator\0yawRudder\0"
    "throttle\0uint8_t\0systemMode\0navMode\0"
    "hilActuatorsChanged\0act1\0act2\0act3\0"
    "act4\0act5\0act6\0act7\0act8\0servoRawOutputChanged\0"
    "localXChanged\0val\0name\0localYChanged\0"
    "localZChanged\0longitudeChanged\0"
    "latitudeChanged\0altitudeAMSLChanged\0"
    "altitudeRelativeChanged\0rollChanged\0"
    "pitchChanged\0yawChanged\0satelliteCountChanged\0"
    "gpsHdopChanged\0gpsFixChanged\0"
    "distToWaypointChanged\0groundSpeedChanged\0"
    "airSpeedChanged\0bearingToWaypointChanged\0"
    "protocolStatusMessageRec\0title\0message\0"
    "valueChangedRec\0uasId\0unit\0msec\0"
    "textMessageReceivedRec\0uasid\0componentid\0"
    "severity\0text\0receiveLossChangedRec\0"
    "id\0setAutopilotType\0apType\0setSystemType\0"
    "systemType\0setAirframe\0airframe\0"
    "setUASName\0executeCommand\0MAV_CMD\0"
    "command\0confirmation\0param1\0param2\0"
    "param3\0param4\0param5\0param6\0param7\0"
    "component\0executeCommandAck\0num\0success\0"
    "setBatterySpecs\0specs\0getBatterySpecs\0"
    "launch\0home\0land\0pairRX\0rxType\0rxSubType\0"
    "halt\0go\0enableHilFlightGear\0enable\0"
    "options\0sensorHil\0configuration\0"
    "enableHilJSBSim\0sendHilState\0time_us\0"
    "roll\0pitch\0yaw\0rollRotationRate\0"
    "pitchRotationRate\0yawRotationRate\0lat\0"
    "lon\0alt\0vx\0vy\0vz\0ind_airspeed\0"
    "true_airspeed\0xacc\0yacc\0zacc\0"
    "sendHilGroundTruth\0sendHilSensors\0"
    "rollspeed\0pitchspeed\0yawspeed\0xmag\0"
    "ymag\0zmag\0abs_pressure\0diff_pressure\0"
    "pressure_alt\0temperature\0fields_changed\0"
    "sendHilGps\0fix_type\0eph\0epv\0vel\0vn\0"
    "ve\0vd\0cog\0satellites\0startHil\0stopHil\0"
    "emergencySTOP\0emergencyKILL\0shutdown\0"
    "reboot\0setTargetPosition\0x\0y\0z\0"
    "startLowBattAlarm\0stopLowBattAlarm\0"
    "armSystem\0disarmSystem\0toggleArmedState\0"
    "goAutonomous\0goManual\0toggleAutonomy\0"
    "setManualControlCommands\0thrust\0xHat\0"
    "yHat\0buttons\0receiveButton\0buttonIndex\0"
    "addLink\0LinkInterface*\0link\0removeLink\0"
    "object\0receiveMessage\0mavlink_message_t\0"
    "sendMessage\0forwardMessage\0setSelected\0"
    "setMode\0mode\0newBaseMode\0uint32_t\0"
    "newCustomMode\0setModeArm\0requestParameters\0"
    "requestParameter\0parameter\0setParameter\0"
    "compId\0paramId\0writeParametersToStorage\0"
    "readParametersFromStorage\0getParameterNames\0"
    "QList<QString>\0getComponentIds\0"
    "QList<int>\0enableAllDataTransmission\0"
    "rate\0enableRawSensorDataTransmission\0"
    "enableExtendedSystemStatusTransmission\0"
    "enableRCChannelDataTransmission\0"
    "enableRawControllerDataTransmission\0"
    "enablePositionTransmission\0"
    "enableExtra1Transmission\0"
    "enableExtra2Transmission\0"
    "enableExtra3Transmission\0updateState\0"
    "setLocalOriginAtCurrentGPSPosition\0"
    "setHomePosition\0setLocalPositionSetpoint\0"
    "setLocalPositionOffset\0"
    "startRadioControlCalibration\0param\0"
    "endRadioControlCalibration\0"
    "startMagnetometerCalibration\0"
    "startGyroscopeCalibration\0"
    "startPressureCalibration\0"
    "startCompassMotCalibration\0"
    "startDataRecording\0stopDataRecording\0"
    "deleteSettings\0logRequestList\0uint16_t\0"
    "start\0end\0logRequestData\0ofs\0count\0"
    "logEraseAll\0logRequestEnd\0sendHeartbeat\0"
    "requestNextParamFromQueue\0writeSettings\0"
    "readSettings\0localX\0localY\0localZ\0"
    "latitude\0longitude\0satelliteCount\0"
    "isLocalPositionKnown\0isGlobalPositionKnown\0"
    "distToWaypoint\0airSpeed\0groundSpeed\0"
    "bearingToWaypoint\0altitudeAMSL\0"
    "altitudeRelative"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     117,   14, // methods
      17, 1186, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  599,    2, 0x06 /* Public */,
       9,    5,  610,    2, 0x06 /* Public */,
      11,    2,  621,    2, 0x06 /* Public */,
      13,    1,  626,    2, 0x06 /* Public */,
      15,    1,  629,    2, 0x06 /* Public */,
      16,    7,  632,    2, 0x06 /* Public */,
      26,    9,  647,    2, 0x06 /* Public */,
      35,    9,  666,    2, 0x06 /* Public */,
      36,    2,  685,    2, 0x06 /* Public */,
      39,    2,  690,    2, 0x06 /* Public */,
      40,    2,  695,    2, 0x06 /* Public */,
      41,    2,  700,    2, 0x06 /* Public */,
      42,    2,  705,    2, 0x06 /* Public */,
      43,    2,  710,    2, 0x06 /* Public */,
      44,    2,  715,    2, 0x06 /* Public */,
      45,    2,  720,    2, 0x06 /* Public */,
      46,    2,  725,    2, 0x06 /* Public */,
      47,    2,  730,    2, 0x06 /* Public */,
      48,    2,  735,    2, 0x06 /* Public */,
      49,    2,  740,    2, 0x06 /* Public */,
      50,    2,  745,    2, 0x06 /* Public */,
      51,    2,  750,    2, 0x06 /* Public */,
      52,    2,  755,    2, 0x06 /* Public */,
      53,    2,  760,    2, 0x06 /* Public */,
      54,    2,  765,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    2,  770,    2, 0x0a /* Public */,
      58,    5,  775,    2, 0x0a /* Public */,
      62,    4,  786,    2, 0x0a /* Public */,
      67,    2,  795,    2, 0x0a /* Public */,
      69,    1,  800,    2, 0x0a /* Public */,
      71,    1,  803,    2, 0x0a /* Public */,
      73,    1,  806,    2, 0x0a /* Public */,
      75,    1,  809,    2, 0x0a /* Public */,
      76,    1,  812,    2, 0x0a /* Public */,
      76,   10,  815,    2, 0x0a /* Public */,
      88,    2,  836,    2, 0x0a /* Public */,
      91,    1,  841,    2, 0x0a /* Public */,
      93,    0,  844,    2, 0x0a /* Public */,
      94,    0,  845,    2, 0x0a /* Public */,
      95,    0,  846,    2, 0x0a /* Public */,
      96,    0,  847,    2, 0x0a /* Public */,
      97,    2,  848,    2, 0x0a /* Public */,
     100,    0,  853,    2, 0x0a /* Public */,
     101,    0,  854,    2, 0x0a /* Public */,
     102,    4,  855,    2, 0x0a /* Public */,
     107,    2,  864,    2, 0x0a /* Public */,
     108,   18,  869,    2, 0x0a /* Public */,
     127,   18,  906,    2, 0x0a /* Public */,
     128,   15,  943,    2, 0x0a /* Public */,
     140,   13,  974,    2, 0x0a /* Public */,
     150,    0, 1001,    2, 0x0a /* Public */,
     151,    0, 1002,    2, 0x0a /* Public */,
     152,    0, 1003,    2, 0x0a /* Public */,
     153,    0, 1004,    2, 0x0a /* Public */,
     154,    0, 1005,    2, 0x0a /* Public */,
     155,    0, 1006,    2, 0x0a /* Public */,
     156,    4, 1007,    2, 0x0a /* Public */,
     160,    0, 1016,    2, 0x0a /* Public */,
     161,    0, 1017,    2, 0x0a /* Public */,
     162,    0, 1018,    2, 0x0a /* Public */,
     163,    0, 1019,    2, 0x0a /* Public */,
     164,    0, 1020,    2, 0x0a /* Public */,
     165,    0, 1021,    2, 0x0a /* Public */,
     166,    0, 1022,    2, 0x0a /* Public */,
     167,    0, 1023,    2, 0x0a /* Public */,
     168,    7, 1024,    2, 0x0a /* Public */,
     173,    1, 1039,    2, 0x0a /* Public */,
     175,    1, 1042,    2, 0x0a /* Public */,
     178,    1, 1045,    2, 0x0a /* Public */,
     180,    2, 1048,    2, 0x0a /* Public */,
     182,    2, 1053,    2, 0x0a /* Public */,
     182,    1, 1058,    2, 0x0a /* Public */,
     183,    1, 1061,    2, 0x0a /* Public */,
     184,    0, 1064,    2, 0x0a /* Public */,
     185,    1, 1065,    2, 0x0a /* Public */,
     185,    2, 1068,    2, 0x0a /* Public */,
     190,    2, 1073,    2, 0x0a /* Public */,
     191,    0, 1078,    2, 0x0a /* Public */,
     192,    2, 1079,    2, 0x0a /* Public */,
     192,    2, 1084,    2, 0x0a /* Public */,
     194,    3, 1089,    2, 0x0a /* Public */,
     197,    0, 1096,    2, 0x0a /* Public */,
     198,    0, 1097,    2, 0x0a /* Public */,
     199,    1, 1098,    2, 0x0a /* Public */,
     201,    0, 1101,    2, 0x0a /* Public */,
     203,    1, 1102,    2, 0x0a /* Public */,
     205,    1, 1105,    2, 0x0a /* Public */,
     206,    1, 1108,    2, 0x0a /* Public */,
     207,    1, 1111,    2, 0x0a /* Public */,
     208,    1, 1114,    2, 0x0a /* Public */,
     209,    1, 1117,    2, 0x0a /* Public */,
     210,    1, 1120,    2, 0x0a /* Public */,
     211,    1, 1123,    2, 0x0a /* Public */,
     212,    1, 1126,    2, 0x0a /* Public */,
     213,    0, 1129,    2, 0x0a /* Public */,
     214,    0, 1130,    2, 0x0a /* Public */,
     215,    3, 1131,    2, 0x0a /* Public */,
     216,    4, 1138,    2, 0x0a /* Public */,
     217,    4, 1147,    2, 0x0a /* Public */,
     218,    1, 1156,    2, 0x0a /* Public */,
     218,    0, 1159,    2, 0x2a /* Public | MethodCloned */,
     220,    0, 1160,    2, 0x0a /* Public */,
     221,    0, 1161,    2, 0x0a /* Public */,
     222,    0, 1162,    2, 0x0a /* Public */,
     223,    0, 1163,    2, 0x0a /* Public */,
     224,    0, 1164,    2, 0x0a /* Public */,
     225,    0, 1165,    2, 0x0a /* Public */,
     226,    0, 1166,    2, 0x0a /* Public */,
     227,    0, 1167,    2, 0x0a /* Public */,
     228,    2, 1168,    2, 0x0a /* Public */,
     232,    3, 1173,    2, 0x0a /* Public */,
     235,    0, 1180,    2, 0x0a /* Public */,
     236,    0, 1181,    2, 0x0a /* Public */,
     237,    0, 1182,    2, 0x0a /* Public */,
     238,    0, 1183,    2, 0x09 /* Protected */,
     239,    0, 1184,    2, 0x09 /* Protected */,
     240,    0, 1185,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,   10,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,   12,
    QMetaType::Void, QMetaType::ULongLong,   14,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 23, 0x80000000 | 23,   18,   19,   20,   21,   22,   24,   25,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   27,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   18,   27,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   37,   38,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   56,   57,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   59,   38,   60,    8,   61,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   63,   64,   65,   66,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   68,    8,
    QMetaType::Void, QMetaType::Int,   70,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, QMetaType::Int,   74,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, 0x80000000 | 77, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   78,   79,   80,   81,   82,   83,   84,   85,   86,   87,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   89,   90,
    QMetaType::Void, QMetaType::QString,   92,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   98,   99,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::QObjectStar,  103,  104,  105,  106,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,  103,  104,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  109,  110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  109,  110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  120,  121,  122,  123,  124,  125,  126,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,  109,  124,  125,  126,  129,  130,  131,  132,  133,  134,  135,  136,  137,  138,  139,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,  109,  116,  117,  118,  141,  142,  143,  144,  145,  146,  147,  148,  149,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  157,  158,  159,  112,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::Int,  110,  111,  112,  169,  170,  171,  172,
    QMetaType::Void, QMetaType::Int,  174,
    QMetaType::Void, 0x80000000 | 176,  177,
    QMetaType::Void, QMetaType::QObjectStar,  179,
    QMetaType::Void, 0x80000000 | 176, 0x80000000 | 181,  177,   57,
    QMetaType::Void, 0x80000000 | 176, 0x80000000 | 181,  177,   57,
    QMetaType::Void, 0x80000000 | 181,   57,
    QMetaType::Void, 0x80000000 | 181,   57,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  186,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 188,  187,  189,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 188,  187,  189,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   87,  193,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   87,   68,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,  195,  196,    8,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 200, QMetaType::Int,   87,
    0x80000000 | 202,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void, QMetaType::Int,  204,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,  116,  117,  118,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  157,  158,  159,  112,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  157,  158,  159,  112,
    QMetaType::Void, QMetaType::Int,  219,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 229, 0x80000000 | 229,  230,  231,
    QMetaType::Void, 0x80000000 | 229, 0x80000000 | 188, 0x80000000 | 188,   68,  233,  234,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
     241, QMetaType::Double, 0x00495103,
     242, QMetaType::Double, 0x00495103,
     243, QMetaType::Double, 0x00495103,
     244, QMetaType::Double, 0x00495103,
     245, QMetaType::Double, 0x00495103,
     246, QMetaType::Double, 0x00495103,
     247, QMetaType::Bool, 0x00095001,
     248, QMetaType::Bool, 0x00095001,
     110, QMetaType::Double, 0x00495103,
     111, QMetaType::Double, 0x00495103,
     112, QMetaType::Double, 0x00495103,
     249, QMetaType::Double, 0x00495103,
     250, QMetaType::Double, 0x00495003,
     251, QMetaType::Double, 0x00495103,
     252, QMetaType::Double, 0x00495103,
     253, QMetaType::Double, 0x00495103,
     254, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       8,
       9,
      10,
      12,
      11,
      18,
       0,
       0,
      15,
      16,
      17,
      21,
      23,
      22,
      24,
      13,
      14,

       0        // eod
};

void UAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UAS *_t = static_cast<UAS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actuatorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 1: _t->motorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 2: _t->loadChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->imageStarted((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: _t->imageReady((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->hilControlsChanged((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< uint8_t(*)>(_a[6])),(*reinterpret_cast< uint8_t(*)>(_a[7]))); break;
        case 6: _t->hilActuatorsChanged((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 7: _t->servoRawOutputChanged((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 8: _t->localXChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->localYChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->localZChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->longitudeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->latitudeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->altitudeAMSLChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->altitudeRelativeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->rollChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->satelliteCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->gpsHdopChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->gpsFixChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->distToWaypointChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->groundSpeedChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->airSpeedChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->bearingToWaypointChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 25: _t->protocolStatusMessageRec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->valueChangedRec((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 27: _t->textMessageReceivedRec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 28: _t->receiveLossChangedRec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 29: _t->setAutopilotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setSystemType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setAirframe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setUASName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1]))); break;
        case 34: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 35: _t->executeCommandAck((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->setBatterySpecs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: { QString _r = _t->getBatterySpecs();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->launch(); break;
        case 39: _t->home(); break;
        case 40: _t->land(); break;
        case 41: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->halt(); break;
        case 43: _t->go(); break;
        case 44: _t->enableHilFlightGear((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        case 45: _t->enableHilJSBSim((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 46: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 47: _t->sendHilGroundTruth((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 48: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 49: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 50: _t->startHil(); break;
        case 51: _t->stopHil(); break;
        case 52: _t->emergencySTOP(); break;
        case 53: { bool _r = _t->emergencyKILL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->shutdown(); break;
        case 55: _t->reboot(); break;
        case 56: _t->setTargetPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 57: _t->startLowBattAlarm(); break;
        case 58: _t->stopLowBattAlarm(); break;
        case 59: _t->armSystem(); break;
        case 60: _t->disarmSystem(); break;
        case 61: _t->toggleArmedState(); break;
        case 62: _t->goAutonomous(); break;
        case 63: _t->goManual(); break;
        case 64: _t->toggleAutonomy(); break;
        case 65: _t->setManualControlCommands((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 66: _t->receiveButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 68: _t->removeLink((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 69: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 70: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 71: _t->sendMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 72: _t->forwardMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 73: _t->setSelected(); break;
        case 74: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->setMode((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 76: _t->setModeArm((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 77: _t->requestParameters(); break;
        case 78: _t->requestParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 79: _t->requestParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 80: _t->setParameter((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 81: _t->writeParametersToStorage(); break;
        case 82: _t->readParametersFromStorage(); break;
        case 83: { QList<QString> _r = _t->getParameterNames((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 84: { QList<int> _r = _t->getComponentIds();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->enableAllDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->enableRawSensorDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: _t->enableExtendedSystemStatusTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->enableRCChannelDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->enableRawControllerDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->enablePositionTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->enableExtra1Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->enableExtra2Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: _t->enableExtra3Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->updateState(); break;
        case 95: _t->setLocalOriginAtCurrentGPSPosition(); break;
        case 96: _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 97: _t->setLocalPositionSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 98: _t->setLocalPositionOffset((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 99: _t->startRadioControlCalibration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 100: _t->startRadioControlCalibration(); break;
        case 101: _t->endRadioControlCalibration(); break;
        case 102: _t->startMagnetometerCalibration(); break;
        case 103: _t->startGyroscopeCalibration(); break;
        case 104: _t->startPressureCalibration(); break;
        case 105: _t->startCompassMotCalibration(); break;
        case 106: _t->startDataRecording(); break;
        case 107: _t->stopDataRecording(); break;
        case 108: _t->deleteSettings(); break;
        case 109: _t->logRequestList((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 110: _t->logRequestData((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 111: _t->logEraseAll(); break;
        case 112: _t->logRequestEnd(); break;
        case 113: _t->sendHeartbeat(); break;
        case 114: _t->requestNextParamFromQueue(); break;
        case 115: _t->writeSettings(); break;
        case 116: _t->readSettings(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 70:
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
            typedef void (UAS::*_t)(UASInterface * , QString , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::actuatorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * , QString , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::motorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::loadChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::imageStarted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::imageReady)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(uint64_t , float , float , float , float , uint8_t , uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::hilControlsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(uint64_t , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::hilActuatorsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(uint64_t , float , float , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::servoRawOutputChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::localXChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::localYChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::localZChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::longitudeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::latitudeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::altitudeAMSLChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::altitudeRelativeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::rollChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::pitchChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::yawChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::satelliteCountChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::gpsHdopChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::gpsFixChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::distToWaypointChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::groundSpeedChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::airSpeedChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::bearingToWaypointChanged)) {
                *result = 24;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UAS *_t = static_cast<UAS *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getLocalX(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getLocalY(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getLocalZ(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getLatitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getLongitude(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getSatelliteCount(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->localPositionKnown(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->globalPositionKnown(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getRoll(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getPitch(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getYaw(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->getDistToWaypoint(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->getGroundSpeed(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->getGroundSpeed(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->getBearingToWaypoint(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->getAltitudeAMSL(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->getAltitudeRelative(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UAS *_t = static_cast<UAS *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalX(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setLocalY(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLocalZ(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setLatitude(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setLongitude(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setSatelliteCount(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setRoll(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setPitch(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setYaw(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setDistToWaypoint(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setGroundSpeed(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setGroundSpeed(*reinterpret_cast< double*>(_v)); break;
        case 14: _t->setBearingToWaypoint(*reinterpret_cast< double*>(_v)); break;
        case 15: _t->setAltitudeAMSL(*reinterpret_cast< double*>(_v)); break;
        case 16: _t->setAltitudeRelative(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject UAS::staticMetaObject = {
    { &UASInterface::staticMetaObject, qt_meta_stringdata_UAS.data,
      qt_meta_data_UAS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UAS.stringdata0))
        return static_cast<void*>(this);
    return UASInterface::qt_metacast(_clname);
}

int UAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UAS::actuatorChanged(UASInterface * _t1, QString _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UAS::motorChanged(UASInterface * _t1, QString _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UAS::loadChanged(UASInterface * _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UAS::imageStarted(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UAS::imageReady(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UAS::hilControlsChanged(uint64_t _t1, float _t2, float _t3, float _t4, float _t5, uint8_t _t6, uint8_t _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UAS::hilActuatorsChanged(uint64_t _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UAS::servoRawOutputChanged(uint64_t _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UAS::localXChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UAS::localYChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UAS::localZChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UAS::longitudeChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UAS::latitudeChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UAS::altitudeAMSLChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UAS::altitudeRelativeChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UAS::rollChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UAS::pitchChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UAS::yawChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void UAS::satelliteCountChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void UAS::gpsHdopChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void UAS::gpsFixChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void UAS::distToWaypointChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void UAS::groundSpeedChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void UAS::airSpeedChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void UAS::bearingToWaypointChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
