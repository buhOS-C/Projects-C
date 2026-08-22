/************************************************************************
* Name: length.c                                                        *
* Purpose: Determines the length of a message                           *
* Author: buhOS                                                         *
* Date: 22/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short count;
    char ch;

    printf("--- LENGTH OF A MESSAGE ---\n");
    printf("Enter a message: ");
    ch = getchar();

    while (ch != '\n') {
        count++;
        ch = getchar();
    }

    printf("Your message was %hu character(s) long.", count);

    sayHelloBuhOS(31);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
