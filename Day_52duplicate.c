/************************************************************************
* Name: duplicate.c                                                     *
* Purpose: Duplicate numbers with pointers                              *
* Author: buhOS                                                         *
* Date: 26/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 52      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);
void duplicateShape1(int *p);
void duplicateShape2(int p);

// Main function
int main(void) {
    int number = 28;
    int number2 = 28;

    printf("--- DUPLICATE NUMBER ---\n");

    printf("Number 1: %d\n", number);
    printf("Number 2: %d\n", number2);

    duplicateShape1(&number);
    printf("Duplicate number 1 with pointers: %d\n", number);

    duplicateShape2(number2);
    printf("Duplicate number 2: %d without pointers\n"
           "(No modify the original number)\n", number2);

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

void duplicateShape1(int *p) {
    *p = *p * 2;
}

void duplicateShape2(int p){
    p = p * 2;
}
