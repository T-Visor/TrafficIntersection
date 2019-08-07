/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _TRAFFICLIGHT_H
#define _TRAFFICLIGHT_H

#include <iostream>
#include <sstream>
#include <string>
#include <omnetpp.h>

using namespace omnetpp;
using namespace std;

class TrafficLight : public cSimpleModule
{
    protected:
        /**
         * Sends a message containing its current light state to nodes
         * near the traffic intersection. The message will contain the color
         * 'Red' in this example.
         */
        virtual void initialize() override;
};
#endif

Define_Module(TrafficLight);
