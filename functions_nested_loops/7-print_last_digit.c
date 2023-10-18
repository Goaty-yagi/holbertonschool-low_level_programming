#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - calls print_last_digit
 * @n: any int
 *
 * Return: last digit of param
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (abs(lastDigit));

}
