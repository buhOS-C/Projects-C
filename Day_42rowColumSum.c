/************************************************************************
* Name: rowColumSum.c                                                   *
* Purpose: Prints the row sums and columns sums                         *
* Author: buhOS                                                         *
* Date: 04/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 42      // Study days
#define N 5         // Length

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);

// Main function
int main(void) {
    int a[N][N];
    int rowSum = 0;
    int colSum = 0;

    printf("--- MATRIX %dX%d ---\n", N, N);
    
    // Save the row entered by the user
    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            if (scanf("%d", &a[i][j]) != 1) {
                // If the user enters an incorrect number
                printf("\nInvalid entry.\n"); 
                return 1;
            }
        }
        cleanInputBuffer();
    }

    // Sums rows
    printf("\nRow totals: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rowSum += a[i][j];
        }
        printf("%d ", rowSum);
        rowSum = 0;
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            colSum += a[j][i];
        }
        printf("%d ", colSum);
        colSum = 0;
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

void cleanInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}
