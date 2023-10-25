#include "main.h"
#include <stdio.h>

/**
 * _memcpy - calls _memcpy
 * @dest: destination char array
 * @src: src char array
 * @n: integer
 *
 * Return: char array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d, *s;

	int i, o;

	d = dest;

	s = src;

	i = n;

	o = 0;

	while (o < i)
	{
		*dest = *src;
		dest++;
		src++;
		o = o + 1;
	}
	return (d);
}
