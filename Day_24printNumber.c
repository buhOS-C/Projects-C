/************************************************************************
* Name: printNumber.c                                                   *
* Purpose: Print number                                                 *
* Author: buhOS                                                         *
* Date: 12/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short userNumber, modNumber;

        printf("--- NUMBER TO LETTER ---\n");
        printf("Enter a two-digit number: ");
        scanf("%hu", &userNumber);

        printf("You entered the number ");
        switch (userNumber / 10) {
                case 1:
                        modNumber = userNumber % 10;

                        printf("%s", (modNumber == 0) ? "ten" : "");
                        printf("%s", (modNumber == 1) ? "eleven" : "");
                        printf("%s", (modNumber == 2) ? "twelve" : "");
                        printf("%s", (modNumber == 3) ? "thirteen" : "");
                        printf("%s", (modNumber == 4) ? "fourteen" : "");
                        printf("%s", (modNumber == 5) ? "fifteen" : "");
                        printf("%s", (modNumber == 6) ? "sixteen" : "");
                        printf("%s", (modNumber == 7) ? "seventeen" : "");
                        printf("%s", (modNumber == 8) ? "eighteen" : "");
                        printf("%s", (modNumber == 9) ? "nineteen" : "");
                        break;
                case 2: printf("twenty "); break;
                case 3: printf("thirty "); break;
                case 4: printf("forty "); break;
                case 5: printf("fifty "); break;
                case 6: printf("sixty "); break;
                case 7: printf("seventy "); break;
                case 8: printf("eighty "); break;
                case 9: printf("ninety "); break;
        }

        // Second switch case

        if (userNumber < 10 || userNumber >= 20) {
                switch (userNumber % 10) {
                        case 1: printf("one"); break;
                        case 2: printf("two"); break;
                        case 3: printf("three"); break;
                        case 4: printf("four"); break;
                        case 5: printf("five"); break;
                        case 6: printf("six"); break;
                        case 7: printf("seven"); break;
                        case 8: printf("eight"); break;
                        case 9: printf("nine"); break;
                }
        }
        printf(".\n");




    sayHelloBuhOS(24);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}