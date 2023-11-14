#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calls sum_them_all
 * @n: int
 * @...: rest
 *
 * Return: returns the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	sum = i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	return (sum);
}
