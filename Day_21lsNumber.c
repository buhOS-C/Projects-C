/************************************************************************
* Name: lsNumber.c                                                      *
* Purpose: Largest and smallest number                                  *
* Author: buhOS                                                         *
* Date: 08/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int num1, num2, num3, num4;
    int max1, min1, max2, min2;
    int largest, smallest;

    printf("Enter four integers (X X X X): ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Group 1
    if (num1 > num2) {
        max1 = num1;
        min1 = num2;
    } else {
        max1 = num2;
        min1 = num1;
    }

    // Group 2
    if (num3 > num4) {
        max2 = num3;
        min2 = num4;
    } else {
        max2 = num4;
        min2 = num3;
    }

    // largest - smallest
    largest = (max1 > max2) ? max1 : max2;
    smallest = (min1 < min2) ? min1 : min2;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    sayHelloBuhOS(21);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}