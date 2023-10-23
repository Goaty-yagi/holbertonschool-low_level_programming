#include "main.h"
#include <stdio.h>
/**
 * swap_int - calls swap_int
 * @a: pointer1
 * @b: pointer2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
    int aa;

    aa = *a;

    *a = *b;

    *b = aa;
}