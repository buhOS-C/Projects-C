/************************************************************************
* Name: guessingNumber.c                                                *
* Purpose: Guessing a number                                            *
* Author: buhOS                                                         *
* Date: 15/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // to use time
#include <ctype.h>      // to use toupper()

#define DAY 48      // Study days

// External variables
int count = 0;

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanInputBuffer(void);
int guessNumber(int randomNumber, int userNumber);

// Main function
int main(void) {
    int randomNumber;
    int userNumber = -1;
    char c = 'Y';

    printf("--- GUESSING A NUMBER ---\n");
    printf("Guess the secret number between 1 and 100.\n");

    srand((unsigned) time(NULL));

    while (c == 'Y') {
        randomNumber = rand() % 100 + 1;      // random number to guess
        userNumber = -1;
       
        printf("A new number has been chosen.\n");

        while (userNumber != randomNumber) {

            printf("Enter guess: ");

            if (scanf("%d", &userNumber) != 1) {
                printf("Invalid entry.\n");
                return 1;
            }


            if (guessNumber(randomNumber, userNumber) == 1) {
                count = 0;
                cleanInputBuffer();

                printf("\nPlay again? (Y/N): ");

                c = getchar();
                c = toupper(c);
            }
        }

    }
    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}

int guessNumber(int randomNumber, int userNumber) {

    count++;

    if (userNumber > randomNumber) {
        printf("Too high; try again.\n");
        return 0;
    }
    else if (userNumber < randomNumber) {
        printf("Too low; try again.\n");
        return 0;
    }
    else {
        printf("You won in %d guesses!\n", count);
        return 1;       // Case 3 (userNumber == randomNumber)
    }

}

void cleanInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        ;
    }
}
