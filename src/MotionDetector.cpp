#include "MotionDetector.h"

// constructor
MotionDetector::MotionDetector() : motionDetected(false) {}

// methods with null return (void)
void MotionDetector::detectMotion()
{
    this->motionDetected = true; // Using this pointer
}

// methods with a return value
bool MotionDetector::getStatus() const
{
    return this->motionDetected; // Using this pointer
}

// methods with null return (void)
void MotionDetector::reset()
{
    this->motionDetected = false; // Using this pointer
}
