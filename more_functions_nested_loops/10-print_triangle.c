#include "main.h"

/**
 * print_triangle - calls print_triangle
 * @size: int
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, l, w, m;

	i = w = 0;

	l = 1;

	m = size * size;

	if (size > 0)
	{
		while (i <= m)
		{
			if (size - w > l)
			{
				_putchar(32);
				w = w + 1;
			}
			else
			{
				_putchar(35);
			}
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
