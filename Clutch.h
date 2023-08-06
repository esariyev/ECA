#ifndef CLUTCH_H
#define CLUTCH_H

// Function to initialize the Clutch BSW module
void Clutch_Init(void);

// Function to read the position of the clutch actuator
float Clutch_GetPosition(void);

// Function to write the position of the clutch actuator
void Clutch_SetPosition(float position);

#endif // CLUTCH_H
