#include <stdio.h>

// String input
int main() {
  char name[100];
  printf("Enter name\n");
  scanf("%100s", name);
  printf("Hello %s\n", name);
}