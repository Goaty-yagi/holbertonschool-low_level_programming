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

	int characters[10][2] = {
		{65, '4'},
		{69, '3'},
		{76, '1'},
		{79, '0'},
		{84, '7'},
		{97, '4'},
		{101, '3'},
		{108, '1'},
		{111, '0'},
		{116, '7'}
	};

	ch = c;

	i = 0;

	while (*c)
	{
		while (i < 10)
		{
			if (*c == characters[i][0])
			{
				*c = characters[i][1];
			}
			i = i + 1;
		}
		c++;
		i = 0;
	}
	return (ch);
}
