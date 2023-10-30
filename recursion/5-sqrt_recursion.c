#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * check - calls check
 * @base: int
 * @root: int
 *
 * Return: int
 */

int check(int base, int root)
{
	if (root * root == base)
	{
		return (root);
	}
	else if (root * root > base)
	{
		return (-1);
	}
	root = root + 1;
	return (check(base, root));
}

/**
 * _sqrt_recursion - calls _sqrt_recursion
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int root;

	root = check(n, 1);

	return (root);
}
