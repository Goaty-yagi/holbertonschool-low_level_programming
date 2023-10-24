#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - calls _strncpy
 * @dest: destination char array
 * @src: src char array
 * @n: integer
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (n != 0) {

		char *d = dest;
		const char *s = src;
		while (--n != 0) /* --n n - 1 and assign like  n = n - 1 */
		{
			if ((*d++ = *s++) == 0) 
			{
				while (--n != 0)
				{
					*d++ = 0;
				}
				break;
			}
		}
	}
	return (dest);
	// char *saved;

	// int i, length;

	// i = 0;

	// length = strlen(src);

	// saved = dest;

	// while (i <= n)
	// {
	// 	*dest++ = *src++;
	// 	i = i + 1;
	// }
	// if (n > length)
	// {
	// 	*dest++ = '\0';
	// }
	// return (saved);
}
