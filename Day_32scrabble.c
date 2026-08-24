/************************************************************************
* Name: scrabble.c                                                      *
* Purpose: Scrabble game                                                *
* Author: buhOS                                                         *
* Date: 23/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <ctype.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    // 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ
    
    char ch;
    short points = 0;

    printf("--- SCRABBLE GAME ---\n");
    printf("Enter a word: ");
    ch = getchar();

    while (ch != '\n') {

        ch = toupper(ch);
        
        switch (ch) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                points += 1;
                break;
            case 'D': case 'G':
                points += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                points += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                points += 4;
                break;
            case 'K':
                points += 5;
                break;
            case 'J': case 'X':
                points += 8;
                break;
            case 'Q': case 'Z':
                points += 10;
                break;
        }
        ch = getchar();
    }
    printf("Scrabble value: %hd", points);

    sayHelloBuhOS(32);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
