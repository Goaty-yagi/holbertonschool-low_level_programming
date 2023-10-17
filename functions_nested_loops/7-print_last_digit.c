#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - calls print_last_digit
 * @c: any int
 *
 * Return: last digit of param
 */

int print_last_digit(int n)
{
	int lastDigit = abs(n) % 10;

	return (lastDigit);

}
