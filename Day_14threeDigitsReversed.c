/************************************************************************
* Name: threeDigitReversed.c                                            *
* Purpose: Three Digit Reversed                                         *
* Author: buhOS                                                         *
* Date: 29/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int threeDigit, firstDigit, secondDigit, thirdDigit;

    // Get user
    printf("--- THREE DIGITS REVERSED 🦉 ---\n");
    printf("Enter a two-digit number: ");
    scanf("%d", &threeDigit);

    firstDigit = threeDigit / 100;
    secondDigit = (threeDigit % 100) / 10;
    thirdDigit = (threeDigit % 100) % 10;

    //Show
    printf("The reversal is: %d%d%d\n", thirdDigit, secondDigit, firstDigit);

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