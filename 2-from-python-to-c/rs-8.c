#include <stdio.h>

/**
 * Guessing game with end number = 42
 * Input:
 * 5
 * 50
 * 42
 * Requirement: Use a while loop & else if block
 */
int main() {
  int val;
  int correct_guest = 42;
  
  while (scanf("%d", &val) != EOF){
    if (val == correct_guest) {
   	  printf("Nice work!\n");
      break;
    } else if (val < correct_guest) {
  	  printf("Too low - guess again\n");
    } else {
      printf("Too high - guess again\n");
    }
  }
}