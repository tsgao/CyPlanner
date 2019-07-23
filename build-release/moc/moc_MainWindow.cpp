/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[92];
    char stringdata0[1342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "initStatusChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "message"
QT_MOC_LITERAL(4, 38, 16), // "autoProxyChanged"
QT_MOC_LITERAL(5, 55, 19), // "loadTlogMenuClicked"
QT_MOC_LITERAL(6, 75, 20), // "disableTLogReplayBar"
QT_MOC_LITERAL(7, 96, 19), // "enableTLogReplayBar"
QT_MOC_LITERAL(8, 116, 17), // "showStatusMessage"
QT_MOC_LITERAL(9, 134, 6), // "status"
QT_MOC_LITERAL(10, 141, 7), // "timeout"
QT_MOC_LITERAL(11, 149, 19), // "showCriticalMessage"
QT_MOC_LITERAL(12, 169, 5), // "title"
QT_MOC_LITERAL(13, 175, 15), // "showInfoMessage"
QT_MOC_LITERAL(14, 191, 12), // "showSettings"
QT_MOC_LITERAL(15, 204, 9), // "showAbout"
QT_MOC_LITERAL(16, 214, 7), // "addLink"
QT_MOC_LITERAL(17, 222, 6), // "linkid"
QT_MOC_LITERAL(18, 229, 10), // "configLink"
QT_MOC_LITERAL(19, 240, 9), // "linkError"
QT_MOC_LITERAL(20, 250, 11), // "errorstring"
QT_MOC_LITERAL(21, 262, 9), // "configure"
QT_MOC_LITERAL(22, 272, 12), // "simulateLink"
QT_MOC_LITERAL(23, 285, 8), // "simulate"
QT_MOC_LITERAL(24, 294, 12), // "setActiveUAS"
QT_MOC_LITERAL(25, 307, 13), // "UASInterface*"
QT_MOC_LITERAL(26, 321, 3), // "uas"
QT_MOC_LITERAL(27, 325, 10), // "UASCreated"
QT_MOC_LITERAL(28, 336, 10), // "UASDeleted"
QT_MOC_LITERAL(29, 347, 15), // "UASSpecsChanged"
QT_MOC_LITERAL(30, 363, 17), // "startVideoCapture"
QT_MOC_LITERAL(31, 381, 16), // "stopVideoCapture"
QT_MOC_LITERAL(32, 398, 10), // "saveScreen"
QT_MOC_LITERAL(33, 409, 15), // "enableHeartbeat"
QT_MOC_LITERAL(34, 425, 7), // "enabled"
QT_MOC_LITERAL(35, 433, 15), // "setAdvancedMode"
QT_MOC_LITERAL(36, 449, 4), // "mode"
QT_MOC_LITERAL(37, 454, 22), // "loadHardwareConfigView"
QT_MOC_LITERAL(38, 477, 22), // "loadSoftwareConfigView"
QT_MOC_LITERAL(39, 500, 19), // "loadUnconnectedView"
QT_MOC_LITERAL(40, 520, 13), // "loadPilotView"
QT_MOC_LITERAL(41, 534, 18), // "loadSimulationView"
QT_MOC_LITERAL(42, 553, 16), // "loadEngineerView"
QT_MOC_LITERAL(43, 570, 16), // "loadOperatorView"
QT_MOC_LITERAL(44, 587, 21), // "loadMultiOperatorView"
QT_MOC_LITERAL(45, 609, 15), // "loadMAVLinkView"
QT_MOC_LITERAL(46, 625, 22), // "loadFirmwareUpdateView"
QT_MOC_LITERAL(47, 648, 16), // "loadTerminalView"
QT_MOC_LITERAL(48, 665, 8), // "showHelp"
QT_MOC_LITERAL(49, 674, 11), // "showCredits"
QT_MOC_LITERAL(50, 686, 11), // "showRoadMap"
QT_MOC_LITERAL(51, 698, 16), // "reloadStylesheet"
QT_MOC_LITERAL(52, 715, 16), // "selectStylesheet"
QT_MOC_LITERAL(53, 732, 30), // "selectStylesheetDialogAccepted"
QT_MOC_LITERAL(54, 763, 25), // "enableDockWidgetTitleBars"
QT_MOC_LITERAL(55, 789, 19), // "enableAutoReconnect"
QT_MOC_LITERAL(56, 809, 18), // "enableLowPowerMode"
QT_MOC_LITERAL(57, 828, 19), // "enableAutoProxyMode"
QT_MOC_LITERAL(58, 848, 15), // "loadNativeStyle"
QT_MOC_LITERAL(59, 864, 15), // "loadIndoorStyle"
QT_MOC_LITERAL(60, 880, 16), // "loadOutdoorStyle"
QT_MOC_LITERAL(61, 897, 9), // "loadStyle"
QT_MOC_LITERAL(62, 907, 20), // "QGC_MAINWINDOW_STYLE"
QT_MOC_LITERAL(63, 928, 5), // "style"
QT_MOC_LITERAL(64, 934, 18), // "createCustomWidget"
QT_MOC_LITERAL(65, 953, 16), // "loadCustomWidget"
QT_MOC_LITERAL(66, 970, 8), // "fileName"
QT_MOC_LITERAL(67, 979, 14), // "singleinstance"
QT_MOC_LITERAL(68, 994, 4), // "view"
QT_MOC_LITERAL(69, 999, 29), // "loadCustomWidgetsFromDefaults"
QT_MOC_LITERAL(70, 1029, 10), // "systemType"
QT_MOC_LITERAL(71, 1040, 13), // "autopilotType"
QT_MOC_LITERAL(72, 1054, 26), // "showHILConfigurationWidget"
QT_MOC_LITERAL(73, 1081, 10), // "closeEvent"
QT_MOC_LITERAL(74, 1092, 12), // "QCloseEvent*"
QT_MOC_LITERAL(75, 1105, 5), // "event"
QT_MOC_LITERAL(76, 1111, 8), // "showTool"
QT_MOC_LITERAL(77, 1120, 7), // "visible"
QT_MOC_LITERAL(78, 1128, 17), // "showCentralWidget"
QT_MOC_LITERAL(79, 1146, 19), // "configureWindowName"
QT_MOC_LITERAL(80, 1166, 20), // "commsWidgetDestroyed"
QT_MOC_LITERAL(81, 1187, 3), // "obj"
QT_MOC_LITERAL(82, 1191, 7), // "toolBar"
QT_MOC_LITERAL(83, 1199, 28), // "showAutoUpdateDownloadDialog"
QT_MOC_LITERAL(84, 1228, 7), // "version"
QT_MOC_LITERAL(85, 1236, 11), // "releaseType"
QT_MOC_LITERAL(86, 1248, 3), // "url"
QT_MOC_LITERAL(87, 1252, 4), // "name"
QT_MOC_LITERAL(88, 1257, 19), // "autoUpdateCancelled"
QT_MOC_LITERAL(89, 1277, 23), // "showNoUpdateAvailDialog"
QT_MOC_LITERAL(90, 1301, 19), // "showTerminalConsole"
QT_MOC_LITERAL(91, 1321, 20) // "closeTerminalConsole"

    },
    "MainWindow\0initStatusChanged\0\0message\0"
    "autoProxyChanged\0loadTlogMenuClicked\0"
    "disableTLogReplayBar\0enableTLogReplayBar\0"
    "showStatusMessage\0status\0timeout\0"
    "showCriticalMessage\0title\0showInfoMessage\0"
    "showSettings\0showAbout\0addLink\0linkid\0"
    "configLink\0linkError\0errorstring\0"
    "configure\0simulateLink\0simulate\0"
    "setActiveUAS\0UASInterface*\0uas\0"
    "UASCreated\0UASDeleted\0UASSpecsChanged\0"
    "startVideoCapture\0stopVideoCapture\0"
    "saveScreen\0enableHeartbeat\0enabled\0"
    "setAdvancedMode\0mode\0loadHardwareConfigView\0"
    "loadSoftwareConfigView\0loadUnconnectedView\0"
    "loadPilotView\0loadSimulationView\0"
    "loadEngineerView\0loadOperatorView\0"
    "loadMultiOperatorView\0loadMAVLinkView\0"
    "loadFirmwareUpdateView\0loadTerminalView\0"
    "showHelp\0showCredits\0showRoadMap\0"
    "reloadStylesheet\0selectStylesheet\0"
    "selectStylesheetDialogAccepted\0"
    "enableDockWidgetTitleBars\0enableAutoReconnect\0"
    "enableLowPowerMode\0enableAutoProxyMode\0"
    "loadNativeStyle\0loadIndoorStyle\0"
    "loadOutdoorStyle\0loadStyle\0"
    "QGC_MAINWINDOW_STYLE\0style\0"
    "createCustomWidget\0loadCustomWidget\0"
    "fileName\0singleinstance\0view\0"
    "loadCustomWidgetsFromDefaults\0systemType\0"
    "autopilotType\0showHILConfigurationWidget\0"
    "closeEvent\0QCloseEvent*\0event\0showTool\0"
    "visible\0showCentralWidget\0configureWindowName\0"
    "commsWidgetDestroyed\0obj\0toolBar\0"
    "showAutoUpdateDownloadDialog\0version\0"
    "releaseType\0url\0name\0autoUpdateCancelled\0"
    "showNoUpdateAvailDialog\0showTerminalConsole\0"
    "closeTerminalConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  359,    2, 0x06 /* Public */,
       4,    1,  362,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  365,    2, 0x0a /* Public */,
       6,    0,  366,    2, 0x0a /* Public */,
       7,    0,  367,    2, 0x0a /* Public */,
       8,    2,  368,    2, 0x0a /* Public */,
       8,    1,  373,    2, 0x0a /* Public */,
      11,    2,  376,    2, 0x0a /* Public */,
      13,    2,  381,    2, 0x0a /* Public */,
      14,    0,  386,    2, 0x0a /* Public */,
      15,    0,  387,    2, 0x0a /* Public */,
      16,    0,  388,    2, 0x0a /* Public */,
      16,    1,  389,    2, 0x0a /* Public */,
      18,    1,  392,    2, 0x0a /* Public */,
      19,    2,  395,    2, 0x0a /* Public */,
      21,    0,  400,    2, 0x0a /* Public */,
      22,    1,  401,    2, 0x0a /* Public */,
      24,    1,  404,    2, 0x0a /* Public */,
      27,    1,  407,    2, 0x0a /* Public */,
      28,    1,  410,    2, 0x0a /* Public */,
      29,    1,  413,    2, 0x0a /* Public */,
      30,    0,  416,    2, 0x0a /* Public */,
      31,    0,  417,    2, 0x0a /* Public */,
      32,    0,  418,    2, 0x0a /* Public */,
      33,    1,  419,    2, 0x0a /* Public */,
      35,    1,  422,    2, 0x0a /* Public */,
      37,    0,  425,    2, 0x0a /* Public */,
      38,    0,  426,    2, 0x0a /* Public */,
      39,    0,  427,    2, 0x0a /* Public */,
      40,    0,  428,    2, 0x0a /* Public */,
      41,    0,  429,    2, 0x0a /* Public */,
      42,    0,  430,    2, 0x0a /* Public */,
      43,    0,  431,    2, 0x0a /* Public */,
      44,    0,  432,    2, 0x0a /* Public */,
      45,    0,  433,    2, 0x0a /* Public */,
      46,    0,  434,    2, 0x0a /* Public */,
      47,    0,  435,    2, 0x0a /* Public */,
      48,    0,  436,    2, 0x0a /* Public */,
      49,    0,  437,    2, 0x0a /* Public */,
      50,    0,  438,    2, 0x0a /* Public */,
      51,    0,  439,    2, 0x0a /* Public */,
      52,    0,  440,    2, 0x0a /* Public */,
      53,    0,  441,    2, 0x0a /* Public */,
      54,    1,  442,    2, 0x0a /* Public */,
      55,    1,  445,    2, 0x0a /* Public */,
      56,    1,  448,    2, 0x0a /* Public */,
      57,    1,  451,    2, 0x0a /* Public */,
      58,    0,  454,    2, 0x0a /* Public */,
      59,    0,  455,    2, 0x0a /* Public */,
      60,    0,  456,    2, 0x0a /* Public */,
      61,    1,  457,    2, 0x0a /* Public */,
      64,    0,  460,    2, 0x0a /* Public */,
      65,    0,  461,    2, 0x0a /* Public */,
      65,    2,  462,    2, 0x0a /* Public */,
      65,    1,  467,    2, 0x2a /* Public | MethodCloned */,
      65,    2,  470,    2, 0x0a /* Public */,
      69,    2,  475,    2, 0x0a /* Public */,
      72,    1,  480,    2, 0x0a /* Public */,
      73,    1,  483,    2, 0x0a /* Public */,
      76,    1,  486,    2, 0x0a /* Public */,
      78,    0,  489,    2, 0x0a /* Public */,
      79,    0,  490,    2, 0x0a /* Public */,
      80,    1,  491,    2, 0x0a /* Public */,
      82,    0,  494,    2, 0x0a /* Public */,
      83,    4,  495,    2, 0x08 /* Private */,
      88,    1,  504,    2, 0x08 /* Private */,
      89,    0,  507,    2, 0x08 /* Private */,
      90,    0,  508,    2, 0x08 /* Private */,
      91,    0,  509,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Bool, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   66,   67,
    QMetaType::Void, QMetaType::QString,   66,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   66,   68,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   70,   71,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   81,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   84,   85,   86,   87,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->autoProxyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadTlogMenuClicked(); break;
        case 3: _t->disableTLogReplayBar(); break;
        case 4: _t->enableTLogReplayBar(); break;
        case 5: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->showCriticalMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->showInfoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->showSettings(); break;
        case 10: _t->showAbout(); break;
        case 11: _t->addLink(); break;
        case 12: _t->addLink((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { bool _r = _t->configLink((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->linkError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->configure(); break;
        case 16: _t->simulateLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 18: _t->UASCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 19: _t->UASDeleted((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 20: _t->UASSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->startVideoCapture(); break;
        case 22: _t->stopVideoCapture(); break;
        case 23: _t->saveScreen(); break;
        case 24: _t->enableHeartbeat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setAdvancedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->loadHardwareConfigView(); break;
        case 27: _t->loadSoftwareConfigView(); break;
        case 28: _t->loadUnconnectedView(); break;
        case 29: _t->loadPilotView(); break;
        case 30: _t->loadSimulationView(); break;
        case 31: _t->loadEngineerView(); break;
        case 32: _t->loadOperatorView(); break;
        case 33: _t->loadMultiOperatorView(); break;
        case 34: _t->loadMAVLinkView(); break;
        case 35: _t->loadFirmwareUpdateView(); break;
        case 36: _t->loadTerminalView(); break;
        case 37: _t->showHelp(); break;
        case 38: _t->showCredits(); break;
        case 39: _t->showRoadMap(); break;
        case 40: _t->reloadStylesheet(); break;
        case 41: _t->selectStylesheet(); break;
        case 42: _t->selectStylesheetDialogAccepted(); break;
        case 43: _t->enableDockWidgetTitleBars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->enableAutoReconnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->enableLowPowerMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->enableAutoProxyMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->loadNativeStyle(); break;
        case 48: _t->loadIndoorStyle(); break;
        case 49: _t->loadOutdoorStyle(); break;
        case 50: _t->loadStyle((*reinterpret_cast< QGC_MAINWINDOW_STYLE(*)>(_a[1]))); break;
        case 51: _t->createCustomWidget(); break;
        case 52: _t->loadCustomWidget(); break;
        case 53: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 54: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 56: _t->loadCustomWidgetsFromDefaults((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 57: _t->showHILConfigurationWidget((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 58: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 59: _t->showTool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->showCentralWidget(); break;
        case 61: _t->configureWindowName(); break;
        case 62: _t->commsWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 63: _t->toolBar(); break;
        case 64: _t->showAutoUpdateDownloadDialog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 65: _t->autoUpdateCancelled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 66: _t->showNoUpdateAvailDialog(); break;
        case 67: _t->showTerminalConsole(); break;
        case 68: _t->closeTerminalConsole(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 57:
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
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::initStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::autoProxyChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::autoProxyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
