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
	unsigned long int mask, i;

	i = 1;
	mask = i << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}

	if (n & mask)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
