#ifndef WAYPOINTINPUT_H
#define WAYPOINTINPUT_H

#include <QDialog>

namespace Ui {
class WaypointInput;
}

class WaypointInput : public QDialog
{
    Q_OBJECT

public:
    explicit WaypointInput(QWidget *parent = nullptr);
    ~WaypointInput();

private slots:
    void on_pushButton_clicked();

private:
    Ui::WaypointInput *ui;
};

#endif // WAYPOINTINPUT_H
