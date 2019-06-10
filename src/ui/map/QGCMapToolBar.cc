#include "QGCMapToolBar.h"
#include "UASManager.h"
#include "ArduPilotMegaMAV.h"
#include "QGCMapWidget.h"
#include "ui_QGCMapToolBar.h"
#include "WaypoIntinput.h"
#include "QFileDialog"
#include "MultiviewPopup.h"
#include "qlogging.h"

QGCMapToolBar::QGCMapToolBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QGCMapToolBar),
    map(NULL),
    optionsMenu(this),
    trailPlotMenu(this),
    updateTimesMenu(this),
    mapTypesMenu(this),
    trailSettingsGroup(new QActionGroup(this)),
    updateTimesGroup(new QActionGroup(this)),
    mapTypesGroup(new QActionGroup(this))
{
    ui->setupUi(this);
    p = NULL;
    //p->setFocus();

}

static const struct {
    const char*    name;
    MapType::Types type;
} sMapTypes[] = {
    { "Bing Hybrid", MapType::BingHybrid },
    { "Bing Map", MapType::BingMap },
    { "Bing Satellite", MapType::BingSatellite },
    { "Google Hybrid", MapType::GoogleHybrid },
    { "Google Map", MapType::GoogleMap },
    { "Google Satellite", MapType::GoogleSatellite },
    { "Google Terrain", MapType::GoogleTerrain },
    { "OpenStreetMap", MapType::OpenStreetMap },
    { "ArcGIS Map", MapType::ArcGIS_Map },
    { "ArcGIS Terrain", MapType::ArcGIS_Terrain },
    { "ArcGIS World Topo", MapType::ArcGIS_WorldTopo },
    { "Statkart Topo", MapType::Statkart_Topo },
    { "Eniro N,S,F,D,P", MapType::Eniro_Topo }
};

static const size_t sNumMapTypes = sizeof(sMapTypes) / sizeof(sMapTypes[0]);

