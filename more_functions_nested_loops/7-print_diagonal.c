#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - calls print_diagonal
 * @n: int
 *
 * Return: void
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(92);
		_putchar('\n')
		n = n - 1;
	}
}
