#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - calls print_rev
 * @s: char array
 *
 * Return: void
 */

void print_rev(char *s)
{
    int n;

    n = strlen(s);

    while(n >= 0)
    {
        _putchar(s[n]);
        n = n - 1;
    }
}