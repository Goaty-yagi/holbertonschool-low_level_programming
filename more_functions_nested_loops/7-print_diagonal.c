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
	int i, k;

	i = 1;

	k = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(32);
			if (k == i)
			{
				_putchar(92);
				_putchar('\n');
				k = 0;
				i = i + 1;
			}
			k = k + 1;
		}
	}
	_putchar('\n');
}
