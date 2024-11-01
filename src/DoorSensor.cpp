#include <iostream>

// DoorSensor class: simulates a door sensor that tracks whether the door is open or closed
class DoorSensor
{
private:
    bool doorOpen; // Indicates if the door is open (true) or closed (false)

public:
    // Constructor: initializes the door as closed
    DoorSensor() : doorOpen(false) {}

    // Toggles the door status between open and closed
    void toggleStatus()
    {
        doorOpen = !doorOpen;
    }

    // Checks if the door is open (returns true if open, false if closed)
    bool checkStatus() const
    {
        return doorOpen;
    }
};
