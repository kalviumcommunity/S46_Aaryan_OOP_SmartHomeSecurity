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

// Checks if the door is open (returns true if open, false if closed)
bool DoorSensor::checkStatus() const
{
    return doorOpen;
}

// Static function to get the total number of open doors
int DoorSensor::getTotalOpenDoors()
{
    return totalOpenDoors;
}
