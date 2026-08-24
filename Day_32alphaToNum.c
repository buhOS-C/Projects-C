/************************************************************************
* Name: alphaToNum.c                                                    *
* Purpose: Translates an alphabetic phone number into numeric form      *
* Author: buhOS                                                         *
* Date: 23/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    // 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY

    char ch;

    printf("--- ALPHABETIC PHONE NUMBER INTO NUMERIC FORM ---\n");
    printf("Enter phone number: ");

    ch = getchar();

    while (ch != '\n') {
        if (ch == 'A' || ch == 'B' || ch == 'C') printf("2");
        else if (ch == 'D' || ch == 'E' || ch == 'F') printf("3");
        else if (ch == 'G' || ch == 'H' || ch == 'I') printf("4");
        else if (ch == 'J' || ch == 'K' || ch == 'L') printf("5");
        else if (ch == 'M' || ch == 'N' || ch == 'O') printf("6");
        else if (ch == 'P' || ch == 'R' || ch == 'S') printf("7");
        else if (ch == 'T' || ch == 'U' || ch == 'V') printf("8");
        else if (ch == 'W' || ch == 'X' || ch == 'Y') printf("9");
        else printf("%c", ch);

        ch = getchar();
    }

    sayHelloBuhOS(32);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
