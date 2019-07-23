/*
 * Author: Xiangwei Niu
 * Show multiple Systems in Multi Flight Panel
 *
 * */
#include <QString>
#include <QTimer>
#include <QLabel>
#include <QFileDialog>

#include <QApplication>

#include "uasmultiview.h"
#include "ui_uasmultiview.h"
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
#include "uasmulticontrol.h"
#include "PrimaryFlightDisplayQML.h"
#include "PrimaryFlightDisplay.h"
#include "dockwidgettitlebareventfilter.h"
#include "QDockWidget"
#include <QQuickWidget>


UASMultiView::UASMultiView(QWidget *parent) :
    QWidget(parent),
    uWidget(NULL),
    ui(new Ui::UASMultiView)
{
    ui->setupUi(this);

    // Setup container for scrollbar
    mainLayout = new QHBoxLayout(this);
    mainLayout->setMargin(0);
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget(scrollArea);

    listLayout = new QVBoxLayout(scrollAreaWidgetContents);
    listLayout->setMargin(0);
    listLayout->setSpacing(3);
    listLayout->setAlignment(Qt::AlignTop);

    //q = new PrimaryFlightDisplayQML(this);

    //listLayout->addWidget(q);
    scrollAreaWidgetContents->setLayout(listLayout);
    scrollArea->setWidget(scrollAreaWidgetContents);

    mainLayout->addWidget(scrollArea);
    this->setLayout(mainLayout);
    setObjectName("MULTI_SYSTEM_LIST");
    listLayout->addWidget(new UASMultiControl(this));
    // Construct initial widget
    //uWidget = new QGCUnconnectedInfoWidget(this);
    //listLayout->addWidget(uWidget);

    this->setMinimumWidth(262 + QApplication::style()->pixelMetric(QStyle::PM_ScrollBarExtent));

    //uasViews = QMap<UASInterface*, UASView*>();
    uasViews2 = QMap<UASInterface*, UASView3*>();

    this->setVisible(false);

    //QList<UASInterface*> bb = UASManager::instance()->getUASList();

    connect(UASManager::instance(),SIGNAL(UASCreated(UASInterface*)),this,SLOT(addUAS(UASInterface*)));
    connect(UASManager::instance(),SIGNAL(UASDeleted(UASInterface*)),this,SLOT(removeUAS(UASInterface*)));

    //QList<UASInterface*> aa = UASManager::instance()->getUASList();

    // Get a list of all existing UAS

    foreach (UASInterface* uas, UASManager::instance()->getUASList()) {
        addUAS(uas);
    }
}

UASMultiView::~UASMultiView()
{
    delete ui;
}

void UASMultiView::changeEvent(QEvent *e)
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

void UASMultiView::addUAS(UASInterface* uas)
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

//        PrimaryFlightDisplayQML* q = new PrimaryFlightDisplayQML(this,false);
//        QDockWidget *widget = new QDockWidget(this);
//        widget->setWidget(q);
//        widget->setMinimumSize(100,100);
//        widget->setMaximumSize(200,200);
//        listLayout->addWidget(widget);


//
        //connect(uas, SIGNAL(destroyed(QObject*)), this, SLOT(removeUAS(QObject*)));
        //setLayout(listLayout);

//        listLayout->addWidget(createDockWidget(this,new PrimaryFlightDisplay(320,240,this),tr("Primary Flight Display"),
//                         "PRIMARY_FLIGHT_DISPLAY_QML_DOCKWIDGET",Qt::LeftDockWidgetArea));

//        QDockWidget *a = new QDockWidget("smthg",new PrimaryFlightDisplay(320,240,this));
        //a->setWidget(new PrimaryFlightDisplayQML(this));
        PrimaryFlightDisplay *a = new PrimaryFlightDisplay(320,240,this);
        //a->setTitleBarWidget(new QWidget());
        a->setMinimumSize(200,200);
        a->setActiveUAS(uas);
        listLayout->addWidget(a);
//        setLayout(listLayout);

    }
}

void UASMultiView::activeUAS(UASInterface* uas)
{
    UASView3* view = uasViews2.value(uas, NULL);
    if (view) {
        view->setUASasActive(true);
    }
}

void UASMultiView::removeUAS(UASInterface* uas)
{
    if (uasViews2.contains(uas))
    {
        listLayout->removeWidget(uasViews2.value(uas));
        delete uasViews2.value(uas);
        uasViews2.remove(uas);


    }
}

void UASMultiView::resizeEvent(QResizeEvent *e)
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

QDockWidget* UASMultiView::createDockWidget(QWidget *parent,QWidget *child,QString title,QString objectname,Qt::DockWidgetArea area,int minwidth,int minheight)
{
    //if (child->objectName() == "")
    //{
    child->setObjectName(objectname);
    //}
    QDockWidget *widget = new QDockWidget(title,this);
//    QLabel *label = new QLabel(this);
//    label->setText(title);
//    widget->setTitleBarWidget(label);
//    label->installEventFilter(new DockWidgetTitleBarEventFilter());
    if (minheight != 0 || minwidth != 0)
    {
        widget->setMinimumHeight(minheight);
        widget->setMinimumWidth(minwidth);
    }
    //addTool(qobject_cast<SubMainWindow*>(parent),view,widget,title,area);

    return widget;
}
