#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - calls reverse_array
 * @a: *int
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	while (0 < n)
	{
		printf("%d", a[n - 1]);
		n = n - 1;
		if (n != 0)
		{
			printf(", ");
		}
	}
}
