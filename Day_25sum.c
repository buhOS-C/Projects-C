/************************************************************************
* Name: sum.c                                                           *
* Purpose: Sum of integers                                              *
* Author: buhOS                                                         *
* Date: 13/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int sum = 0;
        int n;

        printf("--- SUM OF INTEGERS ---\n");
        printf("This program sums a series of integers.\n");
        printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);

        while (n != 0) {
                scanf("%d", &n);
                sum += n;
        }
        printf("The sum is: %d\n", sum);

    sayHelloBuhOS(25);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}