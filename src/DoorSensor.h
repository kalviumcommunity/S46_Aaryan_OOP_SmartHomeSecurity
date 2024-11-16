#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include "Sensor.h"
#include "Alarm.h"

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
