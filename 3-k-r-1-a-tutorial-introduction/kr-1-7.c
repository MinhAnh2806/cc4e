#include <stdio.h>
#include <stdbool.h>
main()
{
    int c;
    bool space;
    space = false;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (space == false)
            {
                space = true;
                putchar(c);
                continue;
            }
            else
            {
                continue;
            }
        }
        space = false;
        putchar(c);
    }
}

/**
 * Expected input:
But soft  what light     through yonder window breaks
It is    the east and  Juliet is the sun
Arise fair sun   and kill the envious moon
Who  is  already  sick  and  pale  with  grief
 * Expected output:
But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief
 */