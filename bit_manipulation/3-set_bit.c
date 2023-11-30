#include "main.h"
#include <limits.h>
/**
 * set_bit - calls set_bit
 * @n: int
 * @index: index
 *
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, i;

	i = 1;
	mask = i << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | mask;
	return (1);
}
