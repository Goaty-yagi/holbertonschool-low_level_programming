#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - calls print_strings
 * @separator: separator
 * @n: int
 * @...: rest
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	char *result;

	unsigned int i;

	i = 0;

	va_start(ap, n);

	while (i < n)
	{
		result = va_arg(ap, char *);
		if (result != NULL)
		{
			printf("%s",result);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}
