#include "DoorSensor.h"

// Initialize the static variable
int DoorSensor::totalOpenDoors = 0;

// Constructor: initializes the door as closed
DoorSensor::DoorSensor() : doorOpen(false) {}

// Toggles the door status between open and closed
void DoorSensor::toggleStatus()
{
    doorOpen = !doorOpen;
    // Update static variable based on the new status
    if (doorOpen)
        totalOpenDoors++;
    else
        totalOpenDoors--;
}

// Accessor for door status
bool DoorSensor::checkStatus() const
{
    return doorOpen;
}

// Mutator to set door status
void DoorSensor::setStatus(bool status)
{
    if (doorOpen != status) { // Only update if there's a change
        doorOpen = status;
        if (doorOpen)
            totalOpenDoors++;
        else
            totalOpenDoors--;
    }
}

// Static function to get the total number of open doors
int DoorSensor::getTotalOpenDoors()
{
    return totalOpenDoors;
}
