/************************************************************************
* Name: interestRate.c                                                  *
* Purpose: Interest rate                                                *
* Author: buhOS                                                         *
* Date: 30/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))
#define PERCENTAGE 37       // ASCII Code  37 = '%'
#define MONEY 100.0f        // 100$ to be invested
#define N 5                 // Lenght array a to save the money


// Function prototypes
void sayHelloBuhOS(const int day);
void clearInputBuffer(void);

// Main function
int main(void) {
    float a[N] = {0};       // Array to store money
    int years, count;
    float money;
    int i_rate, aux;
    float amount;
    
    printf("--- INTEREST RATE ---\n");
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

    count = 1;
    money = MONEY;
    aux = i_rate;
    while (count <= years) {
        // Displays years
        printf("\n%2c%-6d", ' ',count);

        // Calculate de amount
        for (int i = 0; i < SIZE(a); i++) {
            float col_rate = aux + i;
            if (count != 1) money = a[i];
            amount = (col_rate / 100.0f) * money + money;
            a[i] = amount;
        }
        
        // Display values
        for (int i = 0; i < SIZE(a); i++) {
            printf("%.2f%c", a[i], ' ');
        }
        
        count += 1;
    }

    sayHelloBuhOS(38);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void clearInputBuffer(void) {
    while (getchar() != '\n')
        ;
}
