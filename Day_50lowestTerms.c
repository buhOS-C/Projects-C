/************************************************************************
* Name: lowestTerms.c                                                   *
* Purpose: Lowest terms                                                 *
* Author: buhOS                                                         *
* Date: 25/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 50

// Function prototypes
void sayHelloBuhOS(const int day);
void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

// Main function
int main(void) {
    int n1, n2;
    int red_numerator, red_denominator;

    printf("--- FRACTION IN LOWEST TERMS ---\n");
    printf("Enter a fraction: ");

    if (scanf("%d/%d", &n1, &n2) != 2 || n1 <= 0 || n2 <= 0) {
        printf("Invalid entry.\n");
        return 1;
    }

    reduce(n1, n2, &red_numerator, &red_denominator);

    printf("In lowest terms: %d/%d\n", red_numerator, red_denominator);

    sayHelloBuhOS(DAY);
    return 0;

}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator) {
    int modNum, num, den;

    num = numerator;
    den = denominator;

    while (1) {
        modNum = numerator % denominator;
        numerator = denominator;
        denominator = modNum;

        if (denominator == 0) {
            *reduced_numerator = (num / numerator);
            *reduced_denominator = (den / numerator);
            break;
        }
    }
}
