
#include "main.h"

/**
 * print_sign - calls print_sign
 * @n: charcter integer from ascii table
 *
 * Return: int depending on the param
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
