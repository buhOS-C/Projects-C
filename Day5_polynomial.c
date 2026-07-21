/************************************************************************
* Name: polynomial.c                                                    *
* Purpose: Displays the value of the next polynomial                    *
* Author: buhOS                                                         *
* Date: 21/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    double x = 0.0;
    double result = 0.0;

    printf("---POLYNOMIAL🤓---\n");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    result = 3 * (x * x * x * x * x)
             + 2 * (x * x * x * x)
             - 5 * (x * x * x)
             - (x * x)
             + 7 * x
             - 6;

    printf("Result: %.5f\n", result);
    sayHelloBuhOS(5);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}