#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - calls rev_string
 * @n: char array
 *
 * Return: void
 */

void rev_string(char *s)
{
	int n,i;

    char * copy_s;

	n = strlen(s) - 1;

    i = 0;

	while (n >= 0)
	{
        copy_s[i] = s[n];

		n = n - 1;

        i = i + 1;
	}

    char * p;
    p = copy_s;
    n = 0;
    while (n < strlen(s))
    {
        s[n] = *(p + n);
        n = n + 1;
    }
}