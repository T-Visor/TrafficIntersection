/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>
#include <sstream>
#include <string>
#include <omnetpp.h>

using namespace omnetpp;
using namespace std;

class Vehicle : public cSimpleModule
{
    protected:
        int speed;  // in miles per hour
        long messagesSent;
        long messagesReceived;

        /**
         * Assigns this Vehicle's speed value based on the
         * contents of the parameter
         */
        virtual void setSpeed(int speed);

        /**
         * Performs an action according to the message arriving at this
         * Vehicle's gate.
         */
        virtual void handleMessage(cMessage *message) override;

        /**
         * Displays the number of messages received and sent
         * to this node along with the current speed
         */
        virtual void refreshDisplay() const override;

    public:
        /**
         * Construct a vehicle in its stopped state
         */
        Vehicle();
};
#endif

Define_Module(Vehicle);
