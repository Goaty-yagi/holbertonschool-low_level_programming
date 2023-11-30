#include "main.h"
#include <limits.h>
/**
 * get_bit - calls get_bit
 * @n: int
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitCount, i, started, cp_n;
	unsigned long int mask, ui, len_b;

	started = 0;
	bitCount = sizeof(unsigned long int) * 8; /* max 64 bit*/
	i = bitCount - 1;
	ui = 1;
	len_b = 0;
	cp_n = n;
	while (cp_n > 0)
	{
		cp_n = cp_n / 2;
		len_b = len_b + 1;
	}
	if (len_b < index && ULONG_MAX <= n)
	{
		return (-1);
	}
	while (i >= 0)
	{
		mask = ui << index;
		if (n & mask)
		{
			return (1);
		}
		else if (started)
		{
			return (0);
		}
		i = i - 1;
	}
	if (!started)
	{
		return (0);
	}
	return (-1);
}
