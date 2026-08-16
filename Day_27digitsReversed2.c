/************************************************************************
* Name: digitsReversed2.c                                               *
* Purpose: Digits reversed 2                                            *
* Author: buhOS                                                         *
* Date: 16/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int number;

    // Get user
    printf("--- DIGITS REVERSED 🦉 ---\n");
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    //Show
    printf("The reversal is: ");
    
    while (number != 0) {
        printf("%d", number % 10);
        number = number / 10;
    }
    printf("\n");

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
