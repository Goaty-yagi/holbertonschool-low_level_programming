#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - calls free_dog
 * @d: struct pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
