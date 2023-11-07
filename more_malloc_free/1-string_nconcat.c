#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - calls string_nconcat
 * @s1:  char
 * @s2:  char
 * @n:  int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_char;

	int len_1, len_2, counter;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	counter = 0;

	len_1 = strlen(s1);

	if (strlen(s2) <= n)
	{
		len_2 = strlen(s2);
	}
	else
	{
		len_2 = n;
	}

	new_char = malloc(len_1 + len_2 * sizeof(char));
	new_char[len_1 + len_2] = '\0';
	if (new_char == NULL)
		return (NULL);

	while (counter < len_2 + len_1)
	{
		if (*s1)
		{
			new_char[counter] = *s1++;
		}
		else
		{
			new_char[counter] = *s2++;
		}
		counter = counter + 1;
	}
	return (new_char);
}
