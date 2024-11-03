#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

#include <iostream>

class MotionDetector
{
private:     // (Access specifier - private)
    bool motionDetected; // Tracks whether motion has been detected    
    static int totalMotionDetections; // Static variable to track total motion detections

public:
    // Constructor: initializes motion to "not detected"
    MotionDetector();

    // Activates the motion detector
    void detectMotion();

    // Accessor for motion detection status
    bool getStatus() const;

    // Mutator to set motion detection status
    void setStatus(bool status);

    // Resets the motion detector to "no motion detected"
    void reset();

    // Static function to get the total number of motion detections
    static int getTotalMotionDetections();
};

#endif // MOTIONDETECTOR_H
