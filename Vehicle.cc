/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Vehicle.h>

Vehicle::Vehicle()
{
    speed = 50;
    messagesSent = 0;
    messagesReceived = 0;
}

void Vehicle::setSpeed(int speed)
{
    this->speed = speed;
}

void Vehicle::handleMessage(cMessage *message)
{
    messagesReceived++;
    
    if (message->isName("Red"))
        setSpeed(0);
    else if (message->isName("Yellow"))
        setSpeed(70);
    else if (message->isName("Green"))
        setSpeed(60);
    else
        bubble(message->getName());
    delete message;
}

void Vehicle::refreshDisplay() const
{
    char buffer[40];
    sprintf(buffer, "received: %ld, sent: %ld \nspeed: %d mph", messagesReceived, messagesSent, speed);
    getDisplayString().setTagArg("t", 0, buffer); // "t" argument specifies text output
}
