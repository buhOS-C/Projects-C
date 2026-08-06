/************************************************************************
* Name: date.c                                                          *
* Purpose: Date in Legal Form                                           *
* Author: buhOS                                                         *
* Date: 04/08/2026 - 05/08/2026                                         *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    short month, day, year;

    // Get from user
    printf("--- DATE IN LEGAL FORM 🗓️ ---\n");
    printf("Enter date (mm/dd/yy): ");
    scanf("%hd/%hd/%hd", &month, &day, &year);

    // Show date in legal form
    printf("Dated this ");

    switch (day % 10) {
        case 1: printf("%hd%s day of ", day, (day != 11) ? "st" : "th");
                break;
        case 2: printf("%hd%s day of ", day, (day != 12) ? "nd" : "th");
                break;
        case 3: printf("%hd%s day of ", day, (day != 13) ? "rd" : "th");
                break;
        default: printf("%hdth day of ", day);
                 break;
    }

    switch (month) {
        case 1: printf("January, ");
                break;
        case 2: printf("February, ");
                break;
        case 3: printf("March, ");
                break;
        case 4: printf("April, ");
                break;
        case 5: printf("May, ");
                break;
        case 6: printf("June, ");
                break;
        case 7: printf("July, ");
                break;
        case 8: printf("August, ");
                break;
        case 9: printf("September, ");
                break;
        case 10: printf("October, ");
                break;
        case 11: printf("November, ");
                break;
        case 12: printf("December, ");
                break;
        default: printf("NA");
                break;
    }
    printf("20%hd.", year);

    sayHelloBuhOS(18);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}