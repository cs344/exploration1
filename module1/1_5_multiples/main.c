#include <stdio.h>

/**
* Ask the user for two positive integers.
* Print all the multiples of the first integer between 1 and the second integer
*/

int main(void)
{
    int denominator;
    int boundary;

    printf("Enter a positive integer whose multiples you want printed: ");
    scanf("%d", &denominator);
    printf("Enter another positive integer up to which you want to see multiples printed: ");
    scanf("%d", &boundary);
    printf("You entered %d for denominator and %d for boundary\n", denominator, boundary);
    return 0;
}
