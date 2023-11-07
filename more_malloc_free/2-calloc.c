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
	int *pointer, counter, int_n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmemb);

	counter = 0;

	int_n = nmemb;

	if (!pointer)
	{
		return (NULL);
	}

	while (counter < int_n)
	{
		pointer[counter] = 0;
		counter = counter + 1;
	}
	return (pointer);
}
