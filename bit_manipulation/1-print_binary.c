#include "main.h"
/**
 * print_binary - calls print_binary
 * @n: int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int binary_num[32], i;

	i = 0;

	while (n > 0)
	{
		/* storing remainder in binary array */
		binary_num[i] = n % 2;
		n = n / 2;
		i = i + 1;
	}

	/* printing binary array in reverse order */
	while (i - 1 >= 0)
	{
		printf("%d",binary_num[i - 1]);
		i = i - 1;
	}
}
