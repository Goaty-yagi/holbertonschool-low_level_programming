#include <ctype.h>
#include "main.h"

/**
 * _islower - calls _islower
 *
 * Return: check lower case
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
