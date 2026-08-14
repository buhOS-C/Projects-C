/************************************************************************
* Name: numOfDigits.c                                                   *
* Purpose: Number of digits                                             *
* Author: buhOS                                                         *
* Date: 13/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int digits, userNumber;

    printf("--- NUMBER OF DIGITS ---\n");
        printf("Enter a nonnegative integer: ");
        scanf("%d", &userNumber);

        do {
                userNumber /= 10;
                digits++;

        } while (userNumber > 0);

        printf("The number has %d digit%s\n", digits, (digits > 1) ? "s" : "");

    sayHelloBuhOS(25);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}