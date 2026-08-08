/************************************************************************
* Name: tax.c                                                           *
* Purpose: Amount of tax                                                *
* Author: buhOS                                                         *
* Date: 07/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float income = 0.0f, tax = 0.0f;

    printf("--- TAX 💰 ---\n");
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    // Calculate tax
    if (income <= 750.0f) tax = 0.01f * income;
    else if (income <= 2250.0f) tax = 7.50f + (0.02f * (income - 750.0f));
    else if (income <= 3750.0f) tax = 37.50f + (0.03f * (income - 2250.0f));
    else if (income <= 5250.0f) tax = 82.50f + (0.04f * (income - 3750.0f));
    else if (income <= 7000.0f) tax = 142.50f + (0.05f * (income - 5250.0f));
    else tax = 230.0f  + (0.06f * (income - 7000.0f));

    // Show
    printf("Tax to pay: %.2f", tax);

    sayHelloBuhOS(20);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}