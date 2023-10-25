#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - calls _strcmp
 * @s1: char array
 * @s2: char array
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
    const char *s_s1, *s_s2;

    if (s1 == s2)
    {
        return (0);
    }

    s_s1 = s1;
    
    s_s2 = s2;

    while (*s_s2)
    {
        if (*s_s1 != *s_s2)
        {
            return (*s_s1 - *s_s2);
        }
        s_s2++;
        s_s1++;
    }

    return (0);
}
