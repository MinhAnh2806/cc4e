#include <stdio.h>

// print word in new line, ignore space
/*
Input: 
But soft what light
through yonder window
breaks
Output:
But
soft
what
light
through
yonder
window
breaks
*/
main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            printf("\n");
            continue;
        }
        putchar(c);
    }
}