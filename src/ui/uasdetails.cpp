#include "uasdetails.h"
#include "ui_uasdetails.h"

UASDetails::UASDetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UASDetails)
{
    ui->setupUi(this);
}

UASDetails::~UASDetails()
{
    delete ui;
}
