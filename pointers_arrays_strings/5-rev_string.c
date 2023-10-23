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
    int n, i;

	n = strlen(s);

    char r_s[n];

    i = 0;

	while (n >= 0)
	{
        r_s[i] = s[n - 1];
 		n = n - 1;
        i = i + 1;
	}
    n = strlen(s);
    i = 0;

    while (i < n)
    {
        s[i] = r_s[i];
        i = i + 1;
    }
}