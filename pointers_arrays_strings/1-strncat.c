#include "main.h"
#include <stdio.h>

/**
 * _strncat - calls _strncat
 * @dest: destination char array
 * @src: src char array
 * @n: integer
 *
 * Return: append n char from srr to dest and return
 */

char *_strncat(char *dest, char *src, int n)
{
	char *saved;

	int i;

	saved = dest;

	i = 0;

	while (*dest)
	{
		dest++;
	}
	while (*src && i < n)
	{
		*dest++ = *src++;
		i = i + 1;
	}
	*dest++ = '\0';

	return (saved);

}
