#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

class Sensor {
public:
    // Method to indicate sensor activation
    void activateSensor() {
        std::cout << "Sensor activated. Monitoring for changes..." << std::endl;
    }

    virtual void reset() = 0; // Pure virtual function for derived classes to implement
};

#endif // SENSOR_H
