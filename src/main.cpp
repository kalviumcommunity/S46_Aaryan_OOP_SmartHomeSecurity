#include <iostream>
#include "MotionDetector.h"
#include "DoorSensor.h"
using namespace std;

// Main Class for user interaction
int main()
{
    const int numDoorSensors = 3; // Number of DoorSensor objects

    // Dynamically allocate MotionDetector and DoorSensor objects
    MotionDetector *motionDetector = new MotionDetector();
    DoorSensor *doorSensors = new DoorSensor[numDoorSensors]; // Array of DoorSensor objects

    int choice;
    bool running = true;

    // Take user inputs with an optimized menu
    while (running)
    {
        cout << "\nSmart Home Security Simulation Menu:\n";
        cout << "1. Detect or Reset Motion\n";
        cout << "2. Toggle or Check Door Status\n";
        cout << "3. Check Status Overview\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Submenu for motion detection actions
            cout << "\nMotion Detection Menu:\n";
            cout << "1. Detect Motion\n";
            cout << "2. Reset Motion Detector\n";
            cout << "Enter your choice: ";
            int motionChoice;
            cin >> motionChoice;
            if (motionChoice == 1) {
                motionDetector->detectMotion();
                cout << "Motion detected!" << endl;
            } else if (motionChoice == 2) {
                motionDetector->reset();
                cout << "Motion detector reset!" << endl;
            } else {
                cout << "Invalid choice!" << endl;
            }
            break;

        case 2:
            // Submenu for door status actions
            cout << "\nDoor Status Menu:\n";
            cout << "1. Toggle Door Status\n";
            cout << "2. Check All Door Sensors Status\n";
            cout << "Enter your choice: ";
            int doorChoice;
            cin >> doorChoice;

            if (doorChoice == 1) {
                int sensorIndex;
                cout << "Enter Door Sensor index (0-" << numDoorSensors - 1 << "): ";
                cin >> sensorIndex;
                if (sensorIndex >= 0 && sensorIndex < numDoorSensors) {
                    doorSensors[sensorIndex].toggleStatus();
                    cout << "Door Sensor " << sensorIndex << " status toggled!" << endl;
                } else {
                    cout << "Invalid sensor index!" << endl;
                }
            } else if (doorChoice == 2) {
                for (int i = 0; i < numDoorSensors; ++i) {
                    cout << "Door Sensor " << i << " Status: " 
                         << (doorSensors[i].checkStatus() ? "Open" : "Closed") << endl;
                }
            } else {
                cout << "Invalid choice!" << endl;
            }
            break;

        case 3:
            // Display an overview of total statuses
            cout << "\n--- Status Overview ---" << endl;
            cout << "Motion Detector Status: " 
                 << (motionDetector->getStatus() ? "Motion Detected" : "No Motion") << endl;
            cout << "Total Open Doors: " << DoorSensor::getTotalOpenDoors() << endl;
            cout << "Total Motion Detections: " << MotionDetector::getTotalMotionDetections() << endl;
            break;

        case 4:
            // Exit the simulation
            running = false;
            cout << "Exiting simulation..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    // Free dynamically allocated memory
    delete motionDetector;    // Release memory for MotionDetector object
    cout << "Memory for MotionDetector deleted." << endl;

    delete[] doorSensors;  // Release memory for array of DoorSensor objects
    cout << "Memory for DoorSensor array deleted." << endl;

    return 0;
}
