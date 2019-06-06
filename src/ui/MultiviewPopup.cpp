
#include <QString>
#include <QTimer>
#include <QLabel>
#include <QFileDialog>
#include <QKeyEvent>

#include <QApplication>


#include "MultiviewPopup.h"
#include "ui_MultiviewPopup.h"
#include "MultiviewPopup.h"
#include "MultiviewPopup.h"
#include "ui_MultiviewPopup.h"
#include "MG.h"
#include "UASManager.h"
#include "UAS.h"
#include "UASView.h"
#include "uasview2.h"
#include "uasview3.h"
#include "QGCUnconnectedInfoWidget.h"
#include "MainWindow.h"
#include "MAVLinkSimulationLink.h"
#include "LinkManager.h"
#include "QGCMapTool.h"

/***
 * @author Guang Yi Lim
 * Custom dialog which allows a pop up dialog displaying the multi system view
 *
 ***/
MultiviewPopup::MultiviewPopup(QWidget *parent) :
    QDialog(parent),
    uWidget(NULL),
    ui(new Ui::MultiviewPopup)
{

    ui->setupUi(this);
    this->setWindowTitle("MultiSysten View");
    mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(0);

    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget(scrollArea);

    listLayout = new QVBoxLayout(scrollAreaWidgetContents);
    listLayout->setContentsMargins(0,0,0,0);
    listLayout->setSpacing(8);
    listLayout->setAlignment(Qt::AlignTop);

    scrollAreaWidgetContents->setLayout(listLayout);
    scrollArea->setWidget(scrollAreaWidgetContents);
    scrollArea->setMaximumWidth(262);


    mainLayout->addWidget(scrollArea);
    QGCMapTool *map = new QGCMapTool(this,false);
    mainLayout->addWidget(map);
    this->setLayout(mainLayout);
    setObjectName("MULTI_SYSTEM_LIST");


    this->setMinimumWidth(262 + QApplication::style()->pixelMetric(QStyle::PM_ScrollBarExtent));

    uasViews2 = QMap<UASInterface*, UASView3*>();

    this->setVisible(false);

    connect(UASManager::instance(),SIGNAL(UASCreated(UASInterface*)),this,SLOT(addUAS(UASInterface*)));
    connect(UASManager::instance(),SIGNAL(UASDeleted(UASInterface*)),this,SLOT(removeUAS(UASInterface*)));
    // Get a list of all existing UAS
    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        addUAS(uas);
    }

}

MultiviewPopup::~MultiviewPopup()
{
    delete ui;
}

void MultiviewPopup::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MultiviewPopup::addUAS(UASInterface* uas)
{
    if (uasViews2.isEmpty())
    {
        if (uWidget)
        {
            listLayout->removeWidget(uWidget);
            delete uWidget;
            uWidget = NULL;
        }
    }

    if (!uasViews2.contains(uas))
    {
        uasViews2.insert(uas, new UASView3(uas, this));
        listLayout->addWidget(uasViews2.value(uas));
        //connect(uas, SIGNAL(destroyed(QObject*)), this, SLOT(removeUAS(QObject*)));
    }
}

void MultiviewPopup::activeUAS(UASInterface* uas)
{
    UASView3* view = uasViews2.value(uas, NULL);
    if (view) {
        view->setUASasActive(true);
    }
}

void MultiviewPopup::removeUAS(UASInterface* uas)
{
    if (uasViews2.contains(uas))
    {
        listLayout->removeWidget(uasViews2.value(uas));
        delete uasViews2.value(uas);
        uasViews2.remove(uas);


    }
}

void MultiviewPopup::resizeEvent(QResizeEvent *e)
{
    Q_UNUSED(e)

    if (scrollArea->verticalScrollBar()->isVisible())
    {
        int width = this->width() - QApplication::style()->pixelMetric(QStyle::PM_ScrollBarExtent);
        scrollAreaWidgetContents->setMaximumWidth(width);
    }
    else
    {
        scrollAreaWidgetContents->setMaximumWidth(this->width());
    }
    update();
}

void MultiviewPopup::keypressEvent(QKeyEvent *e){
    if(e->key()== Qt::Key_A){
        this->showMinimized();
        e->accept();
    }

}

