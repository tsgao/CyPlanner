/****************************************************************************
** Meta object code from reading C++ file 'UASInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASInterface_t {
    QByteArrayData data[338];
    char stringdata0[4411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASInterface_t qt_meta_stringdata_UASInterface = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UASInterface"
QT_MOC_LITERAL(1, 13, 13), // "statusChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "stateFlag"
QT_MOC_LITERAL(4, 38, 16), // "componentCreated"
QT_MOC_LITERAL(5, 55, 3), // "uas"
QT_MOC_LITERAL(6, 59, 9), // "component"
QT_MOC_LITERAL(7, 69, 4), // "name"
QT_MOC_LITERAL(8, 74, 13), // "UASInterface*"
QT_MOC_LITERAL(9, 88, 6), // "status"
QT_MOC_LITERAL(10, 95, 11), // "description"
QT_MOC_LITERAL(11, 107, 13), // "systemRemoved"
QT_MOC_LITERAL(12, 121, 8), // "poiFound"
QT_MOC_LITERAL(13, 130, 4), // "type"
QT_MOC_LITERAL(14, 135, 10), // "colorIndex"
QT_MOC_LITERAL(15, 146, 7), // "message"
QT_MOC_LITERAL(16, 154, 1), // "x"
QT_MOC_LITERAL(17, 156, 1), // "y"
QT_MOC_LITERAL(18, 158, 1), // "z"
QT_MOC_LITERAL(19, 160, 18), // "poiConnectionFound"
QT_MOC_LITERAL(20, 179, 2), // "x1"
QT_MOC_LITERAL(21, 182, 2), // "y1"
QT_MOC_LITERAL(22, 185, 2), // "z1"
QT_MOC_LITERAL(23, 188, 2), // "x2"
QT_MOC_LITERAL(24, 191, 2), // "y2"
QT_MOC_LITERAL(25, 194, 2), // "z2"
QT_MOC_LITERAL(26, 197, 19), // "textMessageReceived"
QT_MOC_LITERAL(27, 217, 5), // "uasid"
QT_MOC_LITERAL(28, 223, 11), // "componentid"
QT_MOC_LITERAL(29, 235, 8), // "severity"
QT_MOC_LITERAL(30, 244, 4), // "text"
QT_MOC_LITERAL(31, 249, 14), // "navModeChanged"
QT_MOC_LITERAL(32, 264, 4), // "mode"
QT_MOC_LITERAL(33, 269, 5), // "armed"
QT_MOC_LITERAL(34, 275, 8), // "disarmed"
QT_MOC_LITERAL(35, 284, 13), // "armingChanged"
QT_MOC_LITERAL(36, 298, 15), // "errCountChanged"
QT_MOC_LITERAL(37, 314, 6), // "device"
QT_MOC_LITERAL(38, 321, 5), // "count"
QT_MOC_LITERAL(39, 327, 15), // "dropRateChanged"
QT_MOC_LITERAL(40, 343, 8), // "systemId"
QT_MOC_LITERAL(41, 352, 11), // "receiveDrop"
QT_MOC_LITERAL(42, 364, 11), // "modeChanged"
QT_MOC_LITERAL(43, 376, 5), // "sysId"
QT_MOC_LITERAL(44, 382, 11), // "armingState"
QT_MOC_LITERAL(45, 394, 11), // "commandSent"
QT_MOC_LITERAL(46, 406, 7), // "command"
QT_MOC_LITERAL(47, 414, 17), // "connectionChanged"
QT_MOC_LITERAL(48, 432, 10), // "CommStatus"
QT_MOC_LITERAL(49, 443, 14), // "connectionFlag"
QT_MOC_LITERAL(50, 458, 10), // "connecting"
QT_MOC_LITERAL(51, 469, 9), // "connected"
QT_MOC_LITERAL(52, 479, 12), // "disconnected"
QT_MOC_LITERAL(53, 492, 9), // "activated"
QT_MOC_LITERAL(54, 502, 11), // "deactivated"
QT_MOC_LITERAL(55, 514, 13), // "manualControl"
QT_MOC_LITERAL(56, 528, 12), // "valueChanged"
QT_MOC_LITERAL(57, 541, 4), // "unit"
QT_MOC_LITERAL(58, 546, 5), // "value"
QT_MOC_LITERAL(59, 552, 5), // "msecs"
QT_MOC_LITERAL(60, 558, 14), // "voltageChanged"
QT_MOC_LITERAL(61, 573, 5), // "uasId"
QT_MOC_LITERAL(62, 579, 7), // "voltage"
QT_MOC_LITERAL(63, 587, 15), // "waypointUpdated"
QT_MOC_LITERAL(64, 603, 2), // "id"
QT_MOC_LITERAL(65, 606, 3), // "yaw"
QT_MOC_LITERAL(66, 610, 12), // "autocontinue"
QT_MOC_LITERAL(67, 623, 6), // "active"
QT_MOC_LITERAL(68, 630, 16), // "waypointSelected"
QT_MOC_LITERAL(69, 647, 15), // "waypointReached"
QT_MOC_LITERAL(70, 663, 15), // "autoModeChanged"
QT_MOC_LITERAL(71, 679, 8), // "autoMode"
QT_MOC_LITERAL(72, 688, 16), // "parameterChanged"
QT_MOC_LITERAL(73, 705, 13), // "parameterName"
QT_MOC_LITERAL(74, 719, 14), // "parameterCount"
QT_MOC_LITERAL(75, 734, 11), // "parameterId"
QT_MOC_LITERAL(76, 746, 15), // "patternDetected"
QT_MOC_LITERAL(77, 762, 11), // "patternPath"
QT_MOC_LITERAL(78, 774, 10), // "confidence"
QT_MOC_LITERAL(79, 785, 8), // "detected"
QT_MOC_LITERAL(80, 794, 14), // "letterDetected"
QT_MOC_LITERAL(81, 809, 6), // "letter"
QT_MOC_LITERAL(82, 816, 14), // "batteryChanged"
QT_MOC_LITERAL(83, 831, 7), // "current"
QT_MOC_LITERAL(84, 839, 7), // "percent"
QT_MOC_LITERAL(85, 847, 7), // "seconds"
QT_MOC_LITERAL(86, 855, 15), // "actuatorChanged"
QT_MOC_LITERAL(87, 871, 5), // "actId"
QT_MOC_LITERAL(88, 877, 13), // "thrustChanged"
QT_MOC_LITERAL(89, 891, 6), // "thrust"
QT_MOC_LITERAL(90, 898, 9), // "heartbeat"
QT_MOC_LITERAL(91, 908, 15), // "attitudeChanged"
QT_MOC_LITERAL(92, 924, 4), // "roll"
QT_MOC_LITERAL(93, 929, 5), // "pitch"
QT_MOC_LITERAL(94, 935, 4), // "usec"
QT_MOC_LITERAL(95, 940, 28), // "attitudeRotationRatesChanged"
QT_MOC_LITERAL(96, 969, 8), // "rollrate"
QT_MOC_LITERAL(97, 978, 9), // "pitchrate"
QT_MOC_LITERAL(98, 988, 7), // "yawrate"
QT_MOC_LITERAL(99, 996, 29), // "attitudeThrustSetPointChanged"
QT_MOC_LITERAL(100, 1026, 11), // "rollDesired"
QT_MOC_LITERAL(101, 1038, 12), // "pitchDesired"
QT_MOC_LITERAL(102, 1051, 10), // "yawDesired"
QT_MOC_LITERAL(103, 1062, 13), // "thrustDesired"
QT_MOC_LITERAL(104, 1076, 24), // "positionSetPointsChanged"
QT_MOC_LITERAL(105, 1101, 8), // "xDesired"
QT_MOC_LITERAL(106, 1110, 8), // "yDesired"
QT_MOC_LITERAL(107, 1119, 8), // "zDesired"
QT_MOC_LITERAL(108, 1128, 28), // "userPositionSetPointsChanged"
QT_MOC_LITERAL(109, 1157, 20), // "localPositionChanged"
QT_MOC_LITERAL(110, 1178, 21), // "globalPositionChanged"
QT_MOC_LITERAL(111, 1200, 3), // "lat"
QT_MOC_LITERAL(112, 1204, 3), // "lon"
QT_MOC_LITERAL(113, 1208, 3), // "alt"
QT_MOC_LITERAL(114, 1212, 15), // "altitudeChanged"
QT_MOC_LITERAL(115, 1228, 12), // "altitudeAMSL"
QT_MOC_LITERAL(116, 1241, 16), // "altitudeRelative"
QT_MOC_LITERAL(117, 1258, 9), // "climbRate"
QT_MOC_LITERAL(118, 1268, 25), // "gpsSatelliteStatusChanged"
QT_MOC_LITERAL(119, 1294, 5), // "satid"
QT_MOC_LITERAL(120, 1300, 7), // "azimuth"
QT_MOC_LITERAL(121, 1308, 9), // "direction"
QT_MOC_LITERAL(122, 1318, 3), // "snr"
QT_MOC_LITERAL(123, 1322, 4), // "used"
QT_MOC_LITERAL(124, 1327, 12), // "speedChanged"
QT_MOC_LITERAL(125, 1340, 11), // "groundSpeed"
QT_MOC_LITERAL(126, 1352, 8), // "airSpeed"
QT_MOC_LITERAL(127, 1361, 19), // "velocityChanged_NED"
QT_MOC_LITERAL(128, 1381, 2), // "vx"
QT_MOC_LITERAL(129, 1384, 2), // "vy"
QT_MOC_LITERAL(130, 1387, 2), // "vz"
QT_MOC_LITERAL(131, 1390, 33), // "navigationControllerErrorsCha..."
QT_MOC_LITERAL(132, 1424, 13), // "altitudeError"
QT_MOC_LITERAL(133, 1438, 10), // "speedError"
QT_MOC_LITERAL(134, 1449, 11), // "xtrackError"
QT_MOC_LITERAL(135, 1461, 12), // "imageStarted"
QT_MOC_LITERAL(136, 1474, 5), // "imgid"
QT_MOC_LITERAL(137, 1480, 5), // "width"
QT_MOC_LITERAL(138, 1486, 6), // "height"
QT_MOC_LITERAL(139, 1493, 5), // "depth"
QT_MOC_LITERAL(140, 1499, 8), // "channels"
QT_MOC_LITERAL(141, 1508, 17), // "imageDataReceived"
QT_MOC_LITERAL(142, 1526, 20), // "const unsigned char*"
QT_MOC_LITERAL(143, 1547, 9), // "imageData"
QT_MOC_LITERAL(144, 1557, 6), // "length"
QT_MOC_LITERAL(145, 1564, 10), // "startIndex"
QT_MOC_LITERAL(146, 1575, 13), // "systemTypeSet"
QT_MOC_LITERAL(147, 1589, 22), // "attitudeControlEnabled"
QT_MOC_LITERAL(148, 1612, 7), // "enabled"
QT_MOC_LITERAL(149, 1620, 24), // "positionXYControlEnabled"
QT_MOC_LITERAL(150, 1645, 23), // "positionZControlEnabled"
QT_MOC_LITERAL(151, 1669, 25), // "positionYawControlEnabled"
QT_MOC_LITERAL(152, 1695, 24), // "opticalFlowStatusChanged"
QT_MOC_LITERAL(153, 1720, 9), // "supported"
QT_MOC_LITERAL(154, 1730, 2), // "ok"
QT_MOC_LITERAL(155, 1733, 31), // "visionLocalizationStatusChanged"
QT_MOC_LITERAL(156, 1765, 27), // "distanceSensorStatusChanged"
QT_MOC_LITERAL(157, 1793, 17), // "gyroStatusChanged"
QT_MOC_LITERAL(158, 1811, 18), // "accelStatusChanged"
QT_MOC_LITERAL(159, 1830, 22), // "magSensorStatusChanged"
QT_MOC_LITERAL(160, 1853, 17), // "baroStatusChanged"
QT_MOC_LITERAL(161, 1871, 21), // "airspeedStatusChanged"
QT_MOC_LITERAL(162, 1893, 21), // "actuatorStatusChanged"
QT_MOC_LITERAL(163, 1915, 18), // "laserStatusChanged"
QT_MOC_LITERAL(164, 1934, 30), // "groundTruthSensorStatusChanged"
QT_MOC_LITERAL(165, 1965, 30), // "remoteControlChannelRawChanged"
QT_MOC_LITERAL(166, 1996, 9), // "channelId"
QT_MOC_LITERAL(167, 2006, 3), // "raw"
QT_MOC_LITERAL(168, 2010, 33), // "remoteControlChannelScaledCha..."
QT_MOC_LITERAL(169, 2044, 10), // "normalized"
QT_MOC_LITERAL(170, 2055, 24), // "remoteControlRSSIChanged"
QT_MOC_LITERAL(171, 2080, 4), // "rssi"
QT_MOC_LITERAL(172, 2085, 24), // "radioCalibrationReceived"
QT_MOC_LITERAL(173, 2110, 30), // "QPointer<RadioCalibrationData>"
QT_MOC_LITERAL(174, 2141, 19), // "localizationChanged"
QT_MOC_LITERAL(175, 2161, 3), // "fix"
QT_MOC_LITERAL(176, 2165, 22), // "gpsLocalizationChanged"
QT_MOC_LITERAL(177, 2188, 25), // "visionLocalizationChanged"
QT_MOC_LITERAL(178, 2214, 31), // "irUltraSoundLocalizationChanged"
QT_MOC_LITERAL(179, 2246, 16), // "heartbeatTimeout"
QT_MOC_LITERAL(180, 2263, 7), // "timeout"
QT_MOC_LITERAL(181, 2271, 2), // "ms"
QT_MOC_LITERAL(182, 2274, 11), // "nameChanged"
QT_MOC_LITERAL(183, 2286, 7), // "newName"
QT_MOC_LITERAL(184, 2294, 14), // "systemSelected"
QT_MOC_LITERAL(185, 2309, 8), // "selected"
QT_MOC_LITERAL(186, 2318, 18), // "systemSpecsChanged"
QT_MOC_LITERAL(187, 2337, 14), // "objectDetected"
QT_MOC_LITERAL(188, 2352, 4), // "time"
QT_MOC_LITERAL(189, 2357, 7), // "quality"
QT_MOC_LITERAL(190, 2365, 7), // "bearing"
QT_MOC_LITERAL(191, 2373, 8), // "distance"
QT_MOC_LITERAL(192, 2382, 19), // "homePositionChanged"
QT_MOC_LITERAL(193, 2402, 19), // "rawImuMessageUpdate"
QT_MOC_LITERAL(194, 2422, 17), // "mavlink_raw_imu_t"
QT_MOC_LITERAL(195, 2440, 6), // "rawImu"
QT_MOC_LITERAL(196, 2447, 22), // "scaledImuMessageUpdate"
QT_MOC_LITERAL(197, 2470, 20), // "mavlink_scaled_imu_t"
QT_MOC_LITERAL(198, 2491, 9), // "scaledImu"
QT_MOC_LITERAL(199, 2501, 23), // "scaledImu2MessageUpdate"
QT_MOC_LITERAL(200, 2525, 21), // "mavlink_scaled_imu2_t"
QT_MOC_LITERAL(201, 2547, 10), // "scaledImu2"
QT_MOC_LITERAL(202, 2558, 26), // "sensorOffsetsMessageUpdate"
QT_MOC_LITERAL(203, 2585, 24), // "mavlink_sensor_offsets_t"
QT_MOC_LITERAL(204, 2610, 13), // "sensorOffsets"
QT_MOC_LITERAL(205, 2624, 18), // "radioMessageUpdate"
QT_MOC_LITERAL(206, 2643, 15), // "mavlink_radio_t"
QT_MOC_LITERAL(207, 2659, 12), // "radioMessage"
QT_MOC_LITERAL(208, 2672, 21), // "compassMotCalibration"
QT_MOC_LITERAL(209, 2694, 28), // "mavlink_compassmot_status_t*"
QT_MOC_LITERAL(210, 2723, 17), // "compassmot_status"
QT_MOC_LITERAL(211, 2741, 17), // "rangeFinderUpdate"
QT_MOC_LITERAL(212, 2759, 8), // "logEntry"
QT_MOC_LITERAL(213, 2768, 8), // "uint32_t"
QT_MOC_LITERAL(214, 2777, 8), // "time_utc"
QT_MOC_LITERAL(215, 2786, 4), // "size"
QT_MOC_LITERAL(216, 2791, 8), // "uint16_t"
QT_MOC_LITERAL(217, 2800, 8), // "num_logs"
QT_MOC_LITERAL(218, 2809, 12), // "last_log_num"
QT_MOC_LITERAL(219, 2822, 7), // "logData"
QT_MOC_LITERAL(220, 2830, 3), // "ofs"
QT_MOC_LITERAL(221, 2834, 7), // "uint8_t"
QT_MOC_LITERAL(222, 2842, 11), // "const char*"
QT_MOC_LITERAL(223, 2854, 4), // "data"
QT_MOC_LITERAL(224, 2859, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(225, 2881, 5), // "title"
QT_MOC_LITERAL(226, 2887, 18), // "receiveLossChanged"
QT_MOC_LITERAL(227, 2906, 22), // "mavlinkMessageRecieved"
QT_MOC_LITERAL(228, 2929, 14), // "LinkInterface*"
QT_MOC_LITERAL(229, 2944, 4), // "link"
QT_MOC_LITERAL(230, 2949, 17), // "mavlink_message_t"
QT_MOC_LITERAL(231, 2967, 24), // "protocolStatusMessageRec"
QT_MOC_LITERAL(232, 2992, 15), // "valueChangedRec"
QT_MOC_LITERAL(233, 3008, 4), // "msec"
QT_MOC_LITERAL(234, 3013, 22), // "textMessageReceivedRec"
QT_MOC_LITERAL(235, 3036, 21), // "receiveLossChangedRec"
QT_MOC_LITERAL(236, 3058, 10), // "setUASName"
QT_MOC_LITERAL(237, 3069, 14), // "executeCommand"
QT_MOC_LITERAL(238, 3084, 7), // "MAV_CMD"
QT_MOC_LITERAL(239, 3092, 12), // "confirmation"
QT_MOC_LITERAL(240, 3105, 6), // "param1"
QT_MOC_LITERAL(241, 3112, 6), // "param2"
QT_MOC_LITERAL(242, 3119, 6), // "param3"
QT_MOC_LITERAL(243, 3126, 6), // "param4"
QT_MOC_LITERAL(244, 3133, 6), // "param5"
QT_MOC_LITERAL(245, 3140, 6), // "param6"
QT_MOC_LITERAL(246, 3147, 6), // "param7"
QT_MOC_LITERAL(247, 3154, 17), // "executeCommandAck"
QT_MOC_LITERAL(248, 3172, 3), // "num"
QT_MOC_LITERAL(249, 3176, 7), // "success"
QT_MOC_LITERAL(250, 3184, 11), // "setAirframe"
QT_MOC_LITERAL(251, 3196, 8), // "airframe"
QT_MOC_LITERAL(252, 3205, 6), // "launch"
QT_MOC_LITERAL(253, 3212, 4), // "home"
QT_MOC_LITERAL(254, 3217, 4), // "land"
QT_MOC_LITERAL(255, 3222, 6), // "pairRX"
QT_MOC_LITERAL(256, 3229, 6), // "rxType"
QT_MOC_LITERAL(257, 3236, 9), // "rxSubType"
QT_MOC_LITERAL(258, 3246, 4), // "halt"
QT_MOC_LITERAL(259, 3251, 2), // "go"
QT_MOC_LITERAL(260, 3254, 7), // "setMode"
QT_MOC_LITERAL(261, 3262, 11), // "newBaseMode"
QT_MOC_LITERAL(262, 3274, 13), // "newCustomMode"
QT_MOC_LITERAL(263, 3288, 13), // "emergencySTOP"
QT_MOC_LITERAL(264, 3302, 13), // "emergencyKILL"
QT_MOC_LITERAL(265, 3316, 8), // "shutdown"
QT_MOC_LITERAL(266, 3325, 6), // "reboot"
QT_MOC_LITERAL(267, 3332, 17), // "setTargetPosition"
QT_MOC_LITERAL(268, 3350, 34), // "setLocalOriginAtCurrentGPSPos..."
QT_MOC_LITERAL(269, 3385, 15), // "setHomePosition"
QT_MOC_LITERAL(270, 3401, 17), // "requestParameters"
QT_MOC_LITERAL(271, 3419, 16), // "requestParameter"
QT_MOC_LITERAL(272, 3436, 9), // "parameter"
QT_MOC_LITERAL(273, 3446, 24), // "writeParametersToStorage"
QT_MOC_LITERAL(274, 3471, 25), // "readParametersFromStorage"
QT_MOC_LITERAL(275, 3497, 12), // "setParameter"
QT_MOC_LITERAL(276, 3510, 7), // "addLink"
QT_MOC_LITERAL(277, 3518, 11), // "setSelected"
QT_MOC_LITERAL(278, 3530, 25), // "enableAllDataTransmission"
QT_MOC_LITERAL(279, 3556, 4), // "rate"
QT_MOC_LITERAL(280, 3561, 31), // "enableRawSensorDataTransmission"
QT_MOC_LITERAL(281, 3593, 38), // "enableExtendedSystemStatusTra..."
QT_MOC_LITERAL(282, 3632, 31), // "enableRCChannelDataTransmission"
QT_MOC_LITERAL(283, 3664, 35), // "enableRawControllerDataTransm..."
QT_MOC_LITERAL(284, 3700, 26), // "enablePositionTransmission"
QT_MOC_LITERAL(285, 3727, 24), // "enableExtra1Transmission"
QT_MOC_LITERAL(286, 3752, 24), // "enableExtra2Transmission"
QT_MOC_LITERAL(287, 3777, 24), // "enableExtra3Transmission"
QT_MOC_LITERAL(288, 3802, 24), // "setLocalPositionSetpoint"
QT_MOC_LITERAL(289, 3827, 22), // "setLocalPositionOffset"
QT_MOC_LITERAL(290, 3850, 28), // "startRadioControlCalibration"
QT_MOC_LITERAL(291, 3879, 5), // "param"
QT_MOC_LITERAL(292, 3885, 26), // "endRadioControlCalibration"
QT_MOC_LITERAL(293, 3912, 28), // "startMagnetometerCalibration"
QT_MOC_LITERAL(294, 3941, 25), // "startGyroscopeCalibration"
QT_MOC_LITERAL(295, 3967, 24), // "startPressureCalibration"
QT_MOC_LITERAL(296, 3992, 26), // "startCompassMotCalibration"
QT_MOC_LITERAL(297, 4019, 15), // "setBatterySpecs"
QT_MOC_LITERAL(298, 4035, 5), // "specs"
QT_MOC_LITERAL(299, 4041, 15), // "getBatterySpecs"
QT_MOC_LITERAL(300, 4057, 12), // "sendHilState"
QT_MOC_LITERAL(301, 4070, 7), // "time_us"
QT_MOC_LITERAL(302, 4078, 9), // "rollspeed"
QT_MOC_LITERAL(303, 4088, 10), // "pitchspeed"
QT_MOC_LITERAL(304, 4099, 8), // "yawspeed"
QT_MOC_LITERAL(305, 4108, 12), // "ind_airspeed"
QT_MOC_LITERAL(306, 4121, 13), // "true_airspeed"
QT_MOC_LITERAL(307, 4135, 4), // "xacc"
QT_MOC_LITERAL(308, 4140, 4), // "yacc"
QT_MOC_LITERAL(309, 4145, 4), // "zacc"
QT_MOC_LITERAL(310, 4150, 14), // "sendHilSensors"
QT_MOC_LITERAL(311, 4165, 4), // "xmag"
QT_MOC_LITERAL(312, 4170, 4), // "ymag"
QT_MOC_LITERAL(313, 4175, 4), // "zmag"
QT_MOC_LITERAL(314, 4180, 12), // "abs_pressure"
QT_MOC_LITERAL(315, 4193, 13), // "diff_pressure"
QT_MOC_LITERAL(316, 4207, 12), // "pressure_alt"
QT_MOC_LITERAL(317, 4220, 11), // "temperature"
QT_MOC_LITERAL(318, 4232, 14), // "fields_changed"
QT_MOC_LITERAL(319, 4247, 10), // "sendHilGps"
QT_MOC_LITERAL(320, 4258, 8), // "fix_type"
QT_MOC_LITERAL(321, 4267, 3), // "eph"
QT_MOC_LITERAL(322, 4271, 3), // "epv"
QT_MOC_LITERAL(323, 4275, 3), // "vel"
QT_MOC_LITERAL(324, 4279, 2), // "vn"
QT_MOC_LITERAL(325, 4282, 2), // "ve"
QT_MOC_LITERAL(326, 4285, 2), // "vd"
QT_MOC_LITERAL(327, 4288, 3), // "cog"
QT_MOC_LITERAL(328, 4292, 10), // "satellites"
QT_MOC_LITERAL(329, 4303, 14), // "logRequestList"
QT_MOC_LITERAL(330, 4318, 5), // "start"
QT_MOC_LITERAL(331, 4324, 3), // "end"
QT_MOC_LITERAL(332, 4328, 14), // "logRequestData"
QT_MOC_LITERAL(333, 4343, 11), // "logEraseAll"
QT_MOC_LITERAL(334, 4355, 13), // "logRequestEnd"
QT_MOC_LITERAL(335, 4369, 14), // "receiveMessage"
QT_MOC_LITERAL(336, 4384, 11), // "getSystemId"
QT_MOC_LITERAL(337, 4396, 14) // "getComponentId"

    },
    "UASInterface\0statusChanged\0\0stateFlag\0"
    "componentCreated\0uas\0component\0name\0"
    "UASInterface*\0status\0description\0"
    "systemRemoved\0poiFound\0type\0colorIndex\0"
    "message\0x\0y\0z\0poiConnectionFound\0x1\0"
    "y1\0z1\0x2\0y2\0z2\0textMessageReceived\0"
    "uasid\0componentid\0severity\0text\0"
    "navModeChanged\0mode\0armed\0disarmed\0"
    "armingChanged\0errCountChanged\0device\0"
    "count\0dropRateChanged\0systemId\0"
    "receiveDrop\0modeChanged\0sysId\0armingState\0"
    "commandSent\0command\0connectionChanged\0"
    "CommStatus\0connectionFlag\0connecting\0"
    "connected\0disconnected\0activated\0"
    "deactivated\0manualControl\0valueChanged\0"
    "unit\0value\0msecs\0voltageChanged\0uasId\0"
    "voltage\0waypointUpdated\0id\0yaw\0"
    "autocontinue\0active\0waypointSelected\0"
    "waypointReached\0autoModeChanged\0"
    "autoMode\0parameterChanged\0parameterName\0"
    "parameterCount\0parameterId\0patternDetected\0"
    "patternPath\0confidence\0detected\0"
    "letterDetected\0letter\0batteryChanged\0"
    "current\0percent\0seconds\0actuatorChanged\0"
    "actId\0thrustChanged\0thrust\0heartbeat\0"
    "attitudeChanged\0roll\0pitch\0usec\0"
    "attitudeRotationRatesChanged\0rollrate\0"
    "pitchrate\0yawrate\0attitudeThrustSetPointChanged\0"
    "rollDesired\0pitchDesired\0yawDesired\0"
    "thrustDesired\0positionSetPointsChanged\0"
    "xDesired\0yDesired\0zDesired\0"
    "userPositionSetPointsChanged\0"
    "localPositionChanged\0globalPositionChanged\0"
    "lat\0lon\0alt\0altitudeChanged\0altitudeAMSL\0"
    "altitudeRelative\0climbRate\0"
    "gpsSatelliteStatusChanged\0satid\0azimuth\0"
    "direction\0snr\0used\0speedChanged\0"
    "groundSpeed\0airSpeed\0velocityChanged_NED\0"
    "vx\0vy\0vz\0navigationControllerErrorsChanged\0"
    "altitudeError\0speedError\0xtrackError\0"
    "imageStarted\0imgid\0width\0height\0depth\0"
    "channels\0imageDataReceived\0"
    "const unsigned char*\0imageData\0length\0"
    "startIndex\0systemTypeSet\0"
    "attitudeControlEnabled\0enabled\0"
    "positionXYControlEnabled\0"
    "positionZControlEnabled\0"
    "positionYawControlEnabled\0"
    "opticalFlowStatusChanged\0supported\0"
    "ok\0visionLocalizationStatusChanged\0"
    "distanceSensorStatusChanged\0"
    "gyroStatusChanged\0accelStatusChanged\0"
    "magSensorStatusChanged\0baroStatusChanged\0"
    "airspeedStatusChanged\0actuatorStatusChanged\0"
    "laserStatusChanged\0groundTruthSensorStatusChanged\0"
    "remoteControlChannelRawChanged\0channelId\0"
    "raw\0remoteControlChannelScaledChanged\0"
    "normalized\0remoteControlRSSIChanged\0"
    "rssi\0radioCalibrationReceived\0"
    "QPointer<RadioCalibrationData>\0"
    "localizationChanged\0fix\0gpsLocalizationChanged\0"
    "visionLocalizationChanged\0"
    "irUltraSoundLocalizationChanged\0"
    "heartbeatTimeout\0timeout\0ms\0nameChanged\0"
    "newName\0systemSelected\0selected\0"
    "systemSpecsChanged\0objectDetected\0"
    "time\0quality\0bearing\0distance\0"
    "homePositionChanged\0rawImuMessageUpdate\0"
    "mavlink_raw_imu_t\0rawImu\0"
    "scaledImuMessageUpdate\0mavlink_scaled_imu_t\0"
    "scaledImu\0scaledImu2MessageUpdate\0"
    "mavlink_scaled_imu2_t\0scaledImu2\0"
    "sensorOffsetsMessageUpdate\0"
    "mavlink_sensor_offsets_t\0sensorOffsets\0"
    "radioMessageUpdate\0mavlink_radio_t\0"
    "radioMessage\0compassMotCalibration\0"
    "mavlink_compassmot_status_t*\0"
    "compassmot_status\0rangeFinderUpdate\0"
    "logEntry\0uint32_t\0time_utc\0size\0"
    "uint16_t\0num_logs\0last_log_num\0logData\0"
    "ofs\0uint8_t\0const char*\0data\0"
    "protocolStatusMessage\0title\0"
    "receiveLossChanged\0mavlinkMessageRecieved\0"
    "LinkInterface*\0link\0mavlink_message_t\0"
    "protocolStatusMessageRec\0valueChangedRec\0"
    "msec\0textMessageReceivedRec\0"
    "receiveLossChangedRec\0setUASName\0"
    "executeCommand\0MAV_CMD\0confirmation\0"
    "param1\0param2\0param3\0param4\0param5\0"
    "param6\0param7\0executeCommandAck\0num\0"
    "success\0setAirframe\0airframe\0launch\0"
    "home\0land\0pairRX\0rxType\0rxSubType\0"
    "halt\0go\0setMode\0newBaseMode\0newCustomMode\0"
    "emergencySTOP\0emergencyKILL\0shutdown\0"
    "reboot\0setTargetPosition\0"
    "setLocalOriginAtCurrentGPSPosition\0"
    "setHomePosition\0requestParameters\0"
    "requestParameter\0parameter\0"
    "writeParametersToStorage\0"
    "readParametersFromStorage\0setParameter\0"
    "addLink\0setSelected\0enableAllDataTransmission\0"
    "rate\0enableRawSensorDataTransmission\0"
    "enableExtendedSystemStatusTransmission\0"
    "enableRCChannelDataTransmission\0"
    "enableRawControllerDataTransmission\0"
    "enablePositionTransmission\0"
    "enableExtra1Transmission\0"
    "enableExtra2Transmission\0"
    "enableExtra3Transmission\0"
    "setLocalPositionSetpoint\0"
    "setLocalPositionOffset\0"
    "startRadioControlCalibration\0param\0"
    "endRadioControlCalibration\0"
    "startMagnetometerCalibration\0"
    "startGyroscopeCalibration\0"
    "startPressureCalibration\0"
    "startCompassMotCalibration\0setBatterySpecs\0"
    "specs\0getBatterySpecs\0sendHilState\0"
    "time_us\0rollspeed\0pitchspeed\0yawspeed\0"
    "ind_airspeed\0true_airspeed\0xacc\0yacc\0"
    "zacc\0sendHilSensors\0xmag\0ymag\0zmag\0"
    "abs_pressure\0diff_pressure\0pressure_alt\0"
    "temperature\0fields_changed\0sendHilGps\0"
    "fix_type\0eph\0epv\0vel\0vn\0ve\0vd\0cog\0"
    "satellites\0logRequestList\0start\0end\0"
    "logRequestData\0logEraseAll\0logRequestEnd\0"
    "receiveMessage\0getSystemId\0getComponentId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     158,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      97,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  804,    2, 0x06 /* Public */,
       4,    3,  807,    2, 0x06 /* Public */,
       1,    3,  814,    2, 0x06 /* Public */,
      11,    1,  821,    2, 0x06 /* Public */,
      11,    0,  824,    2, 0x06 /* Public */,
      12,    7,  825,    2, 0x06 /* Public */,
      19,   10,  840,    2, 0x06 /* Public */,
      26,    4,  861,    2, 0x06 /* Public */,
      31,    3,  870,    2, 0x06 /* Public */,
      33,    0,  877,    2, 0x06 /* Public */,
      34,    0,  878,    2, 0x06 /* Public */,
      35,    1,  879,    2, 0x06 /* Public */,
      36,    4,  882,    2, 0x06 /* Public */,
      39,    2,  891,    2, 0x06 /* Public */,
      42,    3,  896,    2, 0x06 /* Public */,
      35,    2,  903,    2, 0x06 /* Public */,
      45,    1,  908,    2, 0x06 /* Public */,
      47,    1,  911,    2, 0x06 /* Public */,
      50,    0,  914,    2, 0x06 /* Public */,
      51,    0,  915,    2, 0x06 /* Public */,
      52,    0,  916,    2, 0x06 /* Public */,
      53,    0,  917,    2, 0x06 /* Public */,
      54,    0,  918,    2, 0x06 /* Public */,
      55,    0,  919,    2, 0x06 /* Public */,
      56,    5,  920,    2, 0x06 /* Public */,
      60,    2,  931,    2, 0x06 /* Public */,
      63,    8,  936,    2, 0x06 /* Public */,
      68,    2,  953,    2, 0x06 /* Public */,
      69,    2,  958,    2, 0x06 /* Public */,
      70,    1,  963,    2, 0x06 /* Public */,
      72,    4,  966,    2, 0x06 /* Public */,
      72,    6,  975,    2, 0x06 /* Public */,
      76,    4,  988,    2, 0x06 /* Public */,
      80,    4,  997,    2, 0x06 /* Public */,
      82,    5, 1006,    2, 0x06 /* Public */,
       1,    2, 1017,    2, 0x06 /* Public */,
      86,    3, 1022,    2, 0x06 /* Public */,
      88,    2, 1029,    2, 0x06 /* Public */,
      90,    1, 1034,    2, 0x06 /* Public */,
      91,    5, 1037,    2, 0x06 /* Public */,
      91,    6, 1048,    2, 0x06 /* Public */,
      95,    5, 1061,    2, 0x06 /* Public */,
      99,    6, 1072,    2, 0x06 /* Public */,
     104,    6, 1085,    2, 0x06 /* Public */,
     108,    5, 1098,    2, 0x06 /* Public */,
     109,    5, 1109,    2, 0x06 /* Public */,
     109,    6, 1120,    2, 0x06 /* Public */,
     110,    5, 1133,    2, 0x06 /* Public */,
     114,    5, 1144,    2, 0x06 /* Public */,
     118,    6, 1155,    2, 0x06 /* Public */,
     124,    4, 1168,    2, 0x06 /* Public */,
     127,    5, 1177,    2, 0x06 /* Public */,
     131,    4, 1188,    2, 0x06 /* Public */,
     135,    5, 1197,    2, 0x06 /* Public */,
     141,    4, 1208,    2, 0x06 /* Public */,
     146,    2, 1217,    2, 0x06 /* Public */,
     147,    1, 1222,    2, 0x06 /* Public */,
     149,    1, 1225,    2, 0x06 /* Public */,
     150,    1, 1228,    2, 0x06 /* Public */,
     151,    1, 1231,    2, 0x06 /* Public */,
     152,    3, 1234,    2, 0x06 /* Public */,
     155,    3, 1241,    2, 0x06 /* Public */,
     156,    3, 1248,    2, 0x06 /* Public */,
     157,    3, 1255,    2, 0x06 /* Public */,
     158,    3, 1262,    2, 0x06 /* Public */,
     159,    3, 1269,    2, 0x06 /* Public */,
     160,    3, 1276,    2, 0x06 /* Public */,
     161,    3, 1283,    2, 0x06 /* Public */,
     162,    3, 1290,    2, 0x06 /* Public */,
     163,    3, 1297,    2, 0x06 /* Public */,
     164,    3, 1304,    2, 0x06 /* Public */,
     165,    2, 1311,    2, 0x06 /* Public */,
     168,    2, 1316,    2, 0x06 /* Public */,
     170,    1, 1321,    2, 0x06 /* Public */,
     172,    1, 1324,    2, 0x06 /* Public */,
     174,    2, 1327,    2, 0x06 /* Public */,
     176,    2, 1332,    2, 0x06 /* Public */,
     177,    2, 1337,    2, 0x06 /* Public */,
     178,    2, 1342,    2, 0x06 /* Public */,
     179,    2, 1347,    2, 0x06 /* Public */,
     182,    1, 1352,    2, 0x06 /* Public */,
     184,    1, 1355,    2, 0x06 /* Public */,
     186,    1, 1358,    2, 0x06 /* Public */,
     187,    7, 1361,    2, 0x06 /* Public */,
     192,    4, 1376,    2, 0x06 /* Public */,
     193,    2, 1385,    2, 0x06 /* Public */,
     196,    2, 1390,    2, 0x06 /* Public */,
     199,    2, 1395,    2, 0x06 /* Public */,
     202,    2, 1400,    2, 0x06 /* Public */,
     205,    2, 1405,    2, 0x06 /* Public */,
     208,    1, 1410,    2, 0x06 /* Public */,
     211,    3, 1413,    2, 0x06 /* Public */,
     212,    6, 1420,    2, 0x06 /* Public */,
     219,    5, 1433,    2, 0x06 /* Public */,
     224,    2, 1444,    2, 0x06 /* Public */,
     226,    2, 1449,    2, 0x06 /* Public */,
     227,    2, 1454,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     231,    2, 1459,    2, 0x0a /* Public */,
     232,    5, 1464,    2, 0x0a /* Public */,
     234,    4, 1475,    2, 0x0a /* Public */,
     235,    2, 1484,    2, 0x0a /* Public */,
     236,    1, 1489,    2, 0x0a /* Public */,
     237,    1, 1492,    2, 0x0a /* Public */,
     237,   10, 1495,    2, 0x0a /* Public */,
     247,    2, 1516,    2, 0x0a /* Public */,
     250,    1, 1521,    2, 0x0a /* Public */,
     252,    0, 1524,    2, 0x0a /* Public */,
     253,    0, 1525,    2, 0x0a /* Public */,
     254,    0, 1526,    2, 0x0a /* Public */,
     255,    2, 1527,    2, 0x0a /* Public */,
     258,    0, 1532,    2, 0x0a /* Public */,
     259,    0, 1533,    2, 0x0a /* Public */,
     260,    1, 1534,    2, 0x0a /* Public */,
     260,    2, 1537,    2, 0x0a /* Public */,
     263,    0, 1542,    2, 0x0a /* Public */,
     264,    0, 1543,    2, 0x0a /* Public */,
     265,    0, 1544,    2, 0x0a /* Public */,
     266,    0, 1545,    2, 0x0a /* Public */,
     267,    4, 1546,    2, 0x0a /* Public */,
     268,    0, 1555,    2, 0x0a /* Public */,
     269,    3, 1556,    2, 0x0a /* Public */,
     270,    0, 1563,    2, 0x0a /* Public */,
     271,    2, 1564,    2, 0x0a /* Public */,
     273,    0, 1569,    2, 0x0a /* Public */,
     274,    0, 1570,    2, 0x0a /* Public */,
     275,    3, 1571,    2, 0x0a /* Public */,
     276,    1, 1578,    2, 0x0a /* Public */,
     277,    0, 1581,    2, 0x0a /* Public */,
     278,    1, 1582,    2, 0x0a /* Public */,
     280,    1, 1585,    2, 0x0a /* Public */,
     281,    1, 1588,    2, 0x0a /* Public */,
     282,    1, 1591,    2, 0x0a /* Public */,
     283,    1, 1594,    2, 0x0a /* Public */,
     284,    1, 1597,    2, 0x0a /* Public */,
     285,    1, 1600,    2, 0x0a /* Public */,
     286,    1, 1603,    2, 0x0a /* Public */,
     287,    1, 1606,    2, 0x0a /* Public */,
     288,    4, 1609,    2, 0x0a /* Public */,
     289,    4, 1618,    2, 0x0a /* Public */,
     290,    1, 1627,    2, 0x0a /* Public */,
     290,    0, 1630,    2, 0x2a /* Public | MethodCloned */,
     292,    0, 1631,    2, 0x0a /* Public */,
     293,    0, 1632,    2, 0x0a /* Public */,
     294,    0, 1633,    2, 0x0a /* Public */,
     295,    0, 1634,    2, 0x0a /* Public */,
     296,    0, 1635,    2, 0x0a /* Public */,
     297,    1, 1636,    2, 0x0a /* Public */,
     299,    0, 1639,    2, 0x0a /* Public */,
     300,   18, 1640,    2, 0x0a /* Public */,
     310,   15, 1677,    2, 0x0a /* Public */,
     319,   13, 1708,    2, 0x0a /* Public */,
     329,    2, 1735,    2, 0x0a /* Public */,
     332,    3, 1740,    2, 0x0a /* Public */,
     333,    0, 1747,    2, 0x0a /* Public */,
     334,    0, 1748,    2, 0x0a /* Public */,
     335,    2, 1749,    2, 0x0a /* Public */,
     336,    0, 1754,    2, 0x0a /* Public */,
     337,    0, 1755,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString, QMetaType::QString,    5,    9,   10,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,   13,   14,   15,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,   13,   14,   15,   20,   21,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   28,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   32,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   27,    6,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   43,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   43,   44,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   27,    7,   57,   58,   59,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,   61,   62,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,   61,   64,   16,   17,   18,   65,   66,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   61,   64,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,   64,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    5,    6,   73,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    5,    6,   74,   75,   73,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Bool,   61,   77,   78,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Float, QMetaType::Bool,   61,   81,   78,   79,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,    5,   62,   83,   84,   85,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    5,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double,    2,   87,   58,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double,    2,   89,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   92,   93,   65,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    6,   92,   93,   65,   94,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    5,   96,   97,   98,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  100,  101,  102,  103,   94,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::ULongLong,   27,  105,  106,  107,  102,   94,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   27,  105,  106,  107,  102,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,   16,   17,   18,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,    6,   16,   17,   18,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  111,  112,  113,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  115,  116,  117,   94,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   27,  119,  120,  121,  122,  123,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    5,  125,  126,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::ULongLong,    2,  128,  129,  130,   94,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,  132,  133,  134,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  136,  137,  138,  139,  140,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 142, QMetaType::Int, QMetaType::Int,  136,  143,  144,  145,
    QMetaType::Void, 0x80000000 | 8, QMetaType::UInt,    5,   13,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,  153,  148,  154,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,  166,  167,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,  166,  169,
    QMetaType::Void, QMetaType::Float,  171,
    QMetaType::Void, 0x80000000 | 173,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  175,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  175,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  175,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    5,  175,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,  180,  181,
    QMetaType::Void, QMetaType::QString,  183,
    QMetaType::Void, QMetaType::Bool,  185,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Float, QMetaType::Float,  188,   64,   13,    7,  189,  190,  191,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,  111,  112,  113,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 194,    5,  195,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 197,    5,  198,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 200,    5,  201,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 203,    5,  204,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 206,    5,  207,
    QMetaType::Void, 0x80000000 | 209,  210,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double, QMetaType::Double,    5,  191,   62,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 213, 0x80000000 | 213, 0x80000000 | 216, 0x80000000 | 216, 0x80000000 | 216,   61,  214,  215,   64,  217,  218,
    QMetaType::Void, 0x80000000 | 213, 0x80000000 | 213, 0x80000000 | 216, 0x80000000 | 221, 0x80000000 | 222,   61,  220,   64,   38,  223,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  225,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   64,   58,
    QMetaType::Void, 0x80000000 | 228, 0x80000000 | 230,  229,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  225,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,   61,    7,   57,   58,  233,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   27,   28,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   64,   58,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 238,   46,
    QMetaType::Void, 0x80000000 | 238, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   46,  239,  240,  241,  242,  243,  244,  245,  246,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  248,  249,
    QMetaType::Void, QMetaType::Int,  251,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  256,  257,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, 0x80000000 | 221, 0x80000000 | 213,  261,  262,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   16,   17,   18,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,  111,  112,  113,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,  272,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    6,   64,   58,
    QMetaType::Void, 0x80000000 | 228,  229,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Int,  279,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   16,   17,   18,   65,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   16,   17,   18,   65,
    QMetaType::Void, QMetaType::Int,  291,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  298,
    QMetaType::QString,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  301,   92,   93,   65,  302,  303,  304,  111,  112,  113,  128,  129,  130,  305,  306,  307,  308,  309,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,  301,  307,  308,  309,  302,  303,  304,  311,  312,  313,  314,  315,  316,  317,  318,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,  301,  111,  112,  113,  320,  321,  322,  323,  324,  325,  326,  327,  328,
    QMetaType::Void, 0x80000000 | 216, 0x80000000 | 216,  330,  331,
    QMetaType::Void, 0x80000000 | 216, 0x80000000 | 213, 0x80000000 | 213,   64,  220,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 228, 0x80000000 | 230,  229,   15,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void UASInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASInterface *_t = static_cast<UASInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->componentCreated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->systemRemoved((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->systemRemoved(); break;
        case 5: _t->poiFound((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 6: _t->poiConnectionFound((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10]))); break;
        case 7: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 8: _t->navModeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->armed(); break;
        case 10: _t->disarmed(); break;
        case 11: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->errCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 13: _t->dropRateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->modeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 15: _t->armingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->commandSent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->connectionChanged((*reinterpret_cast< CommStatus(*)>(_a[1]))); break;
        case 18: _t->connecting(); break;
        case 19: _t->connected(); break;
        case 20: _t->disconnected(); break;
        case 21: _t->activated(); break;
        case 22: _t->deactivated(); break;
        case 23: _t->manualControl(); break;
        case 24: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 25: _t->voltageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 26: _t->waypointUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 27: _t->waypointSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->waypointReached((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->autoModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 31: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        case 32: _t->patternDetected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 33: _t->letterDetected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 34: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 35: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->actuatorChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 37: _t->thrustChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 38: _t->heartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 39: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 40: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 41: _t->attitudeRotationRatesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 42: _t->attitudeThrustSetPointChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 43: _t->positionSetPointsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 44: _t->userPositionSetPointsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 45: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 46: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 47: _t->globalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 48: _t->altitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 49: _t->gpsSatelliteStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 50: _t->speedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 51: _t->velocityChanged_NED((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 52: _t->navigationControllerErrorsChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 53: _t->imageStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 54: _t->imageDataReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 55: _t->systemTypeSet((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 56: _t->attitudeControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->positionXYControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->positionZControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->positionYawControlEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->opticalFlowStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 61: _t->visionLocalizationStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 62: _t->distanceSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 63: _t->gyroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 64: _t->accelStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 65: _t->magSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 66: _t->baroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 67: _t->airspeedStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 68: _t->actuatorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 69: _t->laserStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 70: _t->groundTruthSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 71: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 72: _t->remoteControlChannelScaledChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 73: _t->remoteControlRSSIChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 74: _t->radioCalibrationReceived((*reinterpret_cast< const QPointer<RadioCalibrationData>(*)>(_a[1]))); break;
        case 75: _t->localizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 76: _t->gpsLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 77: _t->visionLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 78: _t->irUltraSoundLocalizationChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 79: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 80: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 81: _t->systemSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->systemSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->objectDetected((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 84: _t->homePositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 85: _t->rawImuMessageUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_raw_imu_t(*)>(_a[2]))); break;
        case 86: _t->scaledImuMessageUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_scaled_imu_t(*)>(_a[2]))); break;
        case 87: _t->scaledImu2MessageUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_scaled_imu2_t(*)>(_a[2]))); break;
        case 88: _t->sensorOffsetsMessageUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_sensor_offsets_t(*)>(_a[2]))); break;
        case 89: _t->radioMessageUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_radio_t(*)>(_a[2]))); break;
        case 90: _t->compassMotCalibration((*reinterpret_cast< mavlink_compassmot_status_t*(*)>(_a[1]))); break;
        case 91: _t->rangeFinderUpdate((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 92: _t->logEntry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint16_t(*)>(_a[5])),(*reinterpret_cast< uint16_t(*)>(_a[6]))); break;
        case 93: _t->logData((*reinterpret_cast< uint32_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< const char*(*)>(_a[5]))); break;
        case 94: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 95: _t->receiveLossChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 96: _t->mavlinkMessageRecieved((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 97: _t->protocolStatusMessageRec((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 98: _t->valueChangedRec((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 99: _t->textMessageReceivedRec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 100: _t->receiveLossChangedRec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 101: _t->setUASName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 102: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1]))); break;
        case 103: _t->executeCommand((*reinterpret_cast< MAV_CMD(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 104: _t->executeCommandAck((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 105: _t->setAirframe((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 106: _t->launch(); break;
        case 107: _t->home(); break;
        case 108: _t->land(); break;
        case 109: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 110: _t->halt(); break;
        case 111: _t->go(); break;
        case 112: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->setMode((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2]))); break;
        case 114: _t->emergencySTOP(); break;
        case 115: { bool _r = _t->emergencyKILL();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: _t->shutdown(); break;
        case 117: _t->reboot(); break;
        case 118: _t->setTargetPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 119: _t->setLocalOriginAtCurrentGPSPosition(); break;
        case 120: _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 121: _t->requestParameters(); break;
        case 122: _t->requestParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 123: _t->writeParametersToStorage(); break;
        case 124: _t->readParametersFromStorage(); break;
        case 125: _t->setParameter((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 126: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 127: _t->setSelected(); break;
        case 128: _t->enableAllDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->enableRawSensorDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: _t->enableExtendedSystemStatusTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 131: _t->enableRCChannelDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 132: _t->enableRawControllerDataTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 133: _t->enablePositionTransmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: _t->enableExtra1Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 135: _t->enableExtra2Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 136: _t->enableExtra3Transmission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 137: _t->setLocalPositionSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 138: _t->setLocalPositionOffset((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 139: _t->startRadioControlCalibration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->startRadioControlCalibration(); break;
        case 141: _t->endRadioControlCalibration(); break;
        case 142: _t->startMagnetometerCalibration(); break;
        case 143: _t->startGyroscopeCalibration(); break;
        case 144: _t->startPressureCalibration(); break;
        case 145: _t->startCompassMotCalibration(); break;
        case 146: _t->setBatterySpecs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 147: { QString _r = _t->getBatterySpecs();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 148: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 149: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 150: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 151: _t->logRequestList((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 152: _t->logRequestData((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3]))); break;
        case 153: _t->logEraseAll(); break;
        case 154: _t->logRequestEnd(); break;
        case 155: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 156: { int _r = _t->getSystemId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 157: { int _r = _t->getComponentId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPointer<RadioCalibrationData> >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 91:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 126:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 155:
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
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::componentCreated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , int , QString , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::poiFound)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , int , QString , float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::poiConnectionFound)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::textMessageReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::navModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::armed)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::disarmed)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::armingChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::errCountChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::dropRateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::modeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::armingChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::commandSent)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(CommStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::connectionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::connecting)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::connected)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::disconnected)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::activated)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::deactivated)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::manualControl)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(const int , const QString & , const QString & , const QVariant & , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::valueChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::voltageChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , double , double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::waypointUpdated)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::waypointSelected)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::waypointReached)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::autoModeChanged)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::parameterChanged)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , int , QString , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::parameterChanged)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , float , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::patternDetected)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , float , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::letterDetected)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::batteryChanged)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::actuatorChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::thrustChanged)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::heartbeat)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::attitudeChanged)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::attitudeChanged)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::attitudeRotationRatesChanged)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::attitudeThrustSetPointChanged)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float , float , float , float , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::positionSetPointsChanged)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::userPositionSetPointsChanged)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::localPositionChanged)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::localPositionChanged)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::globalPositionChanged)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::altitudeChanged)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , float , float , float , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::gpsSatelliteStatusChanged)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::speedChanged)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::velocityChanged_NED)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::navigationControllerErrorsChanged)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageStarted)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , const unsigned char * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageDataReceived)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemTypeSet)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::attitudeControlEnabled)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::positionXYControlEnabled)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::positionZControlEnabled)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::positionYawControlEnabled)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::opticalFlowStatusChanged)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::visionLocalizationStatusChanged)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::distanceSensorStatusChanged)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::gyroStatusChanged)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::accelStatusChanged)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::magSensorStatusChanged)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::baroStatusChanged)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::airspeedStatusChanged)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::actuatorStatusChanged)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::laserStatusChanged)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::groundTruthSensorStatusChanged)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::remoteControlChannelRawChanged)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::remoteControlChannelScaledChanged)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::remoteControlRSSIChanged)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(const QPointer<RadioCalibrationData> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::radioCalibrationReceived)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::localizationChanged)) {
                *result = 75;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::gpsLocalizationChanged)) {
                *result = 76;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::visionLocalizationChanged)) {
                *result = 77;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::irUltraSoundLocalizationChanged)) {
                *result = 78;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::heartbeatTimeout)) {
                *result = 79;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::nameChanged)) {
                *result = 80;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemSelected)) {
                *result = 81;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemSpecsChanged)) {
                *result = 82;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(unsigned int , int , int , const QString & , int , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::objectDetected)) {
                *result = 83;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::homePositionChanged)) {
                *result = 84;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , mavlink_raw_imu_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::rawImuMessageUpdate)) {
                *result = 85;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , mavlink_scaled_imu_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::scaledImuMessageUpdate)) {
                *result = 86;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , mavlink_scaled_imu2_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::scaledImu2MessageUpdate)) {
                *result = 87;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , mavlink_sensor_offsets_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::sensorOffsetsMessageUpdate)) {
                *result = 88;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , mavlink_radio_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::radioMessageUpdate)) {
                *result = 89;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(mavlink_compassmot_status_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::compassMotCalibration)) {
                *result = 90;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::rangeFinderUpdate)) {
                *result = 91;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , uint32_t , uint32_t , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logEntry)) {
                *result = 92;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(uint32_t , uint32_t , uint16_t , uint8_t , const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logData)) {
                *result = 93;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::protocolStatusMessage)) {
                *result = 94;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::receiveLossChanged)) {
                *result = 95;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::mavlinkMessageRecieved)) {
                *result = 96;
                return;
            }
        }
    }
}

