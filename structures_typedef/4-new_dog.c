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
	struct dog *my_dog;

	struct dog d;

	char *copy_name, *copy_owner;

	int len_name, len_owner, counter;

	counter = 0;

	len_name = strlen(name);
	len_owner = strlen(owner);
	copy_name = calloc(sizeof(name)+ 1, 1);
	copy_owner = calloc(sizeof(owner)+ 1, 1);
	copy_name[len_name] = copy_owner[len_owner] = '\0';

	while (counter < len_name)
	{
		copy_name[counter] = name[counter];
		counter = counter + 1;
	}
	counter = 0;
	while (counter < len_owner)
	{
		copy_owner[counter] = owner[counter];
		counter = counter + 1;
	}
	my_dog = &d;
	my_dog->name = copy_name;
	my_dog->age = age;
	my_dog->owner = copy_owner;
	return (my_dog?my_dog:NULL);
}
