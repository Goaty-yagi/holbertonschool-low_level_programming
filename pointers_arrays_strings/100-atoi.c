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
    int k,c;

    k = c = 0;

    while (*s) 
    {
        if(*s >= '0' && *s <= '9')
        {
            s--;
            if(*s == 45)
            {
                c = c + 1;
            }
            s++;
            k = k * 10 + *s - '0';
        }
        else if (k)
        {
            s = "\0";
        } 
        s++;
     }
     if(c)
     {
        k = k * -1;
     }
     return (k);
}
