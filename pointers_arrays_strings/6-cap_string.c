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
	int n;

	n = 1;
	ch = c;

	while (*c)
	{
		if ((*c >= 65 && *c <= 91) || (*c >= 48 && *c <= 57) || *c == 45)
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
		else
		{
			n = n + 1;
		}
		c++;
	}
	return (ch);
}