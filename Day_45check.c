/************************************************************************
* Name: check.c                                                         *
* Purpose: Write a function check(x, y, n)                              *
* Author: buhOS                                                         *
* Date: 11/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define DAY 45      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
bool check(int x, int y, int n);

// Main function
int main(void) {

    int x, y, n;

    printf("--- CHECK (X, Y, N) ---\n");
    printf("'This program returns 1 if both x and y fall between 0 and n - 1,\n"
           "inclusive. The function should return 0 otherwise'\n\n");
    printf("Enter values ​​for x, y, and n: ");
    if (scanf("%d %d %d", &x, &y, &n) != 3) {
        printf("Invalid entry\n");
        return 1;
    }

    printf("%s\n", check(x, y, n) ? "True" : "False");

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

bool check(int x, int y, int n) {
    return (x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1);
}
