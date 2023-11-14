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

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}
