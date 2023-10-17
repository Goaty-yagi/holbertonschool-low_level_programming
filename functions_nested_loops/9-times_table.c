#include "main.h"

/**
 * times_table - calls times_table
 *
 * Return: void
 */

void times_table(void)
{
	int i, n, a;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			a = n * i;
			if (a <= 9)
			{
				_putchar('0' + a);
			}
			else
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}

			_putchar(44);

			if (a <= 9)
			{
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
