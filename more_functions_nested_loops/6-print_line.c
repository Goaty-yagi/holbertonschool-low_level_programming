#include <ctype.h>
#include "main.h"

/**
 * print_line - calls print_line
 * @n: charcter integer from ascii table
 *
 * Return: check if parameter is lower case
 */

void print_line(int n)
{

	while (n > 0)
	{
		_putchar(95);
		n = n - 1;
	}
	_putchar('\n');
}
