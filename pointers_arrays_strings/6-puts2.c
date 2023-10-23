#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - calls puts2
 * @s: char array
 *
 * Return: void
 */

void puts2(char *str)
{
    int length, i;

    length = strlen(str);

    i = 0;
    while (i < length)
    {
        if(i % 2 == 0)
        _putchar('0' + i);
        i = i + 1;
    }
}
