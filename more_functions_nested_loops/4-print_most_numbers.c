#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - calls print_most_numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
