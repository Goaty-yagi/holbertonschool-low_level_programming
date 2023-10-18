#include <ctype.h>
#include "main.h"

/**
 * _isupper - calls _isupper
 * @c: int
 *
 * Return: check if parameter is upper case
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
