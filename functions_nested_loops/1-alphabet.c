#include <stdio.h>

/**
 * main - Print text
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	};

	putchar('\n');
}

int main(void)
{
	print_alphabet()
	return (0);
}
