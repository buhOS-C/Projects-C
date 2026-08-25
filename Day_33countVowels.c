/************************************************************************
* Name: countVowels.c                                                   *
* Purpose: Count the vowels                                             *
* Author: buhOS                                                         *
* Date: 24/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <ctype.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    char ch;
    int count = 0;

    printf("--- COUNT THE VOWELS ---\n");
    printf("Enter a sentence: ");
    ch = getchar();

    while (ch != '\n') {
        ch = toupper(ch);

        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
        }
        ch = getchar();
    }
    
    printf("Your sentence contains %d vowels.\n", count);

    sayHelloBuhOS(33);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
