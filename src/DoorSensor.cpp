#include "DoorSensor.h"

// constructor
DoorSensor::DoorSensor() : doorOpen(false) {}

// methods with null return (void)
void DoorSensor::toggleStatus() {
    doorOpen = !doorOpen;
}

// methods with a return value
bool DoorSensor::checkStatus() const {
    return doorOpen;
}





