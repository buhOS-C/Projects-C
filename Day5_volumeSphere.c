/****************************************************************************
* Name: volumeSphere.c                                                      *
* Purpose: Computes the volume of a sphere                                  *
* Author: buhOS                                                             *
* Date: 21/07/2026                                                          *
*****************************************************************************/

#include <stdio.h>

#define RADIUS 10.0f
#define FOUR_THIRDS (4.0f / 3.0f)
#define PI 3.14159f

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float volume = 0.0f;

    printf("---VOLUME SPHERE 🌐---\n");
    printf("Radius: %.2f meters\n", RADIUS);

    volume = FOUR_THIRDS * PI * RADIUS * RADIUS * RADIUS;

    printf("Volume: %.2f cubic meters\n", volume);

    sayHelloBuhOS(5);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}