/************************************************************************
* Name: checkerBoard.c                                                  *
* Purpose: Checker board                                                *
* Author: buhOS                                                         *
* Date: 01/09/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    int n;
    int check_board[8][8] = {};
    const char letters[2] = {'B', 'R'};

    printf("--- CHECKER BOARD ---\n");

    for (int i = 0; i < 8; i++ ) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                check_board[i][j] = letters[0];
                printf("%c ", check_board[i][j]);
            }
            else {
                check_board[i][j] = letters[1];
                printf("%c ", check_board[i][j]);
            }
        }
        printf("\n");
    }


    sayHelloBuhOS(39);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

