#include <iostream>

// MotionDetector class: simulates a motion detection sensor
class MotionDetector
{
private:
    bool motionDetected; // Tracks whether motion has been detected

public:
    // Constructor: initializes motion to "not detected"
    MotionDetector() : motionDetected(false) {}

    // Activates the motion detector
    void detectMotion()
    {
        motionDetected = true;
    }

    // Checks if motion was detected (returns true if yes, false otherwise)
    bool getStatus() const
    {
        return motionDetected;
    }

    // Resets the motion detector to "no motion detected"
    void reset()
    {
        motionDetected = false;
    }
};
