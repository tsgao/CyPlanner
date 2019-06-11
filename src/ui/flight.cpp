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
    QLabel *l = new QLabel(this);
    QVBoxLayout *layout = new QVBoxLayout();
//    QQuickWidget *q = new QQuickWidget;
//    q->setSource(QGC::shareDirectory() + "/qml/PrimaryFlightDisplayQML.qml");
    PrimaryFlightDisplayQML *q = new PrimaryFlightDisplayQML(this);
    l->setText("test");
    layout->addWidget(q);
    layout->addWidget(l);
    setLayout(layout);
}

Flight::~Flight()
{
    delete ui;
}
