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
	int init_y;

	init_y = y;

	y = y - 1;

	if (y == 0)
	{
		return (x);
	}
	if (y < 0)
	{
		if (init_y == 0)
		{
			return (1);
		}
		return (-1);
	}
	return (x * _pow_recursion(x, y));
}
