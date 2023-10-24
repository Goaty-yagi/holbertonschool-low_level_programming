#include "main.h"
#include <stdio.h>

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

	int i;

	saved = dest;

	while (*src&&i < n)
	{
		*dest++ = *src++;
		i = i + 1;
	}
	*dest++ = '\0';

	return (saved);
}
