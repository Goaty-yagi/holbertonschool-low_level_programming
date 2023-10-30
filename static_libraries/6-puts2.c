#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - calls puts2
 * @str: char array
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
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
