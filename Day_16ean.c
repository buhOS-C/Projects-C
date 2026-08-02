/************************************************************************
* Name: ean.c                                                           *
* Purpose: European Article Numbe                                       *
* Author: buhOS                                                         *
* Date: 02/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        sum1, sum2, checkDigit;

    printf("--- EUROPEAN ARTICLE NUMBER 🌍 ---\n");
    printf("Enter the first 12 digits of an EAN: " );
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d"
          ,&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    //Calculate
    sum1 = d2 + d4 + d6 + d8 + d10 + d12;
    sum2 = d1 + d3 + d5 + d7 + d9 + d11;
    checkDigit = 9 - ((((3 * sum1) + sum2) - 1) % 10);

    printf("Check digit: %d\n", checkDigit);

    sayHelloBuhOS(16);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}