/************************************************************************
* Name: escapeSequences.c                                               *
* Purpose: Espace sequences \a \b \n \t                                 *
* Author: buhOS                                                         *
* Date: 23/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    /*
        Alert (bell)            \a
        Backspace               \b
        New line                \n
        Horizontal tab          \t
                                \"Hello\"
    */

    printf("buhOSS\t\t🦉\n");
    printf("buhOSS\b \n");
    printf("\"Hello world!\"\n");
    printf("\\\\Comment\n");

    sayHelloBuhOS(7);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");
}