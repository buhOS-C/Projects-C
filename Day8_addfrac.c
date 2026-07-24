/************************************************************************
* Name: addfrac.c                                                       *
* Purpose: Adding Fractions                                             *
* Author: buhOS                                                         *
* Date: 24/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int num1, denom1, num2, denom2, resultNum, resultDenom;

    printf("--- ADDING FRACTIONS 🧮 a/b + c/d ---\n");
    printf("Enter first fraction: ");
    scanf("%i/%i", &num1, &denom1);
    printf("Enter second fraction: ");
    scanf("%i/%i", &num2, &denom2);
    //printf("%i/%i\n", num1, denom1);
    //printf("%i/%i\n", num2, denom2);

    resultNum = (denom2 * num1) + (denom1 * num2);
    resultDenom = denom1 * denom2;

    printf("The sum is: %i/%i\n", resultNum, resultDenom);

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