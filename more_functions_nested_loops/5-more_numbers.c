#include "main.h"

/**
 * more_numbers - calls more_numbers
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, i, f;

	n = 0;

	for (i = 0; i < 10; i++)
	{
		while (n <= 14)
		{
			if (n >=10)
			{
				f = n / 10;
			}
			else
			{
				f =  n;
			}
			_putchar('0' + f);

			if(n >= 10)
			{
				_putchar('0' + n % 10);
			}

		}
	_putchar('\n');	
	}
}
