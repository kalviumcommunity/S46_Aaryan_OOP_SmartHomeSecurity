#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include "Sensor.h"
#include "Alarm.h"

/**
 * DoorSensor Class Represents a sensor that monitors the status of a door.
 * Adheres to the Single Responsibility Principle (SRP) 
 * - The responsibility of this class is to manage and monitor the status of a door
 *   (open/closed) and trigger an alarm if necessary.
 * - This class has no responsibilities outside its defined purpose (e.g., it does not handle
 *   motion detection or manage system-wide alarms).
 */
class DoorSensor : public Sensor, public Alarm {
private:
    bool doorOpen; // Indicates if the door is open (true) or closed (false)

public:
    // Constructor 1: initializes the door as closed (default)
    DoorSensor();

    // Constructor 2: initializes the door with a given status (open or closed)
    DoorSensor(bool initialStatus);

    // Toggles the door status between open and closed
    void toggleStatus();

    // Accessor for door status
    bool checkStatus() const;

    // Resets the door sensor
    void reset() override; // Override the reset method
};

#endif // DOORSENSOR_H
