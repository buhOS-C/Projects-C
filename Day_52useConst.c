/************************************************************************
* Name: useConst.c                                                         *
* Purpose: How to use const with pointers                               *
* Author: buhOS                                                         *
* Date: 20/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 52      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
void f(const int *p);

// Main function
int main(void) {
    int a = 7;
    int *p = &a;
    
    f(p);

    printf("--- HOW TO USE CONST WITH POINTERS ---\n");
    printf("%d\n", a);

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void f(const int *p) {
    *p = 9; // Error (only - read)
}
