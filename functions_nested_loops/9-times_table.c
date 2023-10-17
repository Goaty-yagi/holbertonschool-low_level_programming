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
			a = i * n;
			if (n == 0)
			{
				_putchar('0' + 0);
			}
			else
			{
				_putcher(44);
				_putcher(32);
				if (a >= 9)
				{
					_putcher(32);
					_putcher('0' + a);
				}
				else
				{
					_putcher('0' + a / 10);
					_putcher('0' + a % 10);
				}
			}
		}
		_putcher('\n');
	}
}
