/************************************************************************
* Name: numToLetter.c                                                   *
* Purpose: Numerical grade to letter grade                              *
* Author: buhOS                                                         *
* Date: 11/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    // Numerical grade to letter grade
        short userNumber;

        printf("--- NUMERICAL TO LETTER ---\n");
        printf("Enter numerical grade: ");
        scanf("%hd", &userNumber);

        switch (userNumber) {
                case 0 ... 59:
                        printf("F");
                        break;
                case 60 ... 69:
                        printf("D");
                        break;
                case 70 ... 79:
                        printf("C");
                        break;
                case 80 ... 89:
                        printf("B");
                        break;
                case 90 ... 100:
                        printf("A");
                        break;
                default:
                        printf("The number %hd is %s", userNumber, (userNumber > 100) ? "larger than 100." : "less than 0.");
                }

    sayHelloBuhOS(23);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}