#ifndef ALARM_H
#define ALARM_H

#include <iostream>

class Alarm {
public:
    // Method to indicate alarm activation
    void activateAlarm() {
        std::cout << "Alarm activated! Alerting security personnel!" << std::endl;
    }

    virtual void reset() = 0; // Pure virtual function for derived classes to implement
};

#endif // ALARM_H