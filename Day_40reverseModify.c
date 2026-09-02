/************************************************************************
* Name: reverseModify.c                                                 *
* Purpose: Reverse modify with MACRO                                    *
* Author: buhOS                                                         *
* Date: 02/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 40
#define SIZE(arr) ((int) (sizeof(arr) / sizeof((arr)[0])))
#define N 10

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);

// Main function
int main(void) {
    int a[N];
    int len = SIZE(a);

    printf("--- REVERSE MODIFY ---\n");
    printf("Enter %d numbers: ", len);
    for (int i = 0; i < len; i++) {
        
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid entry at position %d.\n", i);
            return 1;
        }
    }
        
    cleanInputBuffer();

    printf("In reverse order: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    
    printf("\n");

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
    while ((c = getchar()) != '\n' && c != EOF );
}

