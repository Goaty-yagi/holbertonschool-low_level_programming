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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
