/************************************************************************
* Name: hours.c                                                         *
* Purpose: 12 hours form                                                *
* Author: buhOS                                                         *
* Date: 06/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    unsigned short hour, min, showHour;

    printf("--- HOURS 🕑 ---\n");
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%hu:%hu", &hour, &min);

    if ( (hour < 24) && (min < 60) ) {
        printf("Equivalent 12-hour time: ");

        showHour = (hour % 12 == 0) ? 12 : (hour % 12);

        // 12 hour time
        printf("%.2hu:%.2hu %s", showHour, min, (hour < 12) ? "AM" : "PM");

    } else {
        printf("Invalid time format");
    }


    sayHelloBuhOS(19);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}