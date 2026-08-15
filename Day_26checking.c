/************************************************************************
* Name: checking.c                                                      *
* Purpose: ACME checkbook-balancing program                             *
* Author: buhOS                                                         *
* Date: 15/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    unsigned short option;
    float balance = 0.0f, amount = 0.0f;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    while (1) {
        printf("Enter command: ");
        scanf("%hu", &option);

        switch (option) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &amount);
                balance += amount;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &amount);
                balance -= amount;
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                sayHelloBuhOS(26);
                return 0;
            default:
                printf("WRONG OPTION NUMBER!!!\n");
        }
    }
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}
