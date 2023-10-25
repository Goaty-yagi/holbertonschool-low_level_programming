#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - calls leet
 * @c: *char
 *
 * Return: *char
 */

char *leet(char *c)
{
	char *ch;

	int i;

	int characters[] = {65, 69, 76, 79, 84, 97, 101, 108, 111, 116};

	ch = c;

	i = 0;

	while (*c)
	{
		while (i < 10)
		{
			if (*c == characters[i])
			{
				if (*c == 65 || *c == 97)
				{
					*c = '4';
				}
				else if (*c == 69 || *c == 101)
				{
					*c = '3';
				}
				else if (*c == 76 || *c == 108)
				{
					*c = '1';
				}
				else if (*c == 79 || *c == 111)
				{
					*c = '0';
				}
				else
				{
					*c = '7';
				}
			}
			i = i + 1;
		}
		c++;
		i = 0;
	}
	return (ch);
}
