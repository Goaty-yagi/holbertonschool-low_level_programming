#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - calls print_diagonal
 * @n: int
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	i = 1;

	while (n > 0)
	{
		while (i <= n)
		{
			_putchar(32);
			i = i + 1;
			if (i == n)
			{
				_putchar(92);
				_putchar('\n');
				n = n - 1;
				i = 1;
			}
		}
	}
	_putchar('\n');
}
