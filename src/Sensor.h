#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

/**
 * Sensor - Abstract base class for all sensors.
 * Demonstrates the Open/Closed Principle (OCP)-
 * - The `Sensor` class is open for extension: New types of sensors (e.g., DoorSensor, MotionDetector) 
 *   can inherit from it and implement additional behavior or override existing functionality.
 * - The `Sensor` class is closed for modification: The base class doesn't need to be changed when adding new sensor types.
 */

class Sensor {
public:
    // Method to indicate sensor activation
    void activateSensor() {
        std::cout << "Sensor activated. Monitoring for changes..." << std::endl;
    }

    // Pure virtual function ensures derived classes must implement reset()
    virtual void reset() = 0; // Abstraction: enforces implementation in derived classes
};

#endif // SENSOR_H
