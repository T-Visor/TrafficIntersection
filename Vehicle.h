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
         * contents of the parameter.
         */
        virtual void setSpeed(int speed);

        /**
         * Performs an action based on the message arriving at this
         * Vehicle's gate. The message will contain one of three colors,
         * "Red", "Yellow", or "Green".
         *
         * "Red" will make this Vehicle to stop and set its speed
         * value to 0.
         *
         * "Yellow" will make the Vehicle clear the intersection by 
         * speeding up and setting its speed value to 70.
         *
         * "Green" will make the Vehicle maintain its current speed.
         */
        virtual void handleMessage(cMessage *message) override;

        /**
         * Displays a caption next to this node's icon in the simulation.
         * The caption contains the number of messages sent and received
         * along with the current speed.
         */
        virtual void refreshDisplay() const override;

    public:
        /**
         * Construct a vehicle with its speed set to 50 mph.
         */
        Vehicle();
};
#endif

Define_Module(Vehicle);
