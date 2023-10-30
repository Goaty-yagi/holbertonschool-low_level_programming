#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - calls puts_half
 * @str: char array
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, s, h;

	n = 0;

	s = strlen(str);
	if (s % 2 != 0)
	{
		h = s / 2 + 1;
	}
	else
	{
		h = s / 2;
	}

	while (n < s)
	{
		if (n >= h)
		{
			_putchar(str[n]);
		}
		n = n + 1;
	}
	_putchar('\n');
}
