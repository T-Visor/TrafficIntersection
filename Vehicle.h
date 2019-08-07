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
         * contents of the argument passed into this function.
         */
        virtual void setSpeed(int speed);

        /**
         * Performs an action based on the message arriving at this
         * Vehicle's gate. This Vehicle can handle messages containing
         * the colors 'Red', 'Yellow', or 'Green' and will react 
         * accordingly.
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
