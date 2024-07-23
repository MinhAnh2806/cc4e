#include <stdio.h>

main() /* Celsius-Fahrenheit table */
{
    int cel;
    for (cel = 0; cel <= 100; cel = cel + 20)
        printf("%4d %6.1f\n", cel, (cel / (5.0 / 9.0) + 32.0));
}