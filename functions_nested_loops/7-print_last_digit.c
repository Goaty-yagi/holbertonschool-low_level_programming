#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - calls print_last_digit
 * @n: any int
 *
 * Return: last digit of param
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	int abNum = abs(lastDigit);

	char stNum;

	sprintf(stNum, "%d", abNum);

	return (stNum + stNum);

}
