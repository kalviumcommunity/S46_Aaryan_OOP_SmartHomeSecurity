#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

#include <iostream>

class MotionDetector
{
private:
    bool motionDetected; // Tracks whether motion has been detected
    static int totalMotionDetections; // Static variable to track total motion detections

public:
    // Constructor: initializes motion to "not detected"
    MotionDetector();

    // Activates the motion detector
    void detectMotion();

    // Checks if motion was detected (returns true if yes, false otherwise)
    bool getStatus() const;

    // Resets the motion detector to "no motion detected"
    void reset();

    // Static function to get the total number of motion detections
    static int getTotalMotionDetections();
};

#endif // MOTIONDETECTOR_H
