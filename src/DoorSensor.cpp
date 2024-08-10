#include "DoorSensor.h"

// constructor
DoorSensor::DoorSensor() : doorOpen(false) {}

// methods with null return (void)
void DoorSensor::toggleStatus()
{
    this->doorOpen = !this->doorOpen; // Using this pointer
}

// methods with a return value
bool DoorSensor::checkStatus() const
{
    return this->doorOpen; // Using this pointer
}
