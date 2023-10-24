#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - calls *_strcpy
 * @dest: char array
 * @src: char array
 *
 * Return: copy src to dest and return original src
 */

char *_strcpy(char *dest, char *src)
{
	char *saved;

	saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	return saved;
}
