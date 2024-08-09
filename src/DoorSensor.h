#ifndef DOORSENSOR_H
#define DOORSENSOR_H


// class-2 Door Sensor
class DoorSensor {

// private member variables
private:
    bool doorOpen;

// public constructor and method calls
public:
    DoorSensor();
    void toggleStatus();
    bool checkStatus() const;
};

#endif // DOORSENSOR_H
