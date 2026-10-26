/************************************************************************
* Name: swap.c                                                          *
* Purpose: Swap                                                         *
* Author: buhOS                                                         *
* Date: 26/10/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 52      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
void swap(int *a, int *b);

// Main function
int main(void) {
    int a = 3;
    int b = 4;

    printf("--- SWAP PROGRAM ---\n");
    printf("Numbers before the swap:\n");
    printf("\ta = %d\n", a);
    printf("\tb = %d\n\n", b);

    swap(&a, &b);
    printf("Numbers after the swap:\n");
    printf("\ta = %d\n", a);
    printf("\tb = %d\n", b);

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void swap(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
