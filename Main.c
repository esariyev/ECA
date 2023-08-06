#include <stdio.h>
#include "Clutch.h"
#include "Brake.h"
#include "Throttle.h"

int main()
{
    printf("Electronic Clutch Actuator\n");
    Brake_Init();
    Throttle_Init();
    Clutch_Init();  

    if(Brake_GetState())
    {
        printf("Brake State: Pressed\n");
    }
    else
    {
        printf("Brake State: Relased\n");
    }

    printf("Throttle Position: %.2f\n", Throttle_GetPosition());
    printf("Clutch Position: %.2f\n", Clutch_GetPosition());
    Clutch_SetPosition(18.2);
    return 0;
}