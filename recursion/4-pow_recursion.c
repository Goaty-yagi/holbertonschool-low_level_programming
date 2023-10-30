#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _pow_recursion - calls _pow_recursion
 * @x: int
 * @y: int
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
