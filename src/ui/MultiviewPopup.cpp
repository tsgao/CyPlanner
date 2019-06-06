#include "MultiviewPopup.h"
#include "ui_MultiviewPopup.h"
#include "uasmultiview.h"
#include "submainwindow.h"
MultiviewPopup::MultiviewPopup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MultiviewPopup)
{
//    ui->setupUi(this);
//    ui.
}

MultiviewPopup::~MultiviewPopup()
{
    delete ui;
}
