/************************************************************************
* Name: enterToContinue.c                                               *
* Purpose: Press enter to continue                                      *
* Author: buhOS                                                         *
* Date: 23/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int i, n;
    char ch;

    printf("--- PRESS ENTER TO CONTINUE ---\n");
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        if (i % 24 != 0) {
            printf("%10d%10d\n", i, i * i);

        } else {
            printf("%10d%10d\n", i, i * i);
            printf("Press Enter to continue...");

            // Clean the buffer
            while (getchar() != '\n') {
                ;
            }

            // Reset the count
            while (ch != '\n') {
                ch = getchar();
            }
        }
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
