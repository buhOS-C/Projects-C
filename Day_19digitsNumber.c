/************************************************************************
* Name: digitsNumber.c                                                  *
* Purpose: Digits number                                                *
* Author: buhOS                                                         *
* Date: 06/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int userNumber;

    // Get from user
    printf("--- DIGITS OF A NUMBER 🧮 ---\n");
    printf("Enter a number: ");
    scanf("%d", &userNumber);

    // Count the digits
    if (userNumber >= 0) {
        if (userNumber < 10000) {
            printf("The number %d has ", userNumber);

            if (userNumber < 10)
                printf("1 ");
            else if (userNumber < 100)
                printf("2 ");
            else if (userNumber < 1000)
                printf("3 ");
            else if (userNumber < 10000)
                printf("4 ");

            printf("digits");
        } else {
            printf("The number %d is greater than 9999.", userNumber);
        }
    } else {
        printf("The number %d is negative.", userNumber);
    }

    sayHelloBuhOS(19);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}