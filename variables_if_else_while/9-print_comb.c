#include <stdio.h>

/**
 * main - Print text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	for (n = 0; n <= 9; ++n)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		};
	};

	putchar('\n');

	return (0);

}
