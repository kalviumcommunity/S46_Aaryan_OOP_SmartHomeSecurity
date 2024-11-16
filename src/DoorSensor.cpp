#include "DoorSensor.h"

// Constructor 1: initializes the door as closed (default)
DoorSensor::DoorSensor() : doorOpen(false) {}

// Constructor 2: initializes the door with a given status (open or closed)
DoorSensor::DoorSensor(bool initialStatus) : doorOpen(initialStatus) {}

// Toggles the door status between open and closed
void DoorSensor::toggleStatus() {
    doorOpen = !doorOpen;
    if (doorOpen) {
        activateAlarm(); // Trigger alarm if door is opened
    }
}

// Accessor for door status
bool DoorSensor::checkStatus() const {
    return doorOpen;
}

// Resets the door sensor
void DoorSensor::reset() {
    doorOpen = false;
}
