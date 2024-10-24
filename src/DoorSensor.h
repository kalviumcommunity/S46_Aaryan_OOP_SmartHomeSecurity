#ifndef DOORSENSOR_H
#define DOORSENSOR_H

#include <iostream>

class DoorSensor
{
private:
    bool doorOpen; // Indicates if the door is open (true) or closed (false)
    static int totalOpenDoors; // Static variable to track total open doors

public:
    // Constructor: initializes the door as closed
    DoorSensor();

    // Toggles the door status between open and closed
    void toggleStatus();

    // Accessor for door status
    bool checkStatus() const;

    // Mutator to set door status
    void setStatus(bool status);

    // Static function to get the total number of open doors
    static int getTotalOpenDoors();
};

#endif // DOORSENSOR_H
