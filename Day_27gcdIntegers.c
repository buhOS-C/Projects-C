/************************************************************************
* Name: gcdIntegers.c                                                   *
* Purpose: GCD two integers                                             *
* Author: buhOS                                                         *
* Date: 16/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short n1, n2, modNum, aux;

    printf("--- GREATEST COMMON DIVISOR ---\n");
    printf("Enter two integers: ");
    scanf("%hu %hu", &n1, &n2);

    // Change the position
    if (n1 < n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    while (1) {
        modNum = n1 % n2;
        n1 = n2;
        n2 = modNum;

        if (n2 == 0) {
            printf("Greatest common divisor: %hu", n1);
            sayHelloBuhOS(27);
            return 0;
        }
    }
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
