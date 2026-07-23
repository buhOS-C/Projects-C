/************************************************************************
* Name: payments .c                                                     *
* Purpose: Calculates the remaining balance                             *
* Author: buhOS                                                         *
* Date: 22/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float loan = 0.0f;
    float annual_interest = 0.0f;
    float monthly_payment = 0.0f;
    float monthly_interest, decimal_interest;

    // User provides information
    printf("---BALANCE ON A LOAN💰---\n");
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &annual_interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // Calculates the decimal interest
    monthly_interest = (annual_interest / 12);
    decimal_interest =  (monthly_interest / 100);

    // First payment
    loan = loan + (loan * decimal_interest) - monthly_payment;
    printf("\nBalance remaining after first payment: $%.2f\n", loan);

    // Second payment
    loan = loan + (loan  * decimal_interest) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);

    // Third payment
    loan = loan + (loan * decimal_interest) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    sayHelloBuhOS(6);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
}