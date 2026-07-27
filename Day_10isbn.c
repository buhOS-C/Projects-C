/************************************************************************
* Name: isbn.c                                                          *
* Purpose: ISBN                                                         *
* Author: buhOS                                                         *
* Date: 26/07/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    int gs1, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &groupIdentifier, &publisherCode,
                            &itemNumber, &checkDigit);

    printf("\n--- ISBN📚 ---\n");
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);

    sayHelloBuhOS(10);
    return 0;               //or exit(0)
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}