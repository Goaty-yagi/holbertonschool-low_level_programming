#include <ctype.h>
#include "main.h"

/**
 *  _isalpha - calls _isalpha
 *  @c: any int
 *
 * Return: check if parameter is alphabet
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
								}
	else
	{
		return (0);
	}

}
