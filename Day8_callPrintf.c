/************************************************************************
* Name: callPrintf.c                                                    *
* Purpose: Calls printf                                                 *
* Author: buhOS                                                         *
* Date: 24/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    /*
      (a) Exponential notation; left-justified in a field of size 8;
                                one digit after the decimal point.
      (b) Exponential notation; right-justified in a field of size 10;
                                six digits after the decimal point.
      (c) Fixed decimal notation; left-justified in a field of size 8;
                                three digits after the decimal point.
      (d) Fixed decimal notation; right-justified in a field of size 6;
                                no digits after the decimal point.
    */
    float x = 57.69;

    printf("--- CALLS OF PRINT 📞 ---\n");
    printf("(a): [%-8.1e]\n", x);
    printf("(b): [%10.6e]\n", x);
    printf("(c): [%-8.3f]\n", x);
    printf("(d): [%6.0f]\n", x);
    sayHelloBuhOS(8);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}