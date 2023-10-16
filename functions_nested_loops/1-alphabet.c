#include "main.h"

/**
 * 
 * main - Print text
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	_putchar(97);
}

int main(void)
{

	print_alphabet();

	return (0);
}
