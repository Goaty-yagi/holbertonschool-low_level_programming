#include "main.h"
#include <stdio.h>
/**
 * _memset - calls _memset
 * @s:  char array
 * @b: char
 * @n: int
 *
 * Return: char arrayz
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c;

	int i, m;

	i = 0;

	m = n;

	c = s;

	while (i < m)
	{
		*s = b;
		s++;
		i = i + 1;
	}
	return (c);
}
