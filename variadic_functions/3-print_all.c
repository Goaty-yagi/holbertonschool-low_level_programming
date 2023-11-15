#include "variadic_functions.h"
/**
 * print_all - calls print_all
 * @format: char
 * @...: rest
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list ap; char *result, null[6] = "(nil)"; unsigned int i, c; va_start(ap, format);
	if (format == NULL)
		return;
	i = c = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			result = va_arg(ap, char *);
			printf("%s", result != NULL ? result : null);
			break;
		default:
			c = 1;
		}
		if (format[i] && !c)
			printf(", ");
		c = 0; i = i + 1;
	}
	printf("\n");va_end(ap);
}
