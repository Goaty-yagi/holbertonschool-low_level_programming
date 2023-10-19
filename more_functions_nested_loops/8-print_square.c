#include "main.h"

/**
 * print_square - calls print_square
 * @size: int
 *
 * Return: void
 */

void print_square(int size)
{
	int i, l, m;

	i = 0;

	l = 1;

	m = size * size;

	if (size > 0)
	{
		while (i < m)
		{
			_putchar(35);
			i = i + 1;
			if (i == size * l && i != m)
			{
				_putchar('\n');
				l = l + 1;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
