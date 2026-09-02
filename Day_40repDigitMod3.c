/************************************************************************
* Name: repDigitMod3.c                                                  *
* Purpose: Modify the repdigit program version 3                        *
* Author: buhOS                                                         *
* Date: 02/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 40      // Study days
#define N 10        // Lenght array

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);

// Main function
int main(void) {
    int occurrences[N] = {0};
    int digit;
    long n;

    printf("--- REPEATED DIGITS MODIFY 3 ---\n");

    while (1) {

        printf("Enter a number: ");

        // If the user enters incorrect data
        if (scanf("%ld", &n) != 1) {
            printf("Invalid entry.\n");
            return 1;
        }

        // Clean the input buffer
        cleanInputBuffer();

        // If n == 0
        if (n == 0 ) break;
        
        // Negative number
        if (n < 0) {
            printf("Negative numbers are not allowed.\n");
            return 2;
        }

        while (n > 0) {
            digit = n % 10;         // Get the digit

            // Save occurrences
            occurrences[digit] += 1;

            n /= 10;
        }

        // Display digits
        printf("Digit:\t\t");

        for (int i = 0; i < N; i++) {
            printf("%d ", i);
        }

        // Display occurrences
        printf("\nOccurrences:\t");

        for (int i = 0; i < N; i++) {
            printf("%d ", occurrences[i]);
        }

        // Reset array
        for (int i = 0; i < N; i++) {
            occurrences[i] = 0;
        }
        
        printf("\n\n");
    }
    
    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void cleanInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}
