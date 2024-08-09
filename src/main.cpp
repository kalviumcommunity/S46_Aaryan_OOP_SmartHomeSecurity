#include <iostream>
#include "MotionDetector.h"
#include "DoorSensor.h"
using namespace std;

// Main Class for user interaction
int main()
{
    // Created 2 Objects instance for each class
    MotionDetector motionDetector;
    DoorSensor doorSensor;

    int choice;
    bool running = true;

    // Take user inputs with 6 options until the user chooses 6th option (exit)
    while (running)
    {
        cout << "\nSmart Home Security Simulation Menu:\n";
        cout << "1. Detect Motion\n";
        cout << "2. Toggle Door Status\n";
        cout << "3. Check Motion Detector Status\n";
        cout << "4. Check Door Sensor Status\n";
        cout << "5. Reset Motion Detector\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            motionDetector.detectMotion();
            cout << "Motion detected!" << endl;
            break;
        case 2:
            doorSensor.toggleStatus();
            cout << "Door status toggled!" << endl;
            break;
        case 3:
            cout << "Motion Detector Status: " << (motionDetector.getStatus() ? "Motion Detected" : "No Motion") << endl;
            break;
        case 4:
            cout << "Door Sensor Status: " << (doorSensor.checkStatus() ? "Open" : "Closed") << endl;
            break;
        case 5:
            motionDetector.reset();
            cout << "Motion detector reset!" << endl;
            break;
        case 6:
            running = false;
            cout << "Exiting simulation..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

