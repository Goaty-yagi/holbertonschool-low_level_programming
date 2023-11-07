#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calls _calloc
 * @nmemb:  int
 * @size:  int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *pointer;

    if (nmemb == 0 || size ==0)
    {
        return (NULL);
    }

    pointer = malloc(size * nmemb);

    while (*pointer++)
    {
        pointer = 0;
    }
    return (pointer);
}
