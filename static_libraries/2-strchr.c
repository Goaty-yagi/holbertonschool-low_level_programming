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

	char ch;

	ch = c;
	for (;; ++s)
	{
		if (*s == ch)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
	}
}
