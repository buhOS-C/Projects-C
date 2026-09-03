/************************************************************************
* Name: b1ff.c                                                          *
* Purpose: B1FF-speak                                                   *
* Author: buhOS                                                         *
* Date: 03/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define DAY 41      // Study days
#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))
#define N 100       // Length 

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {

    char c, letter;
    char message[N];
    int i = 0;
    int length = SIZE(message);

    printf("--- B1FF-SPEAK---\n");
    printf("Enter message (max 100 chars): ");

    // Save the message
    while((c = getchar()) != '\n' && c != EOF && i < length - 1) {
        message[i] = c;
        i++;
    }

    // Display the message in B1FF
    printf("In B1FF-speak: ");
    for (int j = 0; j < i; j++) {
        letter = toupper(message[j]);
        
        switch (letter) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default: putchar(letter); break;
        }
    }
    
    printf("!!!!!!!!!!\n");

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
