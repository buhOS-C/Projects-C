/************************************************************************
* Name: dateEarlier.c                                                   *
* Purpose: Date earlier                                                 *
* Author: buhOS                                                         *
* Date: 09/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    short month1, day1, year1;
    short month2, day2, year2;

    printf("--- DATE EARLIER 🗓  ---\n");
    printf("Enter first date (mm/dd/yy): ");
    scanf("%hd/%hd/%hd", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%hd/%hd/%hd", &month2, &day2, &year2);

    if (year1 < year2) {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month1, day1, year1, month2, day2, year2);
    } else if (year2 < year1) {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month2, day2, year2, month1, day1, year1);
    } else if (month1 < month2) {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month1, day1, year1, month2, day2, year2);
    } else if (month2 < month1) {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month2, day2, year2, month1, day1, year1);
    } else if (day1 <= day2) {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month1, day1, year1, month2, day2, year2);
    } else {
        printf("%.2hd/%.2hd/%.2hd is earlier than %.2hd/%.2hd/%.2hd", month2, day2, year2, month1, day1, year1);
    }

    sayHelloBuhOS(22);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}