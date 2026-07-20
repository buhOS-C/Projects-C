/************************************************************************
* Name: celsius.c                                                       *
* Purpose: Fahrenheit to Celsius                                        *
* Author: buhOS                                                         *
* Date: 19/07/2026                                                      *
*************************************************************************/

#include <stdio.h>
#define DIVISOR 1.8f

// Function prototypes
void sayHelloBuhOS(const char *day);

// Main function
int main(void){
        float fahrenheit, celsius;
        printf("Enter Fahrenheit temperature: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) / DIVISOR;
        printf("Celsius equivalent: %.2f\n", celsius);

        sayHelloBuhOS("3");
        return 0;
}

// Functions
void sayHelloBuhOS(const char *day){
        printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
        printf("---Day %s\n", day);

}