#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - calls malloc_checked
 * @b:  int
 *
 * Return: pointer of d
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(sizeof(b));

	if (!pointer)
	{
		exit(98);
	}
	return (pointer);
}
