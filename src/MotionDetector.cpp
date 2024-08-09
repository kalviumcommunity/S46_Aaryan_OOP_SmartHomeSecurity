#include "MotionDetector.h"

// constructor
MotionDetector::MotionDetector() : motionDetected(false) {}

// methods with null return (void)
void MotionDetector::detectMotion() {
    motionDetected = true;
}

// methods with a return value
bool MotionDetector::getStatus() const {
    return motionDetected;
}

// methods with null return (void)
void MotionDetector::reset() {
    motionDetected = false;
}
