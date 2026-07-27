/************************************************************************
* Name: phoneNumber.c                                                   *
* Purpose: Telephone number (xxx) xxx-xxxx                              *
* Author: buhOS                                                         *
* Date: 26/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int phonePart1, phonePart2, phonePart3;

    printf("--- TELEPHONE NUMBER 📞 ---\n");
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phonePart1, &phonePart2, &phonePart3);
    printf("You entered %.3d.%.3d.%.4d\n", phonePart1, phonePart2, phonePart3);

    sayHelloBuhOS(10);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}