#include "CoordinateInput.h"
#include "ui_CoordinateInput.h"
#include"QGCMapWidget.h"

CoordinateInput::CoordinateInput(const UASInterface *u, QWidget *parent) :
    QDialog(parent),
    uas(u),
    ui(new Ui::CoordinateInput)
{
    ui->setupUi(this);
    QStringList temp;
    ui->UASID->setText("MAV " + QString::number(uas->getUASID()));
    ui->tableWidget->setColumnCount(3);
    temp << "Longitude" << "Latitude" << "Altitude";
    ui->tableWidget->setHorizontalHeaderLabels(temp);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    UASWaypointManager *wps =  UASManager::instance()->getUASForId(uas->getUASID())->getWaypointManager();
    int l , j ;
    for(int i = 0; i < wps->getNavTypeCount();i++){
        l = wps->getNavTypeWaypointList().at(i)->getLongitude();
        j = wps->getNavTypeWaypointList().at(i)->getLatitude();
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        int temp = ui->tableWidget->rowCount()-1;
        ui->tableWidget->setItem(temp,LONGITUDE, new QTableWidgetItem(QString::number(l)));
        ui->tableWidget->setItem(temp,LATITUDE, new QTableWidgetItem(QString::number(j)));
        ui->tableWidget->setItem(temp,ALTITUDE, new QTableWidgetItem(QString::number(0)));

    }
}

CoordinateInput::~CoordinateInput()
{
    delete ui;
}

void CoordinateInput::setUAS(int m){
    this->n= m;
}

void CoordinateInput::on_AddButton_clicked()
{
    int log, lat, alt;
    log = ui->Long_box->value();
    lat = ui->Lat_box->value();
    alt = ui->Alt_box->value();

    if(log != NULL && lat != NULL){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        int temp = ui->tableWidget->rowCount()-1;
        ui->tableWidget->setItem(temp,LONGITUDE, new QTableWidgetItem(QString::number(log)));
        ui->tableWidget->setItem(temp,LATITUDE, new QTableWidgetItem(QString::number(lat)));
        ui->tableWidget->setItem(temp,ALTITUDE, new QTableWidgetItem(QString::number(alt)));
    }
}

void CoordinateInput::on_pushButton_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void CoordinateInput::on_buttonBox_accepted()
{
    UASWaypointManager* wps = UASManager::instance()->getUASForId(uas->getUASID())->getWaypointManager();
    int i = 0;
    QTableWidgetItem * item;
    Waypoint *  wp;
    for (i = 0 ; i < ui->tableWidget->rowCount();i++){

        wps->blockSignals(true);
        wp = wps->createWaypoint();
        item = ui->tableWidget->item(i,0);
        wp->setLatitude(item->text().toDouble());
        item = ui->tableWidget->item(i,1);
        wp->setLongitude(item->text().toDouble());
        wps->blockSignals(false);
        wps->notifyOfChangeEditable(NULL);
    }
    //QGCMapWidget::updateWaypointList();
}

void CoordinateInput::on_buttonBox_rejected()
{
    return;
}
