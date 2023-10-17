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
				putchar('0' + 0);
			}
			else
			{
				putcher(44);
				putcher(32);
				if (a >= 9)
				{
					putcher(32);
					putcher('0' + a);
				}
				else
				{
					putcher('0' + a / 10);
					putcher('0' + a % 10);
				}
			}
		}
		putcher('\n');
	}
}
