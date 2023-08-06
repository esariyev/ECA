#include "Throttle.h"
#include <stdio.h>

// Function to initialize the Throttle BSW module
void Throttle_Init(void) {
    // Implement any hardware initialization if required
    printf("Throttle Initialize ...\n");
}

// Function to read the position of the throttle sensor
float Throttle_GetPosition(void) {
    // Read the analog pin and update the throttlePosition variable
    float throttlePosition = 13.5;
    
    // Return the current position of the throttle pedal
    return throttlePosition;
}