#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * _strpbrk - calls _strpbrk
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a_counter, s_len;

	a_counter = 0;

	s_len = strlen(accept);

	while (*s)
	{
		while (a_counter < s_len)
		{
			if (*s == accept[a_counter])
			{
				return (s);
			}
			a_counter++;
		}
		s++;
		a_counter = 0;
	}
	return (NULL);
}
