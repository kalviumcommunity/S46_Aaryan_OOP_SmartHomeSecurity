#include "MotionDetector.h"

// Initialize the static variable
int MotionDetector::totalMotionDetections = 0;

// Parameterized constructor: initializes motion with a given status
MotionDetector::MotionDetector(bool initialStatus) : motionDetected(initialStatus) {
    if (motionDetected) {
        totalMotionDetections++; // Increment if motion is initially detected
    }
}

// Destructor
MotionDetector::~MotionDetector() {
    // Clean up resources if necessary
}

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
