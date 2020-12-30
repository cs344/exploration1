#include <stdio.h>

/**
* Ask the user for two positive integers.
* Print all the multiples of the first integer between 1 and the second integer
*/
int main(void) {

  /* Declare variables and their types*/
  int denominator;
  int boundary;

  printf("Enter a positive integer whose multiples you want printed: ");
  scanf("%d", &denominator);
  printf("Enter another positive integer up to which you want to see multiples printed: ");
  scanf("%d", &boundary);
  printf("Here are all the multiples of %d between 1 & %d\n", denominator, boundary);
  for(int i = 1; i <= boundary; i++){
    if(i % denominator == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
