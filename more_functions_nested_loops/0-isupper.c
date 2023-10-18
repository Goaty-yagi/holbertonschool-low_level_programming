#include <ctype.h>
#include "main.h"

/**
 * _isupper - calls _isupper
 *
 * Return: check if parameter is lower case
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
