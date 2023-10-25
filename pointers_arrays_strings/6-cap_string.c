#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - calls cap_string
 * @c: *char
 *
 * Return: capitalizes all words of a string.
 */

char *cap_string(char *c)
{
	char *ch;

	int *sep;

	int i, n;

	i = n = 0;

	ch = c;

	// sep = {10, 32, 9, 11};

	while (*c)
	{
		if (*c >= 65 && *c <= 91)
		{
			n = 0;
		}
		else if (*c >= 97 && *c <= 122)
		{
			if (n)
			{
				*c = *c - 32;
				n = 0;
			}
		}
		else if (*c >= 48 && *c <= 57)
		{

		}
		else
		{
			n = n + 1;
		}
		c++;
	}
	return (ch);
}
