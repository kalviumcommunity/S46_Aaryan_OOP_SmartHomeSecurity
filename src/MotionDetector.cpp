#include "MotionDetector.h"

// Constructor: initializes motion with a given status
MotionDetector::MotionDetector(bool initialStatus) : motionDetected(initialStatus) {
    if (motionDetected) {
        activateAlarm(); // Trigger alarm if motion is detected
    }
}

// Method to detect motion
void MotionDetector::detectMotion() {
    motionDetected = true;
    activateAlarm(); // Trigger alarm on motion detection
}

// Accessor for motion detection status
bool MotionDetector::getStatus() const {
    return motionDetected;
}

// Resets the motion detector
void MotionDetector::reset() {
    motionDetected = false;
}
