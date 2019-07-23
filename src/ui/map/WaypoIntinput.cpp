#include "WaypoIntinput.h"
#include "ui_WaypointInput.h"
#include "UASManager.h"
#include "CoordinateInput.h"

WaypointInput::WaypointInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WaypointInput)
{
    ui->setupUi(this);
    setWindowTitle("Active UAS");
    foreach (UASInterface * u, UASManager::instance()->getUASList()){
        if(u->getUASID()< 10){
            ui->listWidget->addItem("MAV 00"+ QString::number(u->getUASID()));
        }
        else if(u->getUASID() < 100){
            ui->listWidget->addItem("MAV 0"+ QString::number(u->getUASID()));
        }
        else{
            ui->listWidget->addItem("MAV "+ QString::number(u->getUASID()));
        }
    }
}

WaypointInput::~WaypointInput()
{
    delete ui;
}

void WaypointInput::on_pushButton_clicked()
{
    QString curr = ui->listWidget->currentItem()->text();
    QStringRef sub(&curr, 4,3);
    int m = sub.toInt();
    CoordinateInput cordIn(UASManager::instance()->getUASForId(m));
   // connect(this, SIGNAL(clicked), &cordIn, SLOT(cordIn.setUAS(m)));
   // cordIn.setUAS(m);
    cordIn.setModal(true);
    cordIn.exec();

}
