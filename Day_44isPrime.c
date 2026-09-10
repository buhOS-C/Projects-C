/************************************************************************
* Name: isPrime.c                                                       *
* Purpose: Testing wheter a number is prime                             *
* Author: buhOS                                                         *
* Date: 09/09/2026 - 10/09/2026                                         *
*************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define DAY 44      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
bool isPrime(int number);

// Main function
int main(void) {
    int n;

    printf("--- PRIME OR NOT PRIME ---\n");
    printf("Tell me a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid entry\n");
        return 1;
    }
    
    if (isPrime(n)) printf("Prime\n");
    else printf("Not prime\n");

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

bool isPrime(int number) {

    if (number <= 1) {
        return false;
    }
    
    int limit = (int) sqrt(number);
    
    for (int i = 2; i <= limit; i++) {
        // If the number is not prime
        if(number % i == 0) return false;
    }
    // If the number is prime
    return true;
}

