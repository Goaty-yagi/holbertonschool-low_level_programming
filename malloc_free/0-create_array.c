#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - calls create_array
 * @size:  int
 * @c: char
 *
 * Return: char array
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size);

	if (0 >= size)
	{
		return (NULL);
	}

	while (size)
	{
		array[size - 1] = c;
		size = size - 1;
	}
	if (*array)
	{
		return (array);
	}
	else
	{
		return (NULL);
	}
}
