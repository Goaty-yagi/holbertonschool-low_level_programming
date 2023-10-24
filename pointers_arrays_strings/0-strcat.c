#include "main.h"
#include <stdio.h>
/**
 * _strcat - calls _strcat
 * @dest: destination char array
 * @src: src char array
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{

	char *saved;

	saved = dest; /* first pointer*/

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';

	return (saved);
}
