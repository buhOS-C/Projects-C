/************************************************************************
* Name: maxMin.c                                                        *
* Purpose: Find the largest and smallest elements in an array.          *
* Author: buhOS                                                         *
* Date: 23/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 49      // Study days
#define N 10

// Function prototypes
void sayHelloBuhOS(const int day);
void max_min(int a[], int n, int *max, int *min);
// Main function
int main(void) {

    int a[N] = {0};
    int big, small;

    printf("Enter 10 numbers: ");

    for (int i = 0; i < N; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid entry.\n");
            return 1;
        }
    }

    max_min(a, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

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

    *max = *min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        else if (a[i] < *min) {
            *min = a[i];
        }
    }
}
