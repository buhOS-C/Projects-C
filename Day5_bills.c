/************************************************************************
* Name: bills.c                                                         *
* Purpose: To pay that amount using the smallest number $20 $10 5$ 1$   *
* Author: buhOS                                                         *
* Date: 21/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int twentyBills, tenBills, fiveBills, oneBills;
    int totalAmount = 0;

    //Get the amount
    printf("Enter a dollar amount: ");
    scanf("%i", &totalAmount);

    // Get $20
    twentyBills = (totalAmount / TWENTY);
    totalAmount = totalAmount - (twentyBills * TWENTY);

    // Get $10
    tenBills = (totalAmount / TEN);
    totalAmount = totalAmount - (tenBills * TEN);

    // Get $5
    fiveBills = (totalAmount / FIVE);
    totalAmount = totalAmount - (fiveBills * FIVE);

    // Get $1
    oneBills = totalAmount;

    // Show in console
    printf("$20 bills: %i\n", twentyBills);
    printf("$10 bills: %i\n", tenBills);
    printf("$5 bills: %i\n", fiveBills);
    printf("$1 bills: %i\n", oneBills);

    sayHelloBuhOS(5);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}