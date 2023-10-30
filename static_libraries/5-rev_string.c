#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - calls rev_string
 * @s: char array
 *
 * Return: void
 */

void rev_string(char *s)
{
	int n, i;

	char r[1000];

	n = strlen(s);

	i = 0;

	while (n >= 0)
	{
	r[i] = s[n - 1];
	n = n - 1;
	i = i + 1;
	}
	n = strlen(s);
	i = 0;

	while (i < n)
	{
		s[i] = r[i];
		i = i + 1;
	}
}
