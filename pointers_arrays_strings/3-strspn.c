#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * _strspn - calls _strspn
 * @s: char array
 * @accept: char array
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	const char *p = s, *spanp;
	char c, sc;
	/*
	 * Skip any characters in s, excluding the terminating \0.
	 */
cont:
	c = *p++;
	for (spanp = accept; (sc = *spanp++) != 0;)
		if (sc == c)
			goto cont;
	return (p - 1 - s);
}
