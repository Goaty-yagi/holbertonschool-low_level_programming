#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - calls puts_half
 * @s: char array
 *
 * Return: void
 */

void puts_half(char *str)
{
    int n, h;

    n = 0;

    h = strlen(str);

    while (n < h)
    {
        if (n >= h / 2)
        {
            _putchar(str[n]);
        }
        n = n + 1;
    }
}
