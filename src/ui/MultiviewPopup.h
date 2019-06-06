#ifndef MULTIVIEWPOPUP_H
#define MULTIVIEWPOPUP_H

#include <QDialog>
#include "submainwindow.h"

namespace Ui {
class MultiviewPopup;
}

class MultiviewPopup : public QDialog
{
    Q_OBJECT

public:
    explicit MultiviewPopup(QWidget *parent = nullptr);
    ~MultiviewPopup();



private:
    Ui::MultiviewPopup *ui;
};

#endif // MULTIVIEWPOPUP_H
