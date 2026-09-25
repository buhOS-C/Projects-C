/************************************************************************
* Name: dailyFlights.c                                                  *
* Purpose: Daily flights                                                *
* Author: buhOS                                                         *
* Date: 25/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DAY 50      // Study days
#define N 8

// Function prototypes
void sayHelloBuhOS(const int day);
void closestDepArrTime(int depTime[], int arrTime[], int n,
                       int userTime, int *closestDepTime,
                       int *closestArrTime);

// Main function
int main(void) {
    
    int hour, min, closestDepTime, closestArrTime;
    int depTime[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrTime[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("--- DAILY FLIGHTS ---\n");
    printf("Enter a 24-hour time: ");
    
    if (scanf("%d:%d", &hour, &min) != 2) {
        printf("Invalid entry.\n");
        return 1;
    }

    hour = abs(hour);
    min = abs(min);

    if (hour < 24 && min < 60) {
        closestDepArrTime(depTime, arrTime, N, hour * 60 + min, &closestDepTime, &closestArrTime);
    
        printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s\n",
        closestDepTime/60, closestDepTime%60, (closestDepTime/60 >= 12) ? "p.m." : "a.m.",
        closestArrTime/60, closestArrTime%60, (closestArrTime/60 >= 12) ? "p.m." : "a.m.");
    }
    else {
        printf("Incorrect time.\n");
    }

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void closestDepArrTime(int depTime[], int arrTime[], int n,
                       int userTime, int *closestDepTime,
                       int *closestArrTime) {

    int diff, currentDiff, index = 0;

    currentDiff = abs(userTime - depTime[0]);

    for (int i = 1; i < n; i++) {

        diff = abs(userTime - depTime[i]);

        if (diff > currentDiff) {
            break;
        }
        else {
            currentDiff = diff;
            index = i;
        }
    }

    *closestDepTime = depTime[index];
    *closestArrTime = arrTime[index];
}
