#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - calls init_dog
 * @dog: dog struct
 * @d: pointer
 * @name: char
 * @age: float num
 * @owner: owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *pointer;

	pointer = d;

	pointer->name = name;

	pointer->age = age;

	pointer->owner = owner;
}
