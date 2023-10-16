#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - print a text based on n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i %s\n", n, "is positive");
	} else if (n == 0)
	{
		printf("%i %s\n", n, "is zero");
	} else
	{
		printf("%i %s\n", n, "is negative");
	}

	return (0);

}
