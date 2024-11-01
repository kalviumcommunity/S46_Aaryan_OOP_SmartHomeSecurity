#include "MotionDetector.h"

// Initialize the static variable
int MotionDetector::totalMotionDetections = 0;

// Constructor: initializes motion to "not detected"
MotionDetector::MotionDetector() : motionDetected(false) {}

// Activates the motion detector
void MotionDetector::detectMotion()
{
    motionDetected = true;
    totalMotionDetections++; // Increment on each motion detection
}

// Checks if motion was detected (returns true if yes, false otherwise)
bool MotionDetector::getStatus() const
{
    return motionDetected;
}

// Resets the motion detector to "no motion detected"
void MotionDetector::reset()
{
    motionDetected = false;
}

// Static function to get the total number of motion detections
int MotionDetector::getTotalMotionDetections()
{
    return totalMotionDetections;
}
