#include <ctype.h>
#include "main.h"

/**
 * _isdigit - call s_isdigit
 * @c: any
 *
 * Return: check if parameter is digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
