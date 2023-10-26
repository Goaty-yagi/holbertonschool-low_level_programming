#include "main.h"
#include <stdio.h>

/**
 * _strchr - calls _strchr
 * @s: char array
 * @c: char
 *
 * Return: char array
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}

	return (NULL);
}
