/************************************************************************
* Name: taxamount.c                                                     *
* Purpose: Display the amount with 5% tax added                         *
* Author: buhOS                                                         *
* Date: 21/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float money = 0.0f;
    float tax = 1.05f;
    float totalMoney = 0.0f;

    printf("---TAX AMOUNT 💰---\n");
    printf("Enter an amount: ");
    scanf("%f", &money);

    totalMoney = tax * money;
    printf("With tax added: $%.2f\n", totalMoney);

    sayHelloBuhOS(5);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}