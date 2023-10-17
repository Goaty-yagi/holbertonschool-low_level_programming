#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - calls print_last_digit
 * @c: any int
 *
 * Return: last digit of param
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (isalpha(n))
	{
		lastDigit = _purchar(n);
	}
	else
	{
	}
	int lastDigit = n % 10;

	return (lastDigit);

}
