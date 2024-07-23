
// Reverse a string in place
void reverse(t) char t[];
{
    int i, number;
    number = 0;
    int len = 0;
    char temp;
    while (t[len] != '\0')
    {
        len++;
    }
    for (i = len; i > len / 2; i--)
    {
        if (i - 1 == number)
        {
            continue;
        }
        temp = t[i - 1];
        t[i - 1] = t[number];
        t[number] = temp;
        number++;
    }
    return;
}

/**
 * Main program to execute the code
#include <stdio.h>
#include <string.h>
int main() {
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}
 */