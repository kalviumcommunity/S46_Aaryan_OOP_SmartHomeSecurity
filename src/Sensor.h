#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

// Abstract base class: Sensor
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
