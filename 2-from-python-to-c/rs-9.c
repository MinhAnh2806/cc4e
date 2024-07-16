#include <stdio.h>

// Define a new function: mymult
int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);
}

// Define function input type before the curly braces
int mymult(a, b)
	int a, b;
{
  	int c = a*b;
    return c;
}