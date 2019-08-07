simple Vehicle
{
    gates:
        input in[];
        output out[];
}

simple RelaySensor
{
    gates:
        input in;
        output out[];
}

simple TrafficLight
{
    gates:
        output out[];
}

network Intersection
{
    @display("bgb=500,500,#008000,black;bgi=background/streetmap");
    types:
        channel Channel extends ned.DelayChannel
        {
            delay = 100 ms;
        }
    submodules:
        trafficLight: TrafficLight 
        {
            @display("i=block/classifier,white;p=213.84999,109.2");
        }
        sensor: RelaySensor 
        {
            @display("i=device/antennatower;p=15.930817,184.3423");
        }
        vehicles[4]: Vehicle 
        {
            @display("p=139.23,34.579998,ri,75;i=block/wheelbarrow,dodgerBlue;r=60,#FFFFD1,dodgerBlue");
        }
    connections:
        // connect the relay sensor to the vehicles
        sensor.out++ --> Channel --> vehicles[0].in++;
        sensor.out++ --> Channel --> vehicles[1].in++;
        sensor.out++ --> Channel --> vehicles[2].in++;
        sensor.out++ --> Channel --> vehicles[3].in++;

	// connect the traffic light to the vehicles
        trafficLight.out++ --> Channel { @display("ls=blue"); } --> vehicles[0].in++;
        trafficLight.out++ --> Channel { @display("ls=blue"); } --> vehicles[1].in++;
        trafficLight.out++ --> Channel { @display("ls=blue"); } --> vehicles[2].in++;
        trafficLight.out++ --> Channel { @display("ls=blue"); } --> vehicles[3].in++;

        // connect the traffic light to the relay sensor
        trafficLight.out++ --> Channel { @display("ls=blue"); } --> sensor.in;
}

