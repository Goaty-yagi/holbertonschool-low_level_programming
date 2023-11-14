#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - calls print_numbers
 * @separator: separator
 * @n: int
 * @...: rest
 *
 * Return: returns the sum of all its parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	i = 0;

	if (separator == NULL)
	{
		exit(-1);
	}
	va_start(ap, n);

	while (i < n)
	{
		printf("%d%s", va_arg(ap, int),separator);
		i = i + 1;
	}
	va_end(ap);
}
