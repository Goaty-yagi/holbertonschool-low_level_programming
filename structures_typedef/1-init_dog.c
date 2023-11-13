#include "dog.h"

/**
 * init_dog - calls init_dog
 * @d: pointer
 * @name: char
 * @age: float num
 * @owner: owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;

		d->age = age;

		d->owner = owner;
	}
}
