/************************************************************************
* Name: infinitySeries.c                                                *
* Purpose: Infinity series                                              *
* Author: buhOS                                                         *
* Date: 20/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int n, i, j;
	float e, fraction, den;

    printf("--- INFINITY SERIES ---\n");
    printf("1 + 1/1! + 1/2! + ... + 1/n!\n");
	printf("Enter a n number: ");
	scanf("%d", &n);
	// Number have to be greastest than 0
	if (n > 0) {
		e  = 1;
		// For loop to iteration
		for (i = 1; i <= n; i++) {
			den = 1;

			for (j = 1; j <= i; j++) {
				den *= j;
			}
            // Add fraction to e
			fraction = 1 / den;
			e += fraction;
		}
	}

	printf("The value of the constant e is: %f", e);

    sayHelloBuhOS(29);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
