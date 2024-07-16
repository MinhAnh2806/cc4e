#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Program to determine min/ max of sequence of input
Input:
5
2
9
done
Requirements: use gets, middle-tested while loop, atoi()

*/ 
int main() {
  int first = 1;
  int val, maxval, minval;
  char input[100];
  
  // get input as string instead of integer
  while (gets(input) != NULL) {
    // middle tested loop to compare string
	if (strcmp(input, "done") == 0) {
      break;
    }
    // atoi: converts string to integer
    val = atoi(input);
    if (first || val > maxval) {
      maxval = val;
    }
    if (first || val < minval) {
      minval = val;
    }
    first = 0;
  }
  /**
   * Alternative while loop
   * while (scanf("%d", &val) != EOF){
   *    if (first || val > maxval) maxval = val;
   *    if (first || val < minval) minval = val;
   *    first = 0;
   * }
   */
  printf("Maximum %d\n", maxval);
  printf("Minimum %d\n", minval);
}