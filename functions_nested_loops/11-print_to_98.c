#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - calls print_to_98
 * @n: int
 *
 * Return: void
 */

void print_to_98(int n)
{
	int stop = 0;
	while (stop != 1)
	{
		printf("Test %d", n);
		if (n == 98)
		{
			stop = 1;
		}
		else if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}

		if (stop == 0)
		{
			printf("%s", ", ");
		}
	}
}
