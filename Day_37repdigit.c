/************************************************************************
* Name: repdigit.c                                                      *
* Purpose: Checks numbers for repeated digits                           *
* Author: buhOS                                                         *
* Date: 29/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
//#include <stdbool.h>
#define true 1
#define false 0
typedef int mybool;

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    mybool digit_seen[10] = {false};
    int digit;
    long n;

    printf("--- REPEATED DIGITS ---\n");
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit_seen[digit]) {
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    if (n > 0) {
        printf("Repeated digit\n");
    } else {
        printf("No repeated digit\n");
    }

    sayHelloBuhOS(37);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
