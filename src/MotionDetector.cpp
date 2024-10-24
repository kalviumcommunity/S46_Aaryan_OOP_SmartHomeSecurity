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

// Accessor for motion detection status
bool MotionDetector::getStatus() const
{
    return motionDetected;
}

// Mutator to set motion detection status
void MotionDetector::setStatus(bool status)
{
    motionDetected = status;
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
