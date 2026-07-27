/************************************************************************
* Name: magicSquare.c                                                   *
* Purpose: Magic square                                                 *
* Author: buhOS                                                         *
* Date: 26/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10,
        num11, num12, num13, num14, num15, num16, sumRow1, sumRow2,
        sumRow3, sumRow4, sumCol1, sumCol2, sumCol3, sumCol4,
        sumDiag1, sumDiag2;

    printf("--- MAGIC SQUARE 🟥🧙 ---\n");
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9,
            &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    // Calculate
    sumRow1 = num1 + num2 + num3 + num4;
    sumRow2 = num5 + num6 + num7 + num8;
    sumRow3 = num9 + num10 + num11 + num12;
    sumRow4 = num13 + num14 + num15 + num16;
    sumCol1 = num1 + num5 + num9 + num13;
    sumCol2 = num2 + num6 + num10 + num14;
    sumCol3 = num3 + num7 + num11 + num15;
    sumCol4 = num4 + num8 + num12 + num16;
    sumDiag1 = num1 + num6 + num11 + num16;
    sumDiag2 = num4 + num7 + num10 + num13;

    // Show
    printf("\n%2d\t%2d\t%2d\t%2d\n"
           "%2d\t%2d\t%2d\t%2d\n"
           "%2d\t%2d\t%2d\t%2d\n"
           "%2d\t%2d\t%2d\t%2d\n",
            num1, num2, num3, num4, num5, num6, num7, num8, num9,
            num10, num11, num12, num13, num14, num15, num16);

    printf("\nRow sums: %d %d %d %d\n", sumRow1, sumRow2, sumRow3, sumRow4);
    printf("Column sums: %d %d %d %d\n", sumCol1, sumCol2, sumCol3, sumCol4);
    printf("Diagonal sums: %d %d\n", sumDiag1, sumDiag2);

    sayHelloBuhOS(11);
    return 0;               //or exit(0) with <stdlib.h>
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}