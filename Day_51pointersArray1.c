/************************************************************************
* Name: pointersArray1.c                                                *
* Purpose: Learn how to add, subtracting pointers (Section 12.1         *
* Author: buhOS                                                         *
* Date: 06/10/2026                                                      *
*************************************************************************/

#include <stdio.h>

#define DAY 51      // Study days

// Function prototypes
void sayHelloBuhOS(const int day);

// Main function
int main(void) {
    /*
        1) To which element of the array (a[...]) does p point after the
           instruction p += 2;, and what is the value of *p?

        2) What is the value stored in the integer variable d (q - p)?

        3) What is the value (0 or 1) of the variable res resulting from 
           the comparison p < q?
    */

    //          #0  #1  #2  #3  #4  #5
    int a[6] = {10, 20, 30, 40, 50, 60}; // a is an array of 6 elements
    int *p = &a[1]; // p points to the element in position 1 of a. Value 20
    int *q = &a[4]; // q points to the element in position 4 of a. Value 50

    // p = 1, q = 4
    p += 2;
    // p = p + 2
    // p = 1 + 2
    // p = 3   *p = 40      1) First question

    int d = q - p;
    // d = 4 - 3
    // d = 1                2) Second question

    int res = (p < q);
    // res = (3 < 4)
    // res = 1              3) Third question

    sayHelloBuhOS(DAY);
    return 0;
}

// Functions
void sayHelloBuhOS(const int day) {
    printf("\n\nHello, I'm buhOS🦉\n---Just keep going\n");
    printf("---Day %d\n", day);
    printf("\a");       // Alert (bell)
}
