/************************************************************************
* Name: bills.c                                                         *
* Purpose: To pay that amount using the smallest number $20 $10 5$ 1$   *
* Author: buhOS                                                         *
* Date: 23/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 49
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

// Function prototypes
void sayHelloBuhOS(const int day);
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

// Main function
int main(void)
{
    int twentyBills = 0, tenBills = 0, fiveBills = 0, oneBills = 0;
    int totalAmount = 0;

    //Get the amount
    printf("--- BILLS VERSION 2 ---\n");
    printf("Enter a dollar amount: ");
    if (scanf("%i", &totalAmount) != 1) {
        printf("Invalid entry.\n");
        return 1;
    }

    pay_amount(totalAmount, &twentyBills, &tenBills, &fiveBills, &oneBills);

    // Show in console
    printf("$20 bills: %i\n", twentyBills);
    printf("$10 bills: %i\n", tenBills);
    printf("$5 bills: %i\n", fiveBills);
    printf("$1 bills: %i\n", oneBills);

    sayHelloBuhOS(DAY);
    return 0;               //or exit(0) with stdlib.h
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}

void pay_amount(int dollars, int *twenties, int *tens, 
                int *fives, int *ones) {

    // Get 20$
    *twenties = dollars / TWENTY;
    dollars -= (*twenties * TWENTY);

    // Get 10$
    *tens = dollars / TEN;
    dollars -= (*tens * TEN);

    // Get 5$
    *fives = dollars / FIVE;
    dollars -= (*fives * FIVE);

    // Get 1$
    *ones = dollars;
}
