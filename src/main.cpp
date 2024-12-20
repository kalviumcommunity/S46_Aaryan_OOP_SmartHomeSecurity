#include <iostream>
#include "MotionDetector.h"
#include "DoorSensor.h"

using namespace std;

int main() {
    const int numDoorSensors = 3; // Number of DoorSensor objects
    MotionDetector motionDetector(false); // Initialize MotionDetector
    DoorSensor doorSensors[numDoorSensors]; // Array of DoorSensor objects with default constructor

    /**
     * Demonstrates the Dependency Inversion Principle (DIP) from SOLID:
     * - The main program depends on the abstract interface (`Sensor`) rather than concrete implementations.
     * - High-level logic (menu and simulation) uses polymorphism to interact with sensors, 
     *   allowing new sensor types to be added without modifying the existing code.
     */
    int choice;
    bool running = true;

    // User interaction loop
    while (running) {
        cout << "\nSmart Home Security Simulation Menu:\n";
        cout << "1. Detect Motion\n";
        cout << "2. Toggle Door Status\n";
        cout << "3. Check Status Overview\n";
        cout << "4. Reset Motion Detector\n"; // New menu option for resetting
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                motionDetector.detectMotion();
                break;

            case 2:
                int sensorIndex;
                cout << "Enter Door Sensor index (0-" << numDoorSensors - 1 << "): ";
                cin >> sensorIndex;
                if (sensorIndex >= 0 && sensorIndex < numDoorSensors) {
                    doorSensors[sensorIndex].toggleStatus();
                    cout << "Door Sensor " << sensorIndex << " status toggled!" << endl;
                } else {
                    cout << "Invalid sensor index!" << endl;
                }
                break;

            case 3:
                cout << "\n--- Status Overview ---" << endl;
                cout << "Motion Detector Status: " 
                     << (motionDetector.getStatus() ? "Motion Detected" : "No Motion") << endl;

                // Displaying the status of each Door Sensor
                for (int i = 0; i < numDoorSensors; ++i) {
                    cout << "Door Sensor " << i << " Status: " 
                         << (doorSensors[i].checkStatus() ? "Open" : "Closed") << endl;
                }
                break;

            case 4:
                motionDetector.reset(); 
                cout << "Motion Detector has been reset!" << endl;
                break;

            case 5:
                running = false;
                cout << "Exiting simulation." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
