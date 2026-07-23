/************************************************************************
* Name: tprintf.c                                                       *
* Purpose: Print to Format Numbers                                      *
* Author: buhOS                                                         *
* Date: 23/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int x = 40;
    float y = 839.210;

    printf("|%i|%5.i|%-5.i|%5.3i|\n", x, x, x, x);
    printf("|%10.3f|%10.3e|%-10g|\n", y, y, y);

    sayHelloBuhOS(7);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}