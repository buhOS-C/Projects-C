/************************************************************************
* Name: upc.c                                                           *
* Purpose: Universal Product Code                                       *
* Author: buhOS                                                         *
* Date: 28/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int firstDig, secondDig, thirdDig, fourthDig, fifthDig, sixthDig,
        seventhDig, eighthDig, ninthDig, tenthDig, eleventhDig,
        checkDigit, sum1, sum2;

    printf("--- UNIVERSAL PRODUCT CODE ✅ ---\n");
    printf("Enter the Universal Product Code (X XXXXX XXXXX X): ");
    scanf("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d",
                                      &firstDig, &secondDig, &thirdDig,
                                      &fourthDig, &fifthDig, &sixthDig,
                                      &seventhDig, &eighthDig, &ninthDig,
                                      &tenthDig, &eleventhDig);


    printf("%d %d%d%d%d%d %d%d%d%d%d\n", firstDig, secondDig, thirdDig,
                                         fourthDig, fifthDig, sixthDig,
                                         seventhDig, eighthDig, ninthDig,
                                         tenthDig, eleventhDig);
    //Calculate
    sum1 = firstDig + thirdDig + fifthDig + seventhDig + ninthDig +  eleventhDig;
    sum2 = secondDig + fourthDig + sixthDig + eighthDig + tenthDig;

    checkDigit = 9 - ((((sum1 * 3) + sum2) - 1) % 10);

    printf("Check digit: %d\n", checkDigit);

    sayHelloBuhOS(13);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}