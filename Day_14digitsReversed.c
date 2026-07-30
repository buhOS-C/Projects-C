/************************************************************************
* Name: digitsReversed.c                                                *
* Purpose: Digits reversed                                              *
* Author: buhOS                                                         *
* Date: 29/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int twoDigit;

    // Get user
    printf("--- DIGITS REVERSED 🦉 ---\n");
    printf("Enter a two-digit number: ");
    scanf("%d", &twoDigit);

    //Show
    printf("The reversal is: %d%d\n", twoDigit % 10, twoDigit / 10);

    sayHelloBuhOS(14);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}