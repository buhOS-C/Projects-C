/************************************************************************
* Name: firstLastName.c                                                 *
* Purpose: Displays the last nae, a comma, and the first initial        *
* Author: buhOS                                                         *
* Date: 26/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <ctype.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    char ch, letterName;

    printf("--- FIRST AND LAST NAME ---\n");
    printf("Enter a first and last name: ");
    ch = getchar();

    // Remove extra spaces before the first name
    while (ch == ' ') {
        ch = getchar();
    }

    // Obtain the first letter of the name
    letterName = toupper(ch);

    // Remove the other letters from the name
    while (ch != ' ') {
        ch = getchar();
    }

    while (ch != '\n') {
        // Remove the extra spaces between
        // the first and last name
        if (ch == ' ') {
            ch = getchar();
        } else {
        // Capital letter of the last name
            ch = toupper(ch);

            while (ch != '\n') {
                // Remove spaces after the
                // last name
                if (ch == ' ') {
                    ch = getchar();
                } else {
                    printf("%c", ch);
                    ch = getchar();
                }
            }
            break;
        }
    }

    printf(", %c.\n", letterName);

    sayHelloBuhOS(34);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
