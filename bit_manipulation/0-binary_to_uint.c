#include "main.h"
#include <math.h>
/**
 * binary_to_uint - calls binary_to_uint
 * @b: char as num
 *
 * Return: decimal num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d, len, base;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	d = 0;
	base = 1;

	while (len)
	{
		if (b[len - 1] == '0' || b[len - 1] == '1')
		{
			if (b[len - 1] == '1')
			{
				d = d + base;
			}
			base = base * 2;
			len = len - 1;
		}
		else
		{
			return (0);
		}
	}
	return (d);
}
