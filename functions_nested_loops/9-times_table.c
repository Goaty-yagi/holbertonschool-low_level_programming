#include "main.h"

/**
 * times_table - calls times_table
 *
 * Return: void
 */
int twoDigitNum(int n)
{
	_putchar(44);
	_putchar(32);
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

int oneDigitNum(int n)
{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	_putchar('0' + n);
}

void times_table(void)
{
	int i, n, a;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			a = n * i;
			if (i == 0)
			{
				if(n == 0)
				{
					_putchar('0', 0)
				}
				else
				{
					oneDigitNum(a);
				}

			}
			else
			{
				if (a <= 9)
				{
					oneDigitNum(a);
				}
				else
				{
					twoDigitNum(a);
				}
			}
		_putchar('\n');
	}
}
