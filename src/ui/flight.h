#ifndef FLIGHT_H
#define FLIGHT_H

#include <QWidget>

namespace Ui {
class Flight;
}

class Flight : public QWidget
{
    Q_OBJECT

public:
    explicit Flight(QWidget *parent = nullptr);
    ~Flight();

private:
    Ui::Flight *ui;
};

#endif // FLIGHT_H
