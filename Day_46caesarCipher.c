/************************************************************************
* Name: caesarCipher.c                                                  *
* Purpose: Caesar cipher                                                *
* Author: buhOS                                                         *
* Date: 12/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 46      // Study days
#define LEN 80

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {

    char message[LEN] = {0};
    char c;
    int i = 0;
    int n = 0;

    printf("--- CAESAR CIPHER ---\n");
    // Save the message
    printf("Enter message to be encrypted: ");
    while ((c = getchar()) != '\n' && i < LEN - 1) {
        message[i] = c;
        i++;
    }
    message[i] = '\0';

    // Check data type
    printf("Enter shift amount (1 - 25): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid entry.\n");
        return 1;
    }

    // Check if n is correct
    if (n < 1 || n > 25) {
        printf("The shift amount should be between 1 - 25.\n");
        return 2;
    }

    printf("Encrypted message: ");

    for (int i = 0; message[i] != '\0'; i++) {
        c = message[i];

        if (c >= 65 && c <= 90) {
            printf("%c", ((c - 'A') + n) % 26 + 'A');
        }
        else if (c >= 97 && c <= 122) {
            printf("%c", ((c - 'a') + n) % 26 + 'a');
        }
        else {
            printf("%c", c);
        }

    }

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}
