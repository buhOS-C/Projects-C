/************************************************************************
* Name: identityMatrix.c                                                *
* Purpose: Identity matrix (n x n)                                      *
* Author: buhOS                                                         *
* Date: 30/08/2026                                                      *
*************************************************************************/

#include <stdio.h>
//#include <stdlib.h>           (To clean screen method 2)
#include <unistd.h>
#define GREEN   "\x1b[92m"
#define RESET   "\x1b[0m"

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);
void cleanScreen(void);

// Main function
int main(void) {
    int  n;

    printf("--- IDENTITY MATRIX NXN ---\n");
    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid entry.\n");
        cleanInputBuffer();
        return 1;
    }
    cleanInputBuffer();

    // Create the matrix
    int ident[n][n];

    // Clean the screen
    cleanScreen();

    // Title
    printf("--- MATRIX %dx%d ---\n", n, n);

    // Fill the matrix
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == col) {
                ident[row][col] = 1;
            }
            else {
                ident[row][col] = 0;
            }
        }
    }

    // Display matrix
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (ident[row][col] == 1) {
                printf(GREEN "%d ", ident[row][col]);
                fflush(stdout);
                usleep(100000);
            }
            else {
                printf(RESET "%d ", ident[row][col]);
                fflush(stdout);
                usleep(100000);
            }
        }
        printf("\n");
    }

    printf(RESET "");

    sayHelloBuhOS(38);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void cleanInputBuffer(void) {
    while (getchar() != '\n') ;
}

void cleanScreen(void) {
    // Method 1
    printf("\x1b[2J\x1b[H");
    fflush(stdout);
    
    // Method 2
    /* 
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    */
}
