/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Txc3.h>

void TrafficLight::initialize()
{
    const char* colors[] = {"Red", "Yellow", "Green"};

    // select one of three colors for the message
    int randNum = intuniform(0, 3);
    cMessage *message = new cMessage(colors[randNum]);

    for (int i = 0; i < gateSize("out"); ++i)
    {
        cMessage *messageCopy = message->dup();
        send(messageCopy, "out", i);
    }
}
