#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - calls _strncpy
 * @dest: destination char array
 * @src: src char array
 * @n: integer
 *
 * Return: 
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *saved;

	int i, length;

	i = 0;

	length = strlen(src);

	saved = dest;

	while (*src && i < n)
	{
		*dest++ = *src++;
		i = i + 1;
	}
	if (n > length)
	{
		*dest++ = '\0';
	}
	return (saved);
}
