#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - calls _strncpy
 * @dest: destination char array
 * @src: src char array
 * @n: integer
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (n != 0)
	{

		char *d;

		const char *s;

		d = dest;

		s = src;

		*d = *s;
		while (n != 0)
		{
			*d++ = *s++;
			if (*dest == 0)
			{
				while (--n != 0)
				{
					*d++ = 0;
				}
				break;
			}
			n = n - 1;
		}
	}
	return (dest);
}
