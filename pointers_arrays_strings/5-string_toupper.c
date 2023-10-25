#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - calls string_toupper
 * @c: *char
 *
 * Return: * char
 */

char *string_toupper(char *c)
{
    char *ch;

    ch = c;

    while (*c)
    {
        if(*c >= 97&& *c <= 122)
        {
            *c = *c - 32;
        }
        c++;
    }

    return (ch);
}
