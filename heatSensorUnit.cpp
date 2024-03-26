#include "heatSensorUnit.hh"

heatSensor::heatSensor(){
    heatDetected = 0;
}

int heatSensor::getHeatValue(){
    return heatDetected;
}