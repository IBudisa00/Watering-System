#include <iostream>
#include "commandUnit.hh"
#include "heatSensorUnit.hh"
#include "signals.hh"
#include "signalProcedures.hh"

void establishCommunication();

int main()
{
    bool communicationonGoing = true;
    int signalReceived;
    commandUnit command();
    heatSensor heatSensor();

    establishCommunication();
    while(communicationonGoing)
    {
        switch (signalReceived)
        {
            case ESTABLISH_COMM_CFM:
                handleEstablishCommCfm();
                break;
            case ESTABLISH_COMM_REJ:
                handleEstablishCommRej();
                break;
            case SHUTDOWN:
                communicationonGoing = false;
                break;
            default:
                std::cout << "Unknown signal received, signal id " << signalReceived << std::endl;
        }
    }
    /*
    heatSensor main

    while(1)
    {
        //humidityDetection
        //act upon humidity value
    }
    */
    return 0;
}

void establishCommunication(){
    //modify function parameters
    //sendsignal(ESTABLISH_COMM_REQ, receiver);
}