void QGCMapToolBar::setMap(QGCMapWidget* map)
{
    this->map = map;

    loadSettings();

    if (map)
    {
        connect(ui->goToButton, SIGNAL(clicked()), map, SLOT(showGoToDialog()));
        connect(ui->goHomeButton, SIGNAL(clicked()), this, SLOT(goHome()));
        connect(ui->lastPosButton, SIGNAL(clicked()), map, SLOT(lastPosition()));
        connect(ui->clearTrailsButton, SIGNAL(clicked()), map, SLOT(deleteTrails()));
        connect(map, SIGNAL(OnTileLoadStart()), this, SLOT(tileLoadStart()));
        connect(map, SIGNAL(OnTileLoadComplete()), this, SLOT(tileLoadEnd()));
        connect(map, SIGNAL(OnTilesStillToLoad(int)), this, SLOT(tileLoadProgress(int)));
        connect(ui->ripMapButton, SIGNAL(clicked()), map, SLOT(cacheVisibleRegion()));

        map->setFollowUAVEnabled(ui->followPushButton->isChecked());
        connect(ui->followPushButton, SIGNAL(clicked(bool)), map, SLOT(setFollowUAVEnabled(bool)));

        // Edit mode handling
        ui->editButton->hide();

        const int uavTrailTimeList[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                      // seconds
        const int uavTrailTimeCount = 10;

        const int uavTrailDistanceList[] = {1, 2, 5, 10, 20, 50, 100, 200, 500};             // meters
        const int uavTrailDistanceCount = 9;

        // Set exclusive items
        trailSettingsGroup->setExclusive(true);
        updateTimesGroup->setExclusive(true);
        mapTypesGroup->setExclusive(true);

        // Build up menu
        trailPlotMenu.setTitle(tr("&Add trail dot every.."));
        updateTimesMenu.setTitle(tr("&Limit map view update rate to.."));
        mapTypesMenu.setTitle(tr("&Map type"));


        //setup the mapTypesMenu
        QAction* action;
        MapType::Types mapType = map->GetMapType();
        for (size_t i = 0; i < sNumMapTypes; ++i) {
            action = mapTypesMenu.addAction(tr(sMapTypes[i].name), this, SLOT(setMapType()));
            action->setData(sMapTypes[i].type);
            action->setCheckable(true);
            mapTypesGroup->addAction(action);
            if (mapType == sMapTypes[i].type) action->setChecked(true);
        }
        optionsMenu.addMenu(&mapTypesMenu);

        // FIXME MARK CURRENT VALUES IN MENU
        QAction *defaultTrailAction = trailPlotMenu.addAction(tr("No trail"), this, SLOT(setUAVTrailTime()));
        defaultTrailAction->setData(-1);
        defaultTrailAction->setCheckable(true);
        trailSettingsGroup->addAction(defaultTrailAction);

        for (int i = 0; i < uavTrailTimeCount; ++i)
        {
            action = trailPlotMenu.addAction(tr("%1 second%2").arg(uavTrailTimeList[i]).arg((uavTrailTimeList[i] > 1) ? "s" : ""), this, SLOT(setUAVTrailTime()));
            action->setData(uavTrailTimeList[i]);
            action->setCheckable(true);
            trailSettingsGroup->addAction(action);
            if (static_cast<mapcontrol::UAVTrailType::Types>(map->getTrailType()) == mapcontrol::UAVTrailType::ByTimeElapsed && map->getTrailInterval() == uavTrailTimeList[i])
            {
                // This is the current active time, set the action checked
                action->setChecked(true);
            }
        }
        for (int i = 0; i < uavTrailDistanceCount; ++i)
        {
            action = trailPlotMenu.addAction(tr("%1 meter%2").arg(uavTrailDistanceList[i]).arg((uavTrailDistanceList[i] > 1) ? "s" : ""), this, SLOT(setUAVTrailDistance()));
            action->setData(uavTrailDistanceList[i]);
            action->setCheckable(true);
            trailSettingsGroup->addAction(action);
            if (static_cast<mapcontrol::UAVTrailType::Types>(map->getTrailType()) == mapcontrol::UAVTrailType::ByDistance && map->getTrailInterval() == uavTrailDistanceList[i])
            {
                // This is the current active time, set the action checked
                action->setChecked(true);
            }
        }

        // Set no trail checked if no action is checked yet
        if (!trailSettingsGroup->checkedAction())
        {
            defaultTrailAction->setChecked(true);
        }

        optionsMenu.addMenu(&trailPlotMenu);

        // Add update times menu
        for (int i = 100; i < 5000; i+=400)
        {
            float time = i/1000.0f; // Convert from ms to seconds
            QAction* action = updateTimesMenu.addAction(tr("%1 seconds").arg(time), this, SLOT(setUpdateInterval()));
            action->setData(time);
            action->setCheckable(true);
            if (time == map->getUpdateRateLimit())
            {
                action->blockSignals(true);
                action->setChecked(true);
                action->blockSignals(false);
            }
            updateTimesGroup->addAction(action);
        }

        // If the current time is not part of the menu defaults
        // still add it as new option
        if (!updateTimesGroup->checkedAction())
        {
            float time = map->getUpdateRateLimit();
            QAction* action = updateTimesMenu.addAction(tr("uptate every %1 seconds").arg(time), this, SLOT(setUpdateInterval()));
            action->setData(time);
            action->setCheckable(true);
            action->setChecked(true);
            updateTimesGroup->addAction(action);
        }
        optionsMenu.addMenu(&updateTimesMenu);

        ui->optionsButton->setMenu(&optionsMenu);
    }
}

void QGCMapToolBar::setUAVTrailTime()
{
    QObject* sender = QObject::sender();
    QAction* action = qobject_cast<QAction*>(sender);

    if (action)
    {
        bool ok;
        int trailTime = action->data().toInt(&ok);
        if (ok)
        {
            (map->setTrailModeTimed(trailTime));
            ui->posLabel->setText(tr("Trail mode: Every %1 second%2").arg(trailTime).arg((trailTime > 1) ? "s" : ""));
        }
    }
}

void QGCMapToolBar::setUAVTrailDistance()
{
    QObject* sender = QObject::sender();
    QAction* action = qobject_cast<QAction*>(sender);

    if (action)
    {
        bool ok;
        int trailDistance = action->data().toInt(&ok);
        if (ok)
        {
            map->setTrailModeDistance(trailDistance);
            ui->posLabel->setText(tr("Trail mode: Every %1 meter%2").arg(trailDistance).arg((trailDistance == 1) ? "s" : ""));
        }
    }
}

void QGCMapToolBar::setUpdateInterval()
{
    QObject* sender = QObject::sender();
    QAction* action = qobject_cast<QAction*>(sender);

    if (action)
    {
        bool ok;
        float time = action->data().toFloat(&ok);
        if (ok)
        {
            map->setUpdateRateLimit(time);
            ui->posLabel->setText(tr("Map update rate limit: %1 second%2").arg(time).arg((time != 1.0f) ? "s" : ""));
        }
    }
}

void QGCMapToolBar::setMapType()
{
    QObject* sender = QObject::sender();
    QAction* action = qobject_cast<QAction*>(sender);

    if (action)
    {
        bool ok;
        int mapType = action->data().toInt(&ok);
        if (ok)
        {
            map->SetMapType((MapType::Types)mapType);
            ui->posLabel->setText(tr("Map type: %1").arg(mapType));
        }
    }
}

void QGCMapToolBar::tileLoadStart()
{
    ui->posLabel->setText(tr("Starting to load tiles.."));
}

void QGCMapToolBar::tileLoadEnd()
{
    ui->posLabel->setText(tr("Finished"));
}

void QGCMapToolBar::tileLoadProgress(int progress)
{
    if (progress == 1)
    {
        ui->posLabel->setText(tr("1 tile to load.."));
    }
    else if (progress > 0)
    {
        ui->posLabel->setText(tr("%1 tiles to load..").arg(progress));
    }
    else
    {
        tileLoadEnd();
    }
}

void QGCMapToolBar::goHome()
{
    UASManager *umanager = UASManager::instance();
    if (umanager){
        ArduPilotMegaMAV* apmUas= dynamic_cast<ArduPilotMegaMAV*>(umanager->getActiveUAS());
        if (apmUas){
            UASWaypointManager* wpManager = apmUas->getWaypointManager();
            const Waypoint* homeWp = wpManager->getWaypoint(0); // Waypoint 0 is home in APM
            if (homeWp){
                map->updateHomePosition(homeWp->getLatitude(), homeWp->getLongitude(), homeWp->getAltitude());
                map->goHome();
            }
        } else {
            map->goHome();
        }
    }
}

void QGCMapToolBar::loadSettings()
{
    QSettings settings;
    settings.beginGroup("QGC_MAPTOOL");
    bool follow = settings.value("FOLLOW_UAV", false).toBool();
    ui->followPushButton->setChecked(follow);
}

void QGCMapToolBar::storeSettings()
{
    QSettings settings;
    settings.beginGroup("QGC_MAPTOOL");
    settings.setValue("FOLLOW_UAV", ui->followPushButton->isChecked());
    settings.endGroup();
    settings.sync();
}

QGCMapToolBar::~QGCMapToolBar()
{
    storeSettings();
    delete ui;
    delete trailSettingsGroup;
    delete updateTimesGroup;
    delete mapTypesGroup;
    // FIXME Delete all actions
}
//added by: GUANG YI LIM
void QGCMapToolBar::on_pushButton_clicked()
{
    QFileDialog *dialog = new QFileDialog(this, tr("Load File"), QGC::missionDirectory(), tr("Waypoint File (*.txt)"));
    dialog->setFileMode(QFileDialog::ExistingFile);
    connect(dialog,SIGNAL(accepted()),this,SLOT(loadUASWaypointsDialogAccepted()));
    dialog->exec();
}
/**
 * @brief QGCMapToolBar::loadUASWaypointsDialogAccepted
 * loads waypoints for multiple UAS into the system and dispalys them
 */
void QGCMapToolBar::loadUASWaypointsDialogAccepted(){
    QFileDialog *dialog = qobject_cast<QFileDialog*>(sender());
    if (!dialog)
    {
        return;
    }
    if (dialog->selectedFiles().size() == 0)
    {
        //No file selected/cancel clicked
        return;
    }
    QFile file(dialog->selectedFiles().at(0));
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }

    UASWaypointManager * wpm;

    QTextStream in(&file);

    QString check = in.readLine();
    //check file signature
    if(check != "CYPLANNER"){
        return;
    }

    //loops through entire file
    int n;
    bool skip = false;
    while(!in.atEnd()){
        //gets UAS ID
        if(!skip){
            QString id =  in.readLine();
            QStringRef sub(&id,4,2);
            n = sub.toInt();
        }
        //error here if we input an invalid UASID, will crash due to accessing non existance location
        UASInterface * uas = UASManager::instance()->getUASForId(n);

        if(!UASManager::instance()->getUASList().contains(uas)){
//            wpm->updateStatusString(tr("Invalid UAS ID. Load operation only partly succesful."));
            QMessageBox *q = new QMessageBox(this);
            q->setText("Invalid UAS ID. Load operation only partly succesful");
            q->setStandardButtons(QMessageBox::Ok);
            q->setDefaultButton(QMessageBox::Ok);
            q->exec();
            break;
        }
        wpm = uas->getWaypointManager();
        qDeleteAll(wpm->getWaypointEditableList());
        wpm->waypointsEditableClear();

//        emit wpm->waypointEditableListChanged();
//        emit wpm->waypointViewOnlyListChanged(n);

        while(!in.atEnd()){
            Waypoint *t = new Waypoint();
            QString nxtLine;
            nxtLine = in.readLine();

            if(t->load2(nxtLine)){
                int m = wpm->getWaypointEditableList().count();
                t->setId(m);
                wpm->insertEditable(m,t);
            }
            else{
                QStringRef temp(&nxtLine,4,2);
                n = temp.toInt();
                skip = true;
                break;
            }

        }
        emit wpm->loadWPFile();
//        emit wpm->waypointEditableListChanged();
//        emit wpm->waypointViewOnlyListChanged(n);
    }
    file.close();
    foreach (UASInterface * uas, UASManager::instance()->getUASList()){
        wpm = uas->getWaypointManager();
        emit wpm->waypointEditableListChanged();
        emit wpm->waypointEditableListChanged(uas->getUASID());

    }
}

void QGCMapToolBar::on_multiButton_clicked()
{
    //    p->show();
   //  p->setWindowModality(Qt::WindowModal);
    //if(p =nullptr)

//    p->setModal(false);
//    p->exec();
    p = new MultiviewPopup(this);
    p->show();
}
