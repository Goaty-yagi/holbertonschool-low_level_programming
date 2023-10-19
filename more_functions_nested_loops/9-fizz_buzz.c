#include <stdio.h>

/**
 * main - return Fizz, Buz or int
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char fizz[] = "Fizz";

	char buzz[] = "Buzz";

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
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i = i + 1;
	}
	printf("\n");

	return (0);
}
