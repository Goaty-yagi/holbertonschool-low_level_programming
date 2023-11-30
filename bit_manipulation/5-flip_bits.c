#include "main.h"
#include <limits.h>
/**
 * flip_bits - calls flip_bits
 * @n: int
 * @m: int
 *
 * Return: number of bits need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bitCount, i;
	unsigned long int mask, ui, sum;

	sum = 0;
	bitCount = sizeof(unsigned long int) * 8; /* max 64 bit*/
	i = bitCount - 1;
	ui = 1;

	while (i >= 0)
	{
		mask = ui << i;
		if ((n & mask) != (m & mask))
		{
			sum = sum + 1;
		}
		i = i - 1;
	}
	return (sum);
}
