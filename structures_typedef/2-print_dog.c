#include "dog.h"
#include <stdio.h>

/**
 * print_dog - calls print_dog
 * @d: pointer
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *nil;

	nil = "(nil)";

	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : nil);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : nil);
	}
}
