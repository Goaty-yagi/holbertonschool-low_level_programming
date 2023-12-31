#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - calls new_dog
 * @name: char
 * @age: float num
 * @owner: owner name
 * Return: structure pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		return (NULL);
	}
	new_d->name = malloc(strlen(name) + 1);
	new_d->owner = malloc(strlen(owner) + 1);
	if (new_d->name == NULL || new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	strcpy(new_d->name, name);
	strcpy(new_d->owner, owner);
	new_d->age = age;
	return (new_d);
}
