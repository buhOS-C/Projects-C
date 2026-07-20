/************************************************************************
* Name: dweight.c                                                       *
* Purpose: Dimensional weight of a box                                  *
* Author: buhOS                                                         *
* Date: 19/07/2026                                                      *
*************************************************************************/

#include <stdio.h>
#define INCHES_PER_POUND 166

// Function prototypes
void sayHelloBuhOS(const char *day);

// Main function
int main(void){
        int height, width, length, volume, weight;
        printf("----BOX📦----\n");
        printf("Height: ");
        scanf("%i", &height);
        printf("Width: ");
        scanf("%i", &width);
        printf("Length: ");
        scanf("%i", &length);

        volume = height * width * length;
        weight = (volume + 165) / INCHES_PER_POUND;

        printf("Dimensions: %dx%dx%d\n", height, width, length);
        printf("Volumen (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);

        sayHelloBuhOS("3");
        return 0;
}

// Functions
void sayHelloBuhOS(const char *day){
        printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
        printf("---Day %s\n", day);
}