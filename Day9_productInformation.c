/************************************************************************
* Name: productInformation.c                                            *
* Purpose: Product information entered by the user                      *
* Author: buhOS                                                         *
* Date: 25/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("\nItem\t\tUnit\t\tPurchase\n"
            "\t\tPrice\t\tDate\n"
            "%d\t\t$ %.2f\t\t%.2d/%.2d/%.4d\n",
            item, price, month, day, year);

    sayHelloBuhOS(9);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}