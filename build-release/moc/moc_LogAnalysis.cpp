/****************************************************************************
** Meta object code from reading C++ file 'LogAnalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/Loghandling/LogAnalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogAnalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogAnalysisCursor_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogAnalysisCursor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogAnalysisCursor_t qt_meta_stringdata_LogAnalysisCursor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "LogAnalysisCursor"
QT_MOC_LITERAL(1, 18, 12), // "newCursorPos"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "xPosition"
QT_MOC_LITERAL(4, 42, 17), // "rangeCursorMoving"
QT_MOC_LITERAL(5, 60, 17) // "cursorRangeChange"

    },
    "LogAnalysisCursor\0newCursorPos\0\0"
    "xPosition\0rangeCursorMoving\0"
    "cursorRangeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogAnalysisCursor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogAnalysisCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogAnalysisCursor *_t = static_cast<LogAnalysisCursor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newCursorPos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->rangeCursorMoving(); break;
        case 2: _t->cursorRangeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LogAnalysisCursor::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogAnalysisCursor::newCursorPos)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LogAnalysisCursor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogAnalysisCursor::rangeCursorMoving)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LogAnalysisCursor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogAnalysisCursor::cursorRangeChange)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LogAnalysisCursor::staticMetaObject = {
    { &QCPItemStraightLine::staticMetaObject, qt_meta_stringdata_LogAnalysisCursor.data,
      qt_meta_data_LogAnalysisCursor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogAnalysisCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogAnalysisCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogAnalysisCursor.stringdata0))
        return static_cast<void*>(this);
    return QCPItemStraightLine::qt_metacast(_clname);
}

int LogAnalysisCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPItemStraightLine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LogAnalysisCursor::newCursorPos(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogAnalysisCursor::rangeCursorMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogAnalysisCursor::cursorRangeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_LogAnalysis_t {
    QByteArrayData data[78];
    char stringdata0[1270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogAnalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogAnalysis_t qt_meta_stringdata_LogAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LogAnalysis"
QT_MOC_LITERAL(1, 12, 11), // "setTablePos"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "xPosition"
QT_MOC_LITERAL(4, 35, 18), // "rangeCursorsMoving"
QT_MOC_LITERAL(5, 54, 17), // "cursorRangeChange"
QT_MOC_LITERAL(6, 72, 13), // "hideTableView"
QT_MOC_LITERAL(7, 86, 4), // "hide"
QT_MOC_LITERAL(8, 91, 26), // "showValueUnderMouseClicked"
QT_MOC_LITERAL(9, 118, 7), // "checked"
QT_MOC_LITERAL(10, 126, 17), // "logLoadingStarted"
QT_MOC_LITERAL(11, 144, 18), // "logLoadingProgress"
QT_MOC_LITERAL(12, 163, 3), // "pos"
QT_MOC_LITERAL(13, 167, 4), // "size"
QT_MOC_LITERAL(14, 172, 15), // "logLoadingError"
QT_MOC_LITERAL(15, 188, 8), // "errorstr"
QT_MOC_LITERAL(16, 197, 14), // "logLoadingDone"
QT_MOC_LITERAL(17, 212, 17), // "AP2DataPlotStatus"
QT_MOC_LITERAL(18, 230, 6), // "status"
QT_MOC_LITERAL(19, 237, 26), // "logLoadingThreadTerminated"
QT_MOC_LITERAL(20, 264, 32), // "logLoadingProgressDialogCanceled"
QT_MOC_LITERAL(21, 297, 19), // "modeCheckboxClicked"
QT_MOC_LITERAL(22, 317, 20), // "errorCheckboxClicked"
QT_MOC_LITERAL(23, 338, 20), // "eventCheckboxClicked"
QT_MOC_LITERAL(24, 359, 18), // "msgCheckboxClicked"
QT_MOC_LITERAL(25, 378, 19), // "verticalScrollMoved"
QT_MOC_LITERAL(26, 398, 5), // "value"
QT_MOC_LITERAL(27, 404, 21), // "horizontalScrollMoved"
QT_MOC_LITERAL(28, 426, 12), // "xAxisChanged"
QT_MOC_LITERAL(29, 439, 8), // "QCPRange"
QT_MOC_LITERAL(30, 448, 5), // "range"
QT_MOC_LITERAL(31, 454, 11), // "itemEnabled"
QT_MOC_LITERAL(32, 466, 4), // "name"
QT_MOC_LITERAL(33, 471, 12), // "itemDisabled"
QT_MOC_LITERAL(34, 484, 24), // "indexTypeCheckBoxClicked"
QT_MOC_LITERAL(35, 509, 17), // "filterItemChanged"
QT_MOC_LITERAL(36, 527, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(37, 544, 4), // "item"
QT_MOC_LITERAL(38, 549, 3), // "col"
QT_MOC_LITERAL(39, 553, 19), // "filterAcceptClicked"
QT_MOC_LITERAL(40, 573, 19), // "filterCancelClicked"
QT_MOC_LITERAL(41, 593, 23), // "showFilterButtonClicked"
QT_MOC_LITERAL(42, 617, 22), // "filterSelectAllClicked"
QT_MOC_LITERAL(43, 640, 25), // "filterSelectInvertClicked"
QT_MOC_LITERAL(44, 666, 18), // "selectedRowChanged"
QT_MOC_LITERAL(45, 685, 7), // "current"
QT_MOC_LITERAL(46, 693, 8), // "previous"
QT_MOC_LITERAL(47, 702, 21), // "exportAsciiLogClicked"
QT_MOC_LITERAL(48, 724, 16), // "exportKmlClicked"
QT_MOC_LITERAL(49, 741, 8), // "doExport"
QT_MOC_LITERAL(50, 750, 9), // "kmlExport"
QT_MOC_LITERAL(51, 760, 12), // "iconInterval"
QT_MOC_LITERAL(52, 773, 26), // "graphControlsButtonClicked"
QT_MOC_LITERAL(53, 800, 20), // "graphGroupingChanged"
QT_MOC_LITERAL(54, 821, 40), // "QList<AP2DataPlotAxisDialog::..."
QT_MOC_LITERAL(55, 862, 14), // "graphRangeList"
QT_MOC_LITERAL(56, 877, 18), // "graphColorsChanged"
QT_MOC_LITERAL(57, 896, 20), // "QMap<QString,QColor>"
QT_MOC_LITERAL(58, 917, 9), // "colorlist"
QT_MOC_LITERAL(59, 927, 18), // "contextMenuRequest"
QT_MOC_LITERAL(60, 946, 18), // "insertSimpleCursor"
QT_MOC_LITERAL(61, 965, 18), // "insertRangeCursors"
QT_MOC_LITERAL(62, 984, 18), // "removeSimpleCursor"
QT_MOC_LITERAL(63, 1003, 18), // "removeRangeCursors"
QT_MOC_LITERAL(64, 1022, 13), // "plotMouseMove"
QT_MOC_LITERAL(65, 1036, 12), // "QMouseEvent*"
QT_MOC_LITERAL(66, 1049, 3), // "evt"
QT_MOC_LITERAL(67, 1053, 17), // "resetValueScaling"
QT_MOC_LITERAL(68, 1071, 17), // "enableRangeCursor"
QT_MOC_LITERAL(69, 1089, 6), // "enable"
QT_MOC_LITERAL(70, 1096, 17), // "enableTableCursor"
QT_MOC_LITERAL(71, 1114, 25), // "storeGraphSettingsPressed"
QT_MOC_LITERAL(72, 1140, 25), // "applyGraphSettingsPressed"
QT_MOC_LITERAL(73, 1166, 22), // "analysisPresetSelected"
QT_MOC_LITERAL(74, 1189, 31), // "PresetManager::presetElementVec"
QT_MOC_LITERAL(75, 1221, 6), // "preset"
QT_MOC_LITERAL(76, 1228, 22), // "addCurrentViewToPreset"
QT_MOC_LITERAL(77, 1251, 18) // "showMapViewClicked"

    },
    "LogAnalysis\0setTablePos\0\0xPosition\0"
    "rangeCursorsMoving\0cursorRangeChange\0"
    "hideTableView\0hide\0showValueUnderMouseClicked\0"
    "checked\0logLoadingStarted\0logLoadingProgress\0"
    "pos\0size\0logLoadingError\0errorstr\0"
    "logLoadingDone\0AP2DataPlotStatus\0"
    "status\0logLoadingThreadTerminated\0"
    "logLoadingProgressDialogCanceled\0"
    "modeCheckboxClicked\0errorCheckboxClicked\0"
    "eventCheckboxClicked\0msgCheckboxClicked\0"
    "verticalScrollMoved\0value\0"
    "horizontalScrollMoved\0xAxisChanged\0"
    "QCPRange\0range\0itemEnabled\0name\0"
    "itemDisabled\0indexTypeCheckBoxClicked\0"
    "filterItemChanged\0QTreeWidgetItem*\0"
    "item\0col\0filterAcceptClicked\0"
    "filterCancelClicked\0showFilterButtonClicked\0"
    "filterSelectAllClicked\0filterSelectInvertClicked\0"
    "selectedRowChanged\0current\0previous\0"
    "exportAsciiLogClicked\0exportKmlClicked\0"
    "doExport\0kmlExport\0iconInterval\0"
    "graphControlsButtonClicked\0"
    "graphGroupingChanged\0"
    "QList<AP2DataPlotAxisDialog::GraphRange>\0"
    "graphRangeList\0graphColorsChanged\0"
    "QMap<QString,QColor>\0colorlist\0"
    "contextMenuRequest\0insertSimpleCursor\0"
    "insertRangeCursors\0removeSimpleCursor\0"
    "removeRangeCursors\0plotMouseMove\0"
    "QMouseEvent*\0evt\0resetValueScaling\0"
    "enableRangeCursor\0enable\0enableTableCursor\0"
    "storeGraphSettingsPressed\0"
    "applyGraphSettingsPressed\0"
    "analysisPresetSelected\0"
    "PresetManager::presetElementVec\0preset\0"
    "addCurrentViewToPreset\0showMapViewClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogAnalysis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x0a /* Public */,
       4,    0,  257,    2, 0x0a /* Public */,
       5,    0,  258,    2, 0x0a /* Public */,
       6,    1,  259,    2, 0x08 /* Private */,
       8,    1,  262,    2, 0x08 /* Private */,
      10,    0,  265,    2, 0x08 /* Private */,
      11,    2,  266,    2, 0x08 /* Private */,
      14,    1,  271,    2, 0x08 /* Private */,
      16,    1,  274,    2, 0x08 /* Private */,
      19,    0,  277,    2, 0x08 /* Private */,
      20,    0,  278,    2, 0x08 /* Private */,
      21,    1,  279,    2, 0x08 /* Private */,
      22,    1,  282,    2, 0x08 /* Private */,
      23,    1,  285,    2, 0x08 /* Private */,
      24,    1,  288,    2, 0x08 /* Private */,
      25,    1,  291,    2, 0x08 /* Private */,
      27,    1,  294,    2, 0x08 /* Private */,
      28,    1,  297,    2, 0x08 /* Private */,
      31,    1,  300,    2, 0x08 /* Private */,
      33,    1,  303,    2, 0x08 /* Private */,
      34,    1,  306,    2, 0x08 /* Private */,
      35,    2,  309,    2, 0x08 /* Private */,
      39,    0,  314,    2, 0x08 /* Private */,
      40,    0,  315,    2, 0x08 /* Private */,
      41,    0,  316,    2, 0x08 /* Private */,
      42,    0,  317,    2, 0x08 /* Private */,
      43,    0,  318,    2, 0x08 /* Private */,
      44,    2,  319,    2, 0x08 /* Private */,
      47,    0,  324,    2, 0x08 /* Private */,
      48,    0,  325,    2, 0x08 /* Private */,
      49,    2,  326,    2, 0x08 /* Private */,
      52,    0,  331,    2, 0x08 /* Private */,
      53,    1,  332,    2, 0x08 /* Private */,
      56,    1,  335,    2, 0x08 /* Private */,
      59,    1,  338,    2, 0x08 /* Private */,
      60,    0,  341,    2, 0x08 /* Private */,
      61,    0,  342,    2, 0x08 /* Private */,
      62,    0,  343,    2, 0x08 /* Private */,
      63,    0,  344,    2, 0x08 /* Private */,
      64,    1,  345,    2, 0x08 /* Private */,
      67,    0,  348,    2, 0x08 /* Private */,
      68,    1,  349,    2, 0x08 /* Private */,
      70,    1,  352,    2, 0x08 /* Private */,
      71,    0,  355,    2, 0x08 /* Private */,
      72,    0,  356,    2, 0x08 /* Private */,
      73,    1,  357,    2, 0x08 /* Private */,
      76,    0,  360,    2, 0x08 /* Private */,
      77,    0,  361,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Int,   37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double,   50,   51,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogAnalysis *_t = static_cast<LogAnalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTablePos((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->rangeCursorsMoving(); break;
        case 2: _t->cursorRangeChange(); break;
        case 3: _t->hideTableView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showValueUnderMouseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->logLoadingStarted(); break;
        case 6: _t->logLoadingProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->logLoadingError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->logLoadingDone((*reinterpret_cast< AP2DataPlotStatus(*)>(_a[1]))); break;
        case 9: _t->logLoadingThreadTerminated(); break;
        case 10: _t->logLoadingProgressDialogCanceled(); break;
        case 11: _t->modeCheckboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->errorCheckboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->eventCheckboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->msgCheckboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->verticalScrollMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->horizontalScrollMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->xAxisChanged((*reinterpret_cast< QCPRange(*)>(_a[1]))); break;
        case 18: _t->itemEnabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->itemDisabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->indexTypeCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->filterItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->filterAcceptClicked(); break;
        case 23: _t->filterCancelClicked(); break;
        case 24: _t->showFilterButtonClicked(); break;
        case 25: _t->filterSelectAllClicked(); break;
        case 26: _t->filterSelectInvertClicked(); break;
        case 27: _t->selectedRowChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 28: _t->exportAsciiLogClicked(); break;
        case 29: _t->exportKmlClicked(); break;
        case 30: _t->doExport((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 31: _t->graphControlsButtonClicked(); break;
        case 32: _t->graphGroupingChanged((*reinterpret_cast< QList<AP2DataPlotAxisDialog::GraphRange>(*)>(_a[1]))); break;
        case 33: _t->graphColorsChanged((*reinterpret_cast< QMap<QString,QColor>(*)>(_a[1]))); break;
        case 34: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 35: _t->insertSimpleCursor(); break;
        case 36: _t->insertRangeCursors(); break;
        case 37: _t->removeSimpleCursor(); break;
        case 38: _t->removeRangeCursors(); break;
        case 39: _t->plotMouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 40: _t->resetValueScaling(); break;
        case 41: _t->enableRangeCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->enableTableCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->storeGraphSettingsPressed(); break;
        case 44: _t->applyGraphSettingsPressed(); break;
        case 45: _t->analysisPresetSelected((*reinterpret_cast< PresetManager::presetElementVec(*)>(_a[1]))); break;
        case 46: _t->addCurrentViewToPreset(); break;
        case 47: _t->showMapViewClicked(); break;
        default: ;
        }
    }
}

const QMetaObject LogAnalysis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogAnalysis.data,
      qt_meta_data_LogAnalysis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogAnalysis.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
