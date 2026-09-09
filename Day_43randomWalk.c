/************************************************************************
* Name: randomWalk.c                                                    *
* Purpose: Random walk across 10 x 10 array                             *
* Author: buhOS                                                         *
* Date: 08/09/2026                                                      *
*************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define DAY 43    // Study days
#define N 10      // Length matrix

// Function prototypes
void sayHelloBuhOS(const int day);
void cleanScreen(int index);
int isValid(char matrix[N][N], int row, int col);

// Main function
int main(void) {
    const char abecedary[] = {'A', 'B', 'C', 'D', 'E',
                              'F', 'G', 'H', 'I', 'J',
                              'K', 'L', 'M', 'N', 'O',
                              'P', 'Q', 'R', 'S', 'T',
                              'U', 'V', 'W', 'X', 'Y',
                              'Z'};
    char matrix[N][N] = {0};

    // Initialize array with '.'
    for (int i = 0; i < N; i++) {
        for (int j= 0; j < N; j++) {
            matrix[i][j] = '.';
        }
    }

    srand((unsigned) time(NULL));

    int xAux, yAux;
    int x = 0;
    int y = 0;
    int whereToGo;          // UP: 1  DOWN: 2  LEFT: 3  RIGHT: 4
    int indexABC = 0;

    matrix[x][y] = abecedary[indexABC];    // First letter 'A'
    indexABC++;                            // Alphabetical Index

    while (1) {

        if (indexABC == 26) break;

        printf("--- RANDOM WALK ---\n");
        
        whereToGo = rand() % 4;         // 4 possibilities

        xAux = x;
        yAux = y;
        
        switch (whereToGo) {
            case 0:
                // Move up
                x -= 1;
                printf("UP\n");
                break;
            case 1:
                // Move down
                printf("DOWN\n");
                x += 1;
                break;
            case 2:
                // Move to the left
                printf("LEFT\n");
                y -= 1;
                break;
            case 3:
                // Move to the right
                printf("RIGHT\n");
                y += 1;
                break;
        }

        // Fill the matrix
        if (isValid(matrix, x, y)) {
            matrix[x][y] = abecedary[indexABC];
            indexABC++;
        } else {
            x = xAux;
            y = yAux;
        }

        // Display de matrix
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }

        // If you have nowhere to go
        if (!isValid(matrix, x - 1, y) && !isValid(matrix, x + 1, y)
            && !isValid(matrix, x, y - 1) && !isValid(matrix, x, y + 1)) {
            break;
        }

        cleanScreen(indexABC);
    }

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}

void cleanScreen(int index) {
    if (index < 26) {
        printf("\e[1;1H\e[2J");
        usleep(200000);
    }
}

int isValid(char matrix[N][N], int row, int col) {
    if (row < 0 || row >= N || col < 0 || col >= N) {
        return 0;   // We don't look at the matrix[][]
    }
    return matrix[row][col] == '.';
}


