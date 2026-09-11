/************************************************************************
* Name: gcdIntegers.c                                                   *
* Purpose: GCD two integers                                             *
* Author: buhOS                                                         *
* Date: 11/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 45

// Function prototypes
void sayHelloBuhOS(const int day);
void gcd(int n1, int n2);

// Main function
int main(void) {
    int n1, n2;

    printf("--- GREATEST COMMON DIVISOR ---\n");
    printf("Enter two integers: ");

    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid entry\n");
        return 1;
    }

    if (n1 > 0 && n2 > 0) gcd(n1, n2);
    else {
        printf("The number must be positive\n");
        return 2;
    }

    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void gcd(int n1, int n2) {
    int modNum, aux;
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
            printf("Greatest common divisor: %d", n1);
            sayHelloBuhOS(DAY);
            break;
        }
    }
}
