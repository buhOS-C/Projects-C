/************************************************************************
* Name: maxMin.c                                                        *
* Purpose: Find the largest and smallest number in an array             *
* Author: buhOS                                                         *
* Date: 26/10/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))
#define DAY 52      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
void max_min(int a[], int n, int *max, int *min);

// Main function
int main(void) {
    int big, small;
    int *max = &big;
    int *min = &small;
    
    int a[] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};
    
    max_min(a, SIZE(a), max, min);

    printf("--- MAX MIN ---\n");
    printf("Largest: %d\nSmallest: %d\n", big, small);
    
    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void max_min(int a[], int n, int *max, int *min) {
    int i;

    *max = *min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}
