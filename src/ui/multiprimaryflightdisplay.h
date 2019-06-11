#ifndef MULTIPRIMARYFLIGHTDISPLAY_H
#define MULTIPRIMARYFLIGHTDISPLAY_H

#include <QWidget>

namespace Ui {
class multiPrimaryFlightDisplay;
}

class multiPrimaryFlightDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit multiPrimaryFlightDisplay(QWidget *parent = nullptr);
    ~multiPrimaryFlightDisplay();

private:
    Ui::multiPrimaryFlightDisplay *ui;
};

#endif // MULTIPRIMARYFLIGHTDISPLAY_H
