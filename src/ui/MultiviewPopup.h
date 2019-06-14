#ifndef MULTIVIEWPOPUP_H
#define MULTIVIEWPOPUP_H

#include <QDialog>
#include <QMap>
#include <QScrollArea>
#include <QVBoxLayout>
#include "UASInterface.h"
#include "UASView.h"
#include "uasview2.h"
#include "uasview3.h"
#include "QGCUnconnectedInfoWidget.h"


namespace Ui {
class MultiviewPopup;
}

class MultiviewPopup : public QDialog
{
    Q_OBJECT

public slots:
    void addUAS(UASInterface * uas);
    void activeUAS(UASInterface *uas);
    void removeUAS(UASInterface * uas);
    void minimize1();

public:
    explicit MultiviewPopup(QWidget *parent = nullptr);
    ~MultiviewPopup();
protected:
    QMap<UASInterface*, UASView *> uasViews;
    QMap<UASInterface*, UASView3*> uasViews2;
    QHBoxLayout* mainLayout;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QVBoxLayout* listLayout;
    QGCUnconnectedInfoWidget* uWidget;
    void changeEvent(QEvent *e);
    void resizeEvent(QResizeEvent *e);
    void keypressEvent(QKeyEvent *e);


private:
    Ui::MultiviewPopup *ui;
};

#endif // MULTIVIEWPOPUP_H
