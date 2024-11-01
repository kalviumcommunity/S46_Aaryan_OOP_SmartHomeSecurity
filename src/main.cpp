#include <iostream>
#include "MotionDetector.cpp"
#include "DoorSensor.cpp"
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

    // Take user inputs with 6 options until the user chooses the 6th option (exit)
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
            // Activate motion detection
            motionDetector->detectMotion();
            cout << "Motion detected!" << endl;
            break;

        case 2:
        {
            // Toggle status of a specific door sensor
            int sensorIndex;
            cout << "Enter Door Sensor index (0-" << numDoorSensors - 1 << "): ";
            cin >> sensorIndex;
            if (sensorIndex >= 0 && sensorIndex < numDoorSensors)
            {
                doorSensors[sensorIndex].toggleStatus();
                cout << "Door Sensor " << sensorIndex << " status toggled!" << endl;
            }
            else
            {
                cout << "Invalid sensor index!" << endl;
            }
            break;
        }

        case 3:
            // Check the current status of the motion detector
            cout << "Motion Detector Status: " << (motionDetector->getStatus() ? "Motion Detected" : "No Motion") << endl;
            break;

        case 4:
            // Check the status of all door sensors
            for (int i = 0; i < numDoorSensors; ++i)
            {
                cout << "Door Sensor " << i << " Status: " << (doorSensors[i].checkStatus() ? "Open" : "Closed") << endl;
            }
            break;

        case 5:
            // Reset the motion detector to its default state
            motionDetector->reset();
            cout << "Motion detector reset!" << endl;
            break;

        case 6:
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
