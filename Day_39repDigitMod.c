/************************************************************************
* Name: repDigitMod.c                                                   *
* Purpose: Modify the repdigit program                                  *
* Author: buhOS                                                         *
* Date: 01/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);

// Main function
int main(void) {
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit;
    long n;
    bool flag = false;

    printf("--- REPEATED DIGITS MODIFY ---\n");
    printf("Enter a number: ");

    // If the user enters incorrect data
    if (scanf("%ld", &n) != 1) {
        printf("Invalid entry.\n");
        return 1;
    }

    // Clean the input buffer
    cleanInputBuffer();

    // Negative number
    if (n < 0) {
        printf("Negative numbers are not allowed.\n");
        return 2;
    }

    while (n > 0) {
        digit = n % 10;         // Get the digit

        // If the digit already exists, the flag is true.
        if (digit_seen[digit]) {
            digit_repeated[digit] = true;
            flag = true;
        }

        digit_seen[digit] = true;

        n /= 10;
    }

    // Check for repeated digits.
    if (flag) {
        printf("Repeated digit(s): ");

        // Display de repeated digits
        for (int i = 0; i < SIZE(digit_repeated); i++) {
            if (digit_repeated[i]) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("No repeated digit.\n");
    }

    sayHelloBuhOS(39);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void cleanInputBuffer(void) {
    while (getchar() != '\n') ;
}
