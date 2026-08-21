/************************************************************************
* Name: calendar.c                                                      *
* Purpose: Calendar                                                     *
* Author: buhOS                                                         *
* Date: 20/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short numberDaysM, startDayW;
	unsigned short count = 1;

	printf("--- CALENDAR ---\n");
	printf("Enter number days of in month: ");
	scanf("%hu", &numberDaysM);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%hu", &startDayW);

	if (numberDaysM >= 28 && numberDaysM <= 31) {
		// Indexing
		if (startDayW == 1) goto here;
		if (startDayW >= 1 && startDayW <= 7) {
			printf("%*s", 3 * (startDayW - 1), " ");
			count = startDayW;
			
			// Iteration days of month
			here:
			for (int i = 1; i <= numberDaysM; i++ ) {
				if (count <= 7) {
					printf("%3hu", i);
					count++;
				} else {
					printf("\n");
					printf("%3hu", i);
					count = 2;
				}
			}
		} else printf("WRONG START DAY OF THE WEEK...");

	} else printf("WRONG NUMBER DAYS OF MONTH...");

    sayHelloBuhOS(29);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
