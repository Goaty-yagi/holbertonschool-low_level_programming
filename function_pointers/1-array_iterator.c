#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - calls array_iterator
 * @array: int array
 * @size: array size
 * @action: function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array && action)
	{
		counter = 0;

		while (counter < size)
		{
			action(array[counter]);
			counter = counter + 1;
		}
	}
}
