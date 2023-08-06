#include "Clutch.h"
#include <stdio.h>

// Function to initialize the Clutch BSW module
void Clutch_Init(void) {
    // Implement any hardware initialization if required
    printf("Clutch Initialize ...\n");
}

// Function to read the state of the clutch actuator position
float Clutch_GetPosition(void) {
    // Read the analog pin and update the clutchPosition variable
    float clutchPosition = 34.5;
    
    // Return the current position of the clutch actuator
    return clutchPosition;
}

void Clutch_SetPosition(float clutchPosition) {
    // Write the digital PWM pin and update the clutchPosition variable
    printf("Clutch Seted: %.2f\n", clutchPosition);
}