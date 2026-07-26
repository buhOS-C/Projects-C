/************************************************************************
* Name: date.c                                                          *
* Purpose: Date from the user                                           *
* Author: buhOS                                                         *
* Date: 25/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    /*
        Write a program that accepts a date from the user in the form
        mm/dd/yyyy and the displays it in the form yyyymmdd
        Enter a date (mm/dd/yyyy): 2/17/2011
        You entered the date 20110217
    */
    int month, day, year;

    printf("--- DATE FROM USER 🗓️ ---\n");
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%2.2d%d\n", year, month, day);

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