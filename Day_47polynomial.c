/************************************************************************
* Name: polynomial.c                                                    *
* Purpose: Calls the function to compute the value of the polynomial    *
* Author: buhOS                                                         *
* Date: 13/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 47      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
double polynomial(double x);

// Main function
int main(void) {
    double x;

    printf("--- POLYNOMIAL ---\n");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter the x value: ");

    if(scanf("%lf", &x) != 1) {
        printf("Invalid entry.\n");
        return 1;
    }

    printf("Result: %.2lf", polynomial(x));

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

double polynomial(double x) {
    return ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
}
