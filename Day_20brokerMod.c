/************************************************************************
* Name: brokerMod.c                                                     *
* Purpose: Broker Modify                                                *
* Author: buhOS                                                         *
* Date: 07/08/2026                                                      *
*************************************************************************/

#include <stdio.h>

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void)
{
    float numShares = 0.0f, priceShare = 0.0f, rivalAmount = 0.0f,
          userAmount = 0.0f, commRate = 0.0f;

    printf("--- BROKER'S COMMISSION 🧮🦉 ---\n");
    printf("Enter the number of shares: ");
    scanf("%f", &numShares);
    printf("Enter the price per share: ");
    scanf("%f", &priceShare);

    // Rival broker
    if (numShares < 2000) {
        rivalAmount = 33.0f + (0.03f * numShares);
    } else {
        rivalAmount = 33.0f + (0.02f * numShares);
    }

    // Original broker
    userAmount = numShares * priceShare;

    if (userAmount < 2500.0f) {
        commRate = 30.0f + (1.7f / 100.0f) * userAmount;
        if (commRate < 39.0f) {
            commRate = 39.0f;
        }
    }

    else if (userAmount < 6250.0f) {
        commRate = 56.0f + (0.66f / 100.0f) * userAmount;
    }
    else if (userAmount < 20000.0f ) {
        commRate = 76.0f + (0.34f / 100.0f) * userAmount;
    }
    else if (userAmount < 50000.0f) {
        commRate = 100.0f + (0.22f / 100.0f) * userAmount;
    }
    else if (userAmount < 500000.0f) {
        commRate = 155.0f + (0.11f / 100.0f) * userAmount;
    }
    else {
        commRate = 255.0f + (0.09f / 100.0f) * userAmount;
    }

    // Show
    printf("\nRival broker commission: %.2f\n", rivalAmount);
    printf("Original broker commission: $%.2f\n", commRate);

    sayHelloBuhOS(20);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day)
{
    printf("\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %i\n", day);
    printf("\a");       // Alert (bell)
}