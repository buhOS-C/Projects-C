/************************************************************************
* Name: interestRate2.c                                                  *
* Purpose: Interest rate 2                                                *
* Author: buhOS                                                         *
* Date: 03/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))
#define PERCENTAGE 37       // ASCII Code  37 = '%'
#define MONEY 100.0f        // 100$ to be invested
#define N 5                 // Lenght array a to save the money
#define MONTHS_PER_YEAR 12
#define DAY 41

// Function prototypes
void sayHelloBuhOS(const int day);
void clearInputBuffer(void);

// Main function
int main(void) {
    float a[N];       // Array to store money
    int years;
    int i_rate;

    // Initialize array
    for (int i = 0; i < N; i++) {
        a[i] = MONEY;
    }
    
    printf("--- INTEREST RATE 2 ---\n");
    
    // Get interest rate
    printf("Enter interest rate: ");
    if (scanf("%d", &i_rate) != 1) {
        printf("Invalid entry.\n");
        // Clean the buffer
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();

    // Get number of years
    printf("Enter number of years: ");
    if (scanf("%d", &years) != 1) {
        printf("Invalid entry.\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();
    
    // Display header table
    printf("\n%-8s", "Years");
    for (int i = i_rate; i < ( i_rate + N); i++) {
        printf("%3d%c%3c", i, PERCENTAGE, ' ');
    }


    for (int count = 1; count <= years; count++) {
        // Display year label
        printf("\n%2c%-6d", ' ',count);

        for (int month = 1; month <= MONTHS_PER_YEAR; month++) {
            for (int i = 0; i < SIZE(a); i++) {
                float col_rate = (float) (i_rate + i);
                // Monthly insterest (rate / 12 / 100)
                a[i] += ((col_rate / MONTHS_PER_YEAR) / 100.0f) * a[i];
            }
        }

        // Display values
        for (int i = 0; i < SIZE(a); i++) {
            printf("%.2f%c", a[i], ' ');
        }
    }

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
