/************************************************************************
* Name: evenSquares.c                                                   *
* Purpose: Even squares                                                 *
* Author: buhOS                                                         *
* Date: 17/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned int n;

    printf("--- EVEN SQUARES ---\n");
    printf("Enter a number: ");
    scanf("%u", &n);

    for (unsigned int i = 2 ; i * i <= n; i += 2) {
        printf("%u\n", i * i);
    }

    sayHelloBuhOS(28);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
