#include "function_pointers.h"

/**
 * int_index - calls int_index
 * @array: int array
 * @size: array size
 * @cmp: function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int result, counter;

	if (!size || !array || !cmp)
	{
		return (-1);
	}
	counter = 0;

	while (counter < size)
	{
		result = cmp(array[counter]);
		if (result)
		{
			return (counter);
		}
		counter = counter + 1;
	}
	return (-1);
}
