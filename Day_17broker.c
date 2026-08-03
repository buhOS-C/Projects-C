/************************************************************************
* Name: broker.c                                                        *
* Purpose: Broker                                                       *
* Author: buhOS                                                         *
* Date: 03/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float userAmount = 0.0f, commRate = 0.0f;

    printf("--- BROKER'S COMMISSION 🧮🦉 ---\n");
    printf("Enter value of trade: ");
    scanf("%f", &userAmount);

    if (userAmount < 2500.0f) {
        commRate = 30 + (1.7 / 100) * userAmount;
        if (commRate < 39) {
            commRate = 39;
        }
    }

    else if (userAmount < 6250.0f) {
        commRate = 56 + (0.66 / 100) * userAmount;
    }
    else if (userAmount < 20000.0f ) {
        commRate = 76 + (0.34 / 100) * userAmount;
    }
    else if (userAmount < 50000.0f) {
        commRate = 100 + (0.22 / 100) * userAmount;
    }
    else if (userAmount < 500000.0f) {
        commRate = 155 + (0.11 / 100) * userAmount;
    }
    else {
        commRate = 255 + (0.09 / 100) * userAmount;
    }
    printf("Commission: $%.2f\n", commRate);

    sayHelloBuhOS(17);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}