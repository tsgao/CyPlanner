#include "UASGPSInject.h"
#include "UASManager.h"
#include "MainWindow.h"
#include <algorithm>

#include "mavlink_msg_gps_rtcm_data.h"

UASGPSInject::UASGPSInject(UAS* _uas) : uas(_uas)
{
    uasid = uas->getUASID();
    inject_seq_no = 0;
}

void UASGPSInject::InjectGpsData()
{
            //current_partner_systemid = uasid;
    //"GPS_INJECT_DATA", 123
            current_partner_compid = MAV_COMP_ID_MISSIONPLANNER;

            //clear local buffer
            // Why not replace with waypoint_buffer.clear() ?
            // because this will lead to memory leaks, the waypoint-structs
            // have to be deleted, clear() would only delete the pointers.
            while(!waypoint_buffer_int.empty()) {
                delete waypoint_buffer_int.back();
                waypoint_buffer_int.pop_back();
            }

            bool noCurrent = true;

            //copy waypoint data to local buffer
            for (int i=0; i < current_count; i++) {
                waypoint_buffer_int.push_back(new mavlink_mission_item_int_t);
                mavlink_mission_item_int_t *cur_d = waypoint_buffer_int.back();
                memset(cur_d, 0, sizeof(mavlink_mission_item_int_t));   //initialize with zeros
                const Waypoint *cur_s = waypointsEditable.at(i);

                cur_d->autocontinue = cur_s->getAutoContinue();
                cur_d->current = cur_s->getCurrent() & noCurrent;   //make sure only one current waypoint is selected, the first selected will be chosen
                cur_d->param1 = cur_s->getParam1();
                cur_d->param2 = cur_s->getParam2();
                cur_d->param3 = cur_s->getParam3();
                cur_d->param4 = cur_s->getParam4();
                cur_d->frame = cur_s->getFrame();
                cur_d->command = cur_s->getAction();
                cur_d->seq = i;     // don't read out the sequence number of the waypoint class
//                int32_t aa =(int32_t) cur_s->getX() * 1E7;
//                int32_t bb =(int32_t) cur_s->getY() * 1E7;
//                int32_t aa1 =(int32_t) (cur_s->getX() * 1E7);
//                int32_t bb1 =(int32_t) (cur_s->getY() * 1E7);

                cur_d->x = (int32_t) (cur_s->getX() * 1E7);
                cur_d->y = (int32_t) (cur_s->getY() * 1E7);
                cur_d->z = cur_s->getZ();

                if (cur_s->getCurrent() && noCurrent)
                    noCurrent = false;
                if (i == (current_count - 1) && noCurrent == true) //not a single waypoint was set as "current"
                    cur_d->current = true; // set the last waypoint as current. Or should it better be the first waypoint ?
            }


            //send the waypoint count to UAS (this starts the send transaction)
            sendWaypointCount();
        } else if (waypointsEditable.count() == 0)
        {
            sendWaypointClearAll();
        }

}

void UASGPSInject::InjectGpsData1(uint8_t data[], uint16_t length, bool rtcm)
{
    if (!uas) return;
    mavlink_message_t message;
    //mavlink_mission_count_t wpc;

    if (rtcm){
        mavlink_gps_rtcm_data_t gps_inject_data;
        uint8_t msglen = 180;
        if (length > msglen * 4)
        {
            //error
            return;
        }

        // number of packets we need, including a termination packet if needed
        int nopackets = (length % msglen) == 0 ? length / msglen + 1 : (length / msglen) + 1;

        if (nopackets >= 4)
            nopackets = 4;

        // flags = isfrag(1)/frag(2)/seq(5)

        for (int a = 0; a < nopackets; a++)
        {
            // check if its a fragment
            if (nopackets > 1)
                gps_inject_data.flags = 1;
            else
                gps_inject_data.flags = 0;

            // add fragment number
            gps_inject_data.flags += (uint8_t)((a & 0x3) << 1);

            // add seq number
            gps_inject_data.flags += (uint8_t)((inject_seq_no & 0x1f) << 3);

            // create the empty buffer

            // calc how much data we are copying
            uint8_t copy = (length - a * msglen < msglen) ? (length - a * msglen) : msglen;

            // copy the data
            uint8_t dataF[copy];
            for (int i = a * msglen; i < a * msglen + copy; i++){
                dataF[i - a * msglen] = data[i];
            }
            memcpy(gps_inject_data.data, data, copy);

            // set the length
            gps_inject_data.len = copy;

            mavlink_msg_gps_rtcm_data_encode(uas->getSystemId(), uas->getComponentId(), &message, &gps_inject_data);
            //generatePacket((byte) MAVLINK_MSG_ID.GPS_RTCM_DATA, gps, sysid, compid);
        }

        inject_seq_no++;
    }
    else{
        mavlink_gps_inject_data_t gps_inject_data;
        int msglen = 110;

        int len = (length%msglen) == 0 ? length/msglen : (length/msglen) + 1;

        for (int a = 0; a < len; a++)
        {
            uint8_t copy = (length - a * msglen < msglen) ? (length - a * msglen) : msglen;

            uint8_t dataF[copy];
            for (int i = a * msglen; i < a * msglen + copy; i++){
                dataF[i - a * msglen] = data[i];
            }
            memcpy(gps_inject_data.data, data, copy);

            gps_inject_data.len = copy;
            gps_inject_data.target_system = uasid;
            gps_inject_data.target_component = MAV_COMP_ID_IMU;

            mavlink_msg_gps_inject_data_encode(uas->getSystemId(), uas->getComponentId(), &message, &gps_inject_data);
            //generatePacket((byte) MAVLINK_MSG_ID.GPS_INJECT_DATA, gps, sysid, compid);
        }
    }
        //mavlink_msg_mission_count_encode(uas->getSystemId(), uas->getComponentId(), &message, &wpc);
    uas->sendMessage(message);
}
