#include "flight.h"
#include "ui_flight.h"
#include "PrimaryFlightDisplayQML.h"
#include <QLayout>
#include <QLabel>
#include <QQuickWidget>
#include <QDockWidget>

Flight::Flight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Flight)
{
    ui->setupUi(this);
}

Flight::~Flight()
{
    delete ui;
}
