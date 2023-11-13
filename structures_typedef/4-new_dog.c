#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - calls new_dog
 * @name: char
 * @age: float num
 * @owner: owner name
 *
 * Return: structure pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	dog_t *new_d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_d = &d;
	new_d->name = strdup(name);
	new_d->owner = strdup(owner);
	if (new_d->name == NULL || new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	new_d->age = age;
	return (new_d);
}
