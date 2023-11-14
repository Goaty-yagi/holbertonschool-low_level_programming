#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - calls print_all
 * @*: string
 * @format: int
 * @...: rest
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list ap;

	char *result;

	unsigned int i, c;

	va_start(ap, format);
	
	if (format != NULL)
	{
		i = c = 0;
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				c++;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				c++;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				c++;
				break;
			case 's':
				result = va_arg(ap, char *);
				if (result != NULL)
				{
					printf("%s", result);
					c++;
					break;
				}
				printf("(nil)");
				c++;
				break;
			}
			i = i + 1;
			if (format[i] && c)
			{
				printf(", ");
			}
			c = 0;
		}
	}

	printf("\n");
	va_end(ap);
}
