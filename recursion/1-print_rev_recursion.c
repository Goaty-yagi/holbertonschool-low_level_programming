#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - calls _print_rev_recursion
 * @s: char array
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
    int n;

	n = strlen(s) - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n = n - 1;
	}
}
