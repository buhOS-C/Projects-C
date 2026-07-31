/************************************************************************
* Name: octalNumber.c                                                   *
* Purpose: Octal number                                                 *
* Author: buhOS                                                         *
* Date: 30/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int userNumber, firstDig, secondDig, thirdDig, fourthDig, fifthDig;

    printf("--- OCTAL NUMBER 🦉 ---\n");
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &userNumber);

    // Calculate
    firstDig = userNumber % 8;
    userNumber /= 8;
    secondDig = userNumber % 8;
    userNumber /= 8;
    thirdDig = userNumber % 8;
    userNumber /= 8;
    fourthDig = userNumber % 8;
    userNumber /= 8;
    fifthDig = userNumber % 8;

    printf("In octal your number is: %d%d%d%d%d\n", fifthDig, fourthDig, thirdDig, secondDig, firstDig);

    sayHelloBuhOS(15);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}