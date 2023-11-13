#include "dog.h"
#include <stdio.h>

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
	struct dog *my_dog;
	struct dog d;

	my_dog = &d;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	
	return (my_dog);
}
