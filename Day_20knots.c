/************************************************************************
* Name: knots.c                                                         *
* Purpose: Wind speed                                                   *
* Author: buhOS                                                         *
* Date: 07/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    short knots = 0;

    printf("Enter a wind speed (in knots): ");
    scanf("%hd", &knots);

    if (knots < 1) printf("Calm");
    else if (knots <= 3) printf("Light air");
    else if (knots <= 27) printf("Breeze");
    else if (knots <= 47) printf("Gale");
    else if (knots <= 63) printf("Storm");
    else printf("Hurricane");


    sayHelloBuhOS(20);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}