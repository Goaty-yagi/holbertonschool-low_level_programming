#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - calls print_name
 * @name: char array
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