const QMetaObject UASInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASInterface.data,
      qt_meta_data_UASInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UASInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 158)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 158;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 158)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 158;
    }
    return _id;
}

// SIGNAL 0
void UASInterface::statusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASInterface::componentCreated(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASInterface::statusChanged(UASInterface * _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASInterface::systemRemoved(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASInterface::systemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UASInterface::poiFound(UASInterface * _t1, int _t2, int _t3, QString _t4, float _t5, float _t6, float _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASInterface::poiConnectionFound(UASInterface * _t1, int _t2, int _t3, QString _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASInterface::textMessageReceived(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASInterface::navModeChanged(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASInterface::armed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UASInterface::disarmed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void UASInterface::armingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UASInterface::errCountChanged(int _t1, QString _t2, QString _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UASInterface::dropRateChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UASInterface::modeChanged(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UASInterface::armingChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UASInterface::commandSent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UASInterface::connectionChanged(CommStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void UASInterface::connecting()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void UASInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void UASInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void UASInterface::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void UASInterface::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void UASInterface::manualControl()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void UASInterface::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void UASInterface::voltageChanged(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void UASInterface::waypointUpdated(int _t1, int _t2, double _t3, double _t4, double _t5, double _t6, bool _t7, bool _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void UASInterface::waypointSelected(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void UASInterface::waypointReached(UASInterface * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void UASInterface::autoModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void UASInterface::parameterChanged(int _t1, int _t2, QString _t3, QVariant _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void UASInterface::parameterChanged(int _t1, int _t2, int _t3, int _t4, QString _t5, QVariant _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void UASInterface::patternDetected(int _t1, QString _t2, float _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void UASInterface::letterDetected(int _t1, QString _t2, float _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void UASInterface::batteryChanged(UASInterface * _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void UASInterface::statusChanged(UASInterface * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void UASInterface::actuatorChanged(UASInterface * _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void UASInterface::thrustChanged(UASInterface * _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void UASInterface::heartbeat(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void UASInterface::attitudeChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void UASInterface::attitudeChanged(UASInterface * _t1, int _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void UASInterface::attitudeRotationRatesChanged(int _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void UASInterface::attitudeThrustSetPointChanged(UASInterface * _t1, double _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void UASInterface::positionSetPointsChanged(int _t1, float _t2, float _t3, float _t4, float _t5, quint64 _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void UASInterface::userPositionSetPointsChanged(int _t1, float _t2, float _t3, float _t4, float _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void UASInterface::localPositionChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void UASInterface::localPositionChanged(UASInterface * _t1, int _t2, double _t3, double _t4, double _t5, quint64 _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void UASInterface::globalPositionChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void UASInterface::altitudeChanged(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void UASInterface::gpsSatelliteStatusChanged(int _t1, int _t2, float _t3, float _t4, float _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void UASInterface::speedChanged(UASInterface * _t1, double _t2, double _t3, quint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void UASInterface::velocityChanged_NED(UASInterface * _t1, double _t2, double _t3, double _t4, quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void UASInterface::navigationControllerErrorsChanged(UASInterface * _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void UASInterface::imageStarted(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void UASInterface::imageDataReceived(int _t1, const unsigned char * _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void UASInterface::systemTypeSet(UASInterface * _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void UASInterface::attitudeControlEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void UASInterface::positionXYControlEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void UASInterface::positionZControlEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void UASInterface::positionYawControlEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void UASInterface::opticalFlowStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void UASInterface::visionLocalizationStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void UASInterface::distanceSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void UASInterface::gyroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void UASInterface::accelStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void UASInterface::magSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void UASInterface::baroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void UASInterface::airspeedStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void UASInterface::actuatorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void UASInterface::laserStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void UASInterface::groundTruthSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void UASInterface::remoteControlChannelRawChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void UASInterface::remoteControlChannelScaledChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void UASInterface::remoteControlRSSIChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void UASInterface::radioCalibrationReceived(const QPointer<RadioCalibrationData> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void UASInterface::localizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}

// SIGNAL 76
void UASInterface::gpsLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 76, _a);
}

// SIGNAL 77
void UASInterface::visionLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 77, _a);
}

// SIGNAL 78
void UASInterface::irUltraSoundLocalizationChanged(UASInterface * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 78, _a);
}

// SIGNAL 79
void UASInterface::heartbeatTimeout(bool _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 79, _a);
}

// SIGNAL 80
void UASInterface::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 80, _a);
}

// SIGNAL 81
void UASInterface::systemSelected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 81, _a);
}

// SIGNAL 82
void UASInterface::systemSpecsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 82, _a);
}

// SIGNAL 83
void UASInterface::objectDetected(unsigned int _t1, int _t2, int _t3, const QString & _t4, int _t5, float _t6, float _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 83, _a);
}

// SIGNAL 84
void UASInterface::homePositionChanged(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 84, _a);
}

// SIGNAL 85
void UASInterface::rawImuMessageUpdate(UASInterface * _t1, mavlink_raw_imu_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 85, _a);
}

// SIGNAL 86
void UASInterface::scaledImuMessageUpdate(UASInterface * _t1, mavlink_scaled_imu_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 86, _a);
}

// SIGNAL 87
void UASInterface::scaledImu2MessageUpdate(UASInterface * _t1, mavlink_scaled_imu2_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 87, _a);
}

// SIGNAL 88
void UASInterface::sensorOffsetsMessageUpdate(UASInterface * _t1, mavlink_sensor_offsets_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 88, _a);
}

// SIGNAL 89
void UASInterface::radioMessageUpdate(UASInterface * _t1, mavlink_radio_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 89, _a);
}

// SIGNAL 90
void UASInterface::compassMotCalibration(mavlink_compassmot_status_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 90, _a);
}

// SIGNAL 91
void UASInterface::rangeFinderUpdate(UASInterface * _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 91, _a);
}

// SIGNAL 92
void UASInterface::logEntry(int _t1, uint32_t _t2, uint32_t _t3, uint16_t _t4, uint16_t _t5, uint16_t _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 92, _a);
}

// SIGNAL 93
void UASInterface::logData(uint32_t _t1, uint32_t _t2, uint16_t _t3, uint8_t _t4, const char * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 93, _a);
}

// SIGNAL 94
void UASInterface::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 94, _a);
}

// SIGNAL 95
void UASInterface::receiveLossChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 95, _a);
}

// SIGNAL 96
void UASInterface::mavlinkMessageRecieved(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 96, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
