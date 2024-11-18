#include "DoorSensor.h"

// Constructor: initializes the door as closed
DoorSensor::DoorSensor() : doorOpen(false) {}

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
