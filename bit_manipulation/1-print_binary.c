#include "main.h"
/**
 * print_binary - calls print_binary
 * @n: int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bitCount, i, started;
	unsigned long int mask;

	started = 0;
	bitCount = sizeof(unsigned long int) * 8; /* max 64 bit*/
	i = bitCount - 1;

	while (i >= 32)
	{/* Set a mask for each bit position. assume mask is 1 concat 0 * n*/
		mask = 1 << i;
		if (n & mask)
		{				 /* ex) 1100010 & 1000000 will be 1000000 so true */
			started = 1; /* Turn on the flag once non-zero bit is found */
			printf("1");
		}
		else if (started)
		{
			printf("0");
		}
		i = i - 1;
	}

	if (!started)
	{
		printf("0"); /* If the number is zero, print a single 0 */
	}
}
