#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - calls _puts
 * @str: string array
 *
 * Return: void
 */

void _puts(char *str)
{
	int length, n;

	length = strlen(str);

	n = 0;
	while (n < length)
	{
		_putchar(str[n]);
		n = n + 1;
	}
	putchar('\n');
}
