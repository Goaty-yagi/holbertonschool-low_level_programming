#include "main.h"
#include <stdio.h>

/**
 * _strchr - calls _strchr
 * @s: char array
 * @c: char
 *
 * Return: char array
 */

char *_strchr(char *s, char c)
{
    int i;

    i = 0;

    while (*s)
    {
        if (*s == c)
        {
            i = 1;
            break;
        }
        s++;
    }
    if (i)
    {
        return (s); 
    }
    else
    {
        return (NULL);
    }
}
