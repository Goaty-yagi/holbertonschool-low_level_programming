#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * is_prime_number - calls is_prime_number
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 4 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
