/************************************************************************
* Name: reverse.c                                                       *
* Purpose: Numbers in reverse order                                     *
* Author: buhOS                                                         *
* Date: 28/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#define N 10

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int a[N];

    printf("Enter 10 numbers: ");

    // Read the numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    // Display the numbers in reverse order.
    printf("In reverse order: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]);

    }

    sayHelloBuhOS(36);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
