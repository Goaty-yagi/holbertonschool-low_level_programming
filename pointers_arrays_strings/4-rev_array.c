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
	int i, len, keep_int;

	i = 0;

	keep_int = a[0];

	len = n - 1;

	while (i < n / 2)
	{
		a[i] = a[len];
		a[len] = keep_int;
		len = len - 1;
		i = i + 1;
		keep_int = a[i];
	}
}
