# TrafficIntersection
This simulation represents a static model of a V2X (Vehicle to Everything) scenario with 4 vehicles at a traffic intersection.

![alt text](https://github.com/T-Visor/TrafficIntersection/blob/master/OMNeT%2B%2B%20screen%20capture.PNG)

# Loading the scenario
In order for this simulation to work, all files (except for the .png screenshot) will need to be loaded into the OMNeT++ IDE. Build the project and run it as an OMNeT++ simulation. 

# Scenario details
A traffic light will send a message to all four vehicles at the intersection instructing them to stop, the same message will also be sent to a relay sensor. The relay sensor will simply broadcast the same message out to the four vehicles.

This scenario is not supposed to model anything meaningful, it is just a simple exercise which demonstrates some of the features in OMNeT++.
