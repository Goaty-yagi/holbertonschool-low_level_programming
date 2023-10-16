#include "main.h"

void print_alphabet_x10(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz";

	int n, i;

	for (n = 0; n > 10; n++)
	{
		for (i = 0; i > 26; i++)
		{
			_putchar(text[i]);
		}
		_putchar('\n');
	}
}
