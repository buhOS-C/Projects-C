/************************************************************************
* Name: square2.c                                                       *
* Purpose: Overflow                                                     *
* Author: buhOS                                                         *
* Date: 23/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    // Int overflow in 46341
    // Short overflow in 182
    //int i, n
    short i, n;

    printf("--- OVERFLOW WITH INT AND SHORT ---\n");
    printf("This program prints a table of squares.\n");
    printf("enter number of entries in table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++) {
        printf("%10hd%10hd\n", i, i * i); 
    }
    
    sayHelloBuhOS(32);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
