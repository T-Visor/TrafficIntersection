/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                                                          //
// Author: Turhan Kimbrough                                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _RELAYSENSOR_H
#define _RELAYSENSOR_H

#include <iostream>
#include <sstream>
#include <string>
#include <omnetpp.h>

using namespace omnetpp;
using namespace std;

class RelaySensor : public cSimpleModule
{
    protected:
        /**
         * Broadcasts the message received on this module's "in" gate
         * to all other nodes in its range
         */
        virtual void handleMessage(cMessage *message) override;
};
#endif

Define_Module(RelaySensor);
