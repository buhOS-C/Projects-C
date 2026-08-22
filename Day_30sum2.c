/************************************************************************
* Name: Sum 2                                                           *
* Purpose: Sum version 2                                                *
* Author: buhOS                                                         *
* Date: 21/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    long n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers {0 to terminate}: ");

    scanf("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld", sum);

    sayHelloBuhOS(30);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
