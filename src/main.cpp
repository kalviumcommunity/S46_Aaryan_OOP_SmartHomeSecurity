#include <iostream>
#include "MotionDetector.h"
#include "DoorSensor.h"
using namespace std;

// Main Class for user interaction
int main()
{
    const int numDoorSensors = 3; // Number of DoorSensor objects
    MotionDetector motionDetector;
    DoorSensor doorSensors[numDoorSensors]; // Array of DoorSensor objects

    int choice;
    bool running = true;

    // Take user inputs with 6 options until the user chooses 6th option (exit)
    while (running)
    {
        cout << "\nSmart Home Security Simulation Menu:\n";
        cout << "1. Detect Motion\n";
        cout << "2. Toggle Door Status (Specify Sensor Index)\n";
        cout << "3. Check Motion Detector Status\n";
        cout << "4. Check All Door Sensors Status\n";
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
            {
                // Toggle status of a specific door sensor
                int sensorIndex;
                cout << "Enter Door Sensor index (0-" << numDoorSensors-1 << "): ";
                cin >> sensorIndex;
                if (sensorIndex >= 0 && sensorIndex < numDoorSensors) {
                    doorSensors[sensorIndex].toggleStatus();
                    cout << "Door Sensor " << sensorIndex << " status toggled!" << endl;
                } else {
                    cout << "Invalid sensor index!" << endl;
                }
            }
            break;

        case 3:
            cout << "Motion Detector Status: " << (motionDetector.getStatus() ? "Motion Detected" : "No Motion") << endl;
            break;

        case 4:
            // Check status of all door sensors
            for (int i = 0; i < numDoorSensors; ++i) {
                cout << "Door Sensor " << i << " Status: " << (doorSensors[i].checkStatus() ? "Open" : "Closed") << endl;
            }
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
