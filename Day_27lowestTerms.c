/************************************************************************
* Name: lowestTerms.c                                                   *
* Purpose: Lowest terms                                                 *
* Author: buhOS                                                         *
* Date: 16/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short n1, n2, num, den, modNum, aux;

    printf("--- FRACTION IN LOWEST TERMS ---\n");
    printf("Enter a fraction: ");
    scanf("%hu/%hu", &n1, &n2);

    num = n1;
    den = n2;

    while (1) {
        modNum = n1 % n2;
        n1 = n2;
        n2 = modNum;

        if (n2 == 0) {
            printf("In lowest terms: %hu/%hu", (num / n1), (den / n1));

            sayHelloBuhOS(27);
            return 0;
        }
    }
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
