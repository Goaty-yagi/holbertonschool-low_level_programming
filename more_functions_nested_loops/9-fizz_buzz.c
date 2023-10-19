#include "main.h"

/**
 * main - return Fizz, Buz or int
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int i;

	char fizz[];

	char buzz[];

	fizz = "Fizz";

	buzz = "Buzz";

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s%s", fizz, buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s", buzz);
		}
		else
		{
			printf("%d", i)
		}
		putchar(32);
	}

	return (0);
}
