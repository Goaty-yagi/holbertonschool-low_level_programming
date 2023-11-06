#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - calls str_concat
 * @s1:  str pointer
 * @s2:  str pointer
 *
 * Return: concatenates s1 and s2 then retuen it as a new pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *new_char;

	int len, counter;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1) + strlen(s2);

	counter = 0;

	new_char = malloc(len * sizeof(char) + 1);

	if (new_char == NULL)
	{
		return (NULL);
	}

	new_char[len] = '\0';

	while (counter < len)
	{
		if (*s1)
		{
			new_char[counter] = *s1;
			s1++;
		}
		else
		{
			new_char[counter] = *s2;
			s2++;
		}
		counter = counter + 1;
	}
	return (new_char);
}
