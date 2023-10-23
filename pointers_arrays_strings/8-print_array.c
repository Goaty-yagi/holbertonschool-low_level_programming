#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - calls print_array
 * @a: int array
 * @n: int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		{
			printf(", ");
		}
		i = i + 1;
	}
}
