/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <TrafficLight.h>

void TrafficLight::initialize()
{
    cMessage *message = new cMessage("Red");

    for (int i = 0; i < gateSize("out"); ++i)
    {
        cMessage *messageCopy = message->dup();
        send(messageCopy, "out", i);
    }
}
