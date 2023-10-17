#include "main.h"

/**
 * jack_bauer - calls jack_bauer
 *
 * Return: void
 */


void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			if (hour <= 9)
			{
				_putchar('0' + 0);
				_putchar('0' + hour);
			}
			else
			{
				_putchar('0' + hour / 10);
				_putchar('0' + hour % 10);
			}
			_putchar(58);
			if (min <= 9)
			{
				_putchar('0' + 0);
				_putchar('0' + min);
			}
			else
			{
				_putchar('0' + min / 10);
				_putchar('0' + min % 10);
			}
			_putchar('\n');
		}
	}
}
