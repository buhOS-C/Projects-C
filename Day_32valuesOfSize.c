/************************************************************************
* Name: valuesOfSize.c                                                  *
* Purpose: Prints the values of sizeof                                  *
* Author: buhOS                                                         *
* Date: 23/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {

    printf("--- SIZE OF DATA TYPES ---\n");
    printf("sizeof(int): %zu bytes\n", sizeof(int));
    printf("sizeof(short): %zu bytes\n", sizeof(short));
    printf("sizeof(long): %zu bytes\n", sizeof(long));
    printf("sizeof(float): %zu bytes\n", sizeof(float));
    printf("sizeof(double): %zu bytes\n", sizeof(double));
    printf("sizeof(long double): %zu bytes", sizeof(long double));
    
    sayHelloBuhOS(32);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
