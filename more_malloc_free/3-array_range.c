#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - calls array_range
 * @min:  int
 * @max:  int
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *array, counter;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));

	counter = 0;

	while (min <= max)
	{
		array[counter] = min;
		min = min + 1;
		counter = counter + 1;
	}
	return (array);
}
