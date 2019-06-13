/*
 * Author: Xiangwei Niu
 * Show multiple Systems in Multi Flight Panel
 *
 * */

#ifndef UASMULTIVIEW_H
#define UASMULTIVIEW_H

#include <QWidget>
#include <QMap>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QDockWidget>
#include "UASInterface.h"
#include "UASView.h"
#include "uasview2.h"
#include "uasview3.h"
#include "QGCUnconnectedInfoWidget.h"

namespace Ui {
class UASMultiView;
}

class UASMultiView : public QWidget
{
    Q_OBJECT

public slots:
    void addUAS(UASInterface* uas);
    void activeUAS(UASInterface* uas);
    void removeUAS(UASInterface* uas);

public:
    explicit UASMultiView(QWidget *parent = nullptr);
    ~UASMultiView();
     QDockWidget* createDockWidget(QWidget *parent,QWidget *child,QString title,QString objectname,Qt::DockWidgetArea area,int minwidth=0,int minheight=0);
protected:
    QMap<UASInterface*, UASView*> uasViews;
    QMap<UASInterface*, UASView3*> uasViews2;
    QHBoxLayout* mainLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QVBoxLayout* listLayout;
    QGCUnconnectedInfoWidget* uWidget;
    PrimaryFlightDisplayQML *q;
    void changeEvent(QEvent *e);
    void resizeEvent(QResizeEvent *e);

private:
    Ui::UASMultiView *ui;
};

#endif // UASMULTIVIEW_H
