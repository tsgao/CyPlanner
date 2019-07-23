#include "multiprimaryflightdisplay.h"
#include "ui_multiprimaryflightdisplay.h"

multiPrimaryFlightDisplay::multiPrimaryFlightDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::multiPrimaryFlightDisplay)
{
    ui->setupUi(this);
}

multiPrimaryFlightDisplay::~multiPrimaryFlightDisplay()
{
    delete ui;
}
