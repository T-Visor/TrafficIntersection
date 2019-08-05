/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Txc2.h>

void RelaySensor::handleMessage(cMessage *message)
{
    for (int i = 0; i < gateSize("out"); ++i)
    {
        cMessage *messageCopy = message->dup();
        send(messageCopy, "out", i);
    }

    delete message;
}
