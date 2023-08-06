#ifndef BRAKE_H
#define BRAKE_H

#include <stdbool.h> // Include the standard C library for boolean data type

// Function to initialize the Brake BSW module
void Brake_Init(void);

// Function to read the state of the brake pedal
bool Brake_GetState(void);

#endif // BRAKE_H
