/************************************************************************
* Name: addFracMod.c                                                    *
* Purpose: Modify the addfrac.c                                         *
* Author: buhOS                                                         *
* Date: 27/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int num1, num2, den1, den2, resultNum, resultDen;

    printf("--- ADD FRACTIONS MODIFY 🧮 ---\n");
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);

    //Calculate
    resultNum = (den2 * num1) + (den1 * num2);
    resultDen = den1 * den2;

    //Show
    printf("The sum is: %d/%d\n", resultNum, resultDen);

    sayHelloBuhOS(12);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}