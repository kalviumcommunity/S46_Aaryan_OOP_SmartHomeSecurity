#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

#include "Sensor.h"
#include "Alarm.h"

class MotionDetector : public Sensor, public Alarm {
private:
    bool motionDetected; // Tracks whether motion has been detected    

public:
    // Constructor: initializes motion with a given status
    MotionDetector(bool initialStatus);

    // Method to detect motion
    void detectMotion();

    // Accessor for motion detection status
    bool getStatus() const;

    // Resets the motion detector
    void reset() override; // Override the reset method
};

#endif // MOTIONDETECTOR_H
