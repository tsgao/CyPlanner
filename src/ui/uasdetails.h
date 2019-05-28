#ifndef UASDETAILS_H
#define UASDETAILS_H

#include <QWidget>

namespace Ui {
class UASDetails;
}

class UASDetails : public QWidget
{
    Q_OBJECT

public:
    explicit UASDetails(QWidget *parent = nullptr);
    ~UASDetails();

private:
    Ui::UASDetails *ui;
};

#endif // UASDETAILS_H
