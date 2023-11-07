#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calls _calloc
 * @nmemb:  int
 * @size:  int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	int int_n;

	unsigned int counter;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	int_n = nmemb;

	pointer = malloc(size * int_n);

	counter = 0;

	if (!pointer)
	{
		return (NULL);
	}

	while (counter < nmemb)
	{
		pointer[counter] = '0' - 48;
		counter = counter + 1;
	}
	return (pointer);
}
