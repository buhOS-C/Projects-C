/************************************************************************
* Name: checkDisplay.c                                                  *
* Purpose: Show a checkmark                                             *
* Author: buhOS                                                         *
* Date: 20/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    printf("       *\n"
           "      *\n"
           "     *\n"
           "*   *\n"
           " * *\n"
           "  *\n");
    sayHelloBuhOS(4);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}