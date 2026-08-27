/************************************************************************
* Name: squareRoot.c                                                    *
* Purpose: Square root                                                  *
* Author: buhOS                                                         *
* Date: 27/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <math.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    double x;
    double y, yNew;

    printf("--- SQUARE ROOT ---\n");
    printf("Enter a positive number: ");

    // If the user does not enter numbers
    if (scanf("%lf", &x) != 1) {
        printf("Error: invalid input.\n");
        return 1;
    }
    // If the number is negative
    if (x < 0) {
         printf("Error: number must be non-negative.\n");
         return 1;
    }
    else {
        // If x == 0
        if (x == 0) {
            yNew = 0.0;
            printf("Square root: %.5lf\n", yNew);
        }
        // x != 0
        else {
            // Initial guess y
            y = 1.0;
        
            while (1) {

                // Calculate the current average (y + x/y) / 2
                yNew = (y + (x / y)) / 2;

                // Condition for terminating the loop
                if (fabs(y - yNew) < (0.00001 * yNew) ) {
                    printf("Square root: %.5lf\n", yNew);
                    break;
                }

                y = yNew;
            }
        }
    }

    sayHelloBuhOS(35);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
