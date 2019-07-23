#ifndef UASOBJECT2_H
#define UASOBJECT2_H
#include "LinkInterface.h"

#include <mavlink_types.h>

#include "VehicleOverview.h"
#include "RelPositionOverview.h"
#include "AbsPositionOverview.h"
#include "MissionOverview.h"

#include <QObject>

class UASObject2 : public QObject
{
Q_OBJECT
public:
    explicit UASObject2(QObject *parent = 0, int uasid = 0);

    ~UASObject2();

    VehicleOverview *getVehicleOverview();
    RelPositionOverview *getRelPositionOverview();
    AbsPositionOverview *getAbsPositionOverview();
    MissionOverview *getMissionOverview();

signals:
    // Define signals here

public slots:
    void messageReceived(LinkInterface* link,mavlink_message_t message);

protected:
    int thisid;

private:
    //mavlink_message_heartbeat_t lastHeartbeat;
    VehicleOverview* m_vehicleOverview;
    RelPositionOverview* m_relPositionOverview;
    AbsPositionOverview* m_absPositionOverview;
    MissionOverview* m_missionOverview;
};

#endif // UASOBJECT2_H
