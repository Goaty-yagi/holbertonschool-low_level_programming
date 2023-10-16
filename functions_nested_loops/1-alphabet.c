#include <stdio.h>
void print_alphabet();

/**
 * 
 * main - Print text
 *
 * Return: Always 0 (Success)
 */

void print_alphabet()
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
	print_alphabet();

	return (0);
}
