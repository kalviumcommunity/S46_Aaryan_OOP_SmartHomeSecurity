#ifndef MOTIONDETECTOR_H
#define MOTIONDETECTOR_H

// class-1 Motion Detection
class MotionDetector {

// private member variables
private:
    bool motionDetected;

// public constructor and method calls
public:
    MotionDetector();
    void detectMotion();
    bool getStatus() const;
    void reset();
};

#endif // MOTIONDETECTOR_H