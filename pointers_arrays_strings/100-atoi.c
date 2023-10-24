#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi - calls _atoi
 * @s: char array
 *
 * Return: length of string
 */

int _atoi(char *s)
{

	unsigned int k, c;

	k = c = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			k = k * 10 + *s - '0';
		}
		else if (*s == 45)
		{
			c = c + 1;
		}
		else if (k)
		{
			s = "\0";
		}
		s++;
	}
	if (c % 2 != 0)
	{
		k = k * -1;
	}
	return (k);
}
