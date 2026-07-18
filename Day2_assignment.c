/************************************************************************
* Name: assigment.c                                                     *
* Purpose: Assignment                                                   *
* Author: buhOS                                                         *
* Date: 18/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const char *day);

// Main function
int main(void){
        int height, length, width;
        float profit;
        float profit2 = 1450.68f;
        float result = 0.0f;

        height = 100;
        length = 50;
        width = 25;
        profit = 41.2f;

        result = profit * profit2;

        printf("ASSIGNMENT\n");
        printf("Height: %d\n", height);
        printf("Length: %d\n", length);
        printf("Width: %d\n", width);
        printf("Profif: %.2f\n", profit);
        printf("Profit 2: %.2f\n", profit2);
        printf("Result: %.2f\n", result);
        sayHelloBuhOS("2");
        return 0;
}

// Functions
void sayHelloBuhOS(const char *day){
        printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
        printf("---Day %s\n", day);
}