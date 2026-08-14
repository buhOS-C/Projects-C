/************************************************************************
* Name: square.c                                                        *
* Purpose: Square                                                       *
* Author: buhOS                                                         *
* Date: 13/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int i;
        int userNumber;

        printf("--- TABLE OF SQUARES ---\n");
        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%d", &userNumber);

        i = 1;
        while (i <= userNumber) {
                printf("%10d%10d\n", i, (i * i));
                i++;
        }

    sayHelloBuhOS(25);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